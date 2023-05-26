/*
    Copyright (C) 2020 Robert J. Joynt and Kester Falge.

    This software uses the QT (https://www.qt.io/) GPLv3 Open Source License
    (https://doc.qt.io/qt-5/gpl.html).

    This software is distributed under the GNU General Public License Version 3.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    (https://www.gnu.org/licenses/).
*/


#include "presenter.h"

Presenter::Presenter(View *view, QObject *parent)
    : QObject(parent)
{
    this->view = view;
    connect(view, &View::processDataRequested, this, &Presenter::processData);
    connect(view, &View::databaseTypeChanged, this, &Presenter::handleDatabaseTypeChanged);
    connect(view, &View::iTunesLibraryChanged, this, &Presenter::handleITunesLibraryChanged);
    connect(view, &View::browseIIunesCustomFilePathRequested, this, &Presenter::browseIIunesCustomFilePath);

    connect(view, &View::foobar2000ClipboardCheckedChanged, this, &Presenter::handleFoobar2000ClipboardCheckedChanged);

    connect(view, &View::outputTypeChanged, this, &Presenter::handleOutputTypeChanged);
    connect(view, &View::outputSaveAsFilePathChanged, this, &Presenter::handleOutputSaveAsFilePathChanged);
    connect(view, &View::browseOutputSaveAsFilePathRequested, this, &Presenter::browseOutputSaveAsFilePath);
    connect(view, &View::outputCompleted, this, &Presenter::doOutputOverwriteCheck);



    connect(view, &View::minRatedTracksFilterChanged, this, &Presenter::handleMinRatedTracksFilterChanged);
    connect(view, &View::maxRatedTracksFilterChanged, this, &Presenter::handleMaxRatedTracksFilterChanged);
    connect(view, &View::hasMaxRatedTracksFilterChanged, this, &Presenter::handleHasMaxRatedTracksFilterChanged);

    connect(view, &View::launchOutputFileRequested, this, &Presenter::launchOutputFile);
    connect(view, &View::showOutputFolderRequested, this, &Presenter::showOutputDir);

    connect(view, &View::helpRequested, this, &Presenter::help);

    setVersion();
    handleWelcomeText();

    view->setDatabaseType(0);
    view->setOutputOverwriteAllowed(true);

    setupITunesDefaultLibrary();

    _outputDefaultFilePath = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation)[0];

    _outputType = 0;
    view->setOutputType(_outputType);
    handleOutputTypeChanged();

    _minRatedTracksFilter = 1;
    view->setMinRatedTracksFilter(_minRatedTracksFilter);

    _maxRatedTracksFilter = 1;
    view->setMaxRatedTracksFilter(_maxRatedTracksFilter);

    _hasMaxRatedTracksFilter = false;
    view->setHasMaxRatedTracksFilter( _hasMaxRatedTracksFilter);
    handleHasMaxRatedTracksFilterChanged();
    handleMinRatedTracksFilterChanged();

    view->setSummary(summary());

    view->setHasError(false);

    restoreSettings();
}

Presenter::~Presenter()
{
    if (tempDir != NULL) {
        tempDir->remove();
        delete tempDir;
    }
}

void Presenter::handleWelcomeText() {

    QString welcomeTextPath = ":files/welcome.md";
    QString welcomeText = "";

    QFile file(welcomeTextPath);
    errorFlag = !file.open(QIODevice::ReadOnly);
    if (errorFlag)
        welcomeText = "Welcome to the Muze Rater";
     else
        welcomeText = QString::fromLatin1(file.readAll());

   view->setWelcomeText(welcomeText);

}

void Presenter::handleDatabaseTypeChanged() {
    _databaseType = view->databaseType();

    view->setSummary(summary());
}



void Presenter::setupITunesDefaultLibrary() {

    _iTunesDefaultLibraryFilePath = QStandardPaths::standardLocations(
       QStandardPaths::MusicLocation)[0] + "/iTunes/iTunes Music Library.xml";
    _iTunesCustomLibraryFilePath = "";

    view->setITunesDefaultLibraryFilePath(QDir::toNativeSeparators(_iTunesDefaultLibraryFilePath));
    view->setITunesCustomLibraryFilePath(_iTunesCustomLibraryFilePath);

    QFileInfo fileInfo(_iTunesDefaultLibraryFilePath);
    bool isAvailable = fileInfo.exists();

    _isITunesDefaultLibrary = isAvailable;
     view->setITunesDefaultLibrary(_isITunesDefaultLibrary);
     view->setITunesDefaultLibraryNotAvailableWarning(!isAvailable);
     view->setITunesValid(isAvailable);
     view->setITunesDefaultLibraryEnabled(isAvailable);

    handleITunesLibrarySettings();


}


void Presenter::browseIIunesCustomFilePath() {

    QString title =  "Select iTunes Music Library XML File";
    QStringList filters({"XML files (*.xml)", "Any files (*)"});


    QString filePath = view->browseSelectFilePath(title, filters);

    if (filePath != "") {
        _iTunesCustomLibraryFilePath = filePath;
        view->setITunesCustomLibraryFilePath(QDir::toNativeSeparators(_iTunesCustomLibraryFilePath));

        handleITunesLibraryChanged();

    }
}


void Presenter::handleITunesLibraryChanged() {

    _isITunesDefaultLibrary = view->isITunesDefaultLibrary();
    _iTunesCustomLibraryFilePath = view->iTunesCustomLibraryFilePath();

    handleITunesLibrarySettings();

}

void Presenter::handleITunesLibrarySettings() {

    view->setITunesDefaultLibraryFilePathEnabled(_isITunesDefaultLibrary);
    view->setITunesCustomLibraryFilePathEnabled(!_isITunesDefaultLibrary);
    view->setITunesCustomLibraryFilePathBrowseEnabled(!_isITunesDefaultLibrary);


    if  (_isITunesDefaultLibrary) {
        view->setITunesValid(true);
    } else {
        QString filePath = view->iTunesCustomLibraryFilePath();
        QFileInfo fileInfo(filePath);
        bool fExists = fileInfo.isFile();
        view->setITunesValid(fExists);
    }

    view->setSummary(summary());
}


void Presenter::handleFoobar2000ClipboardCheckedChanged() {

    _isFoobar2000ClipboardChecked = view->isFoobar2000ClipboardChecked();
    view->setFoobar2000Valid(_isFoobar2000ClipboardChecked);

    view->setSummary(summary());
}


void Presenter::browseOutputSaveAsFilePath() {

    QString title = "Save File As";


    QString fileName = "Muze Ratings";
    QString filePath = view->browseSaveFilePath(title, _outputFileFilters, fileName, _outputDefaultFilePath);

    if (filePath != "") {
        _outputSaveAsFilePath = filePath;

        view->setOutputSaveAsFilePath(QDir::toNativeSeparators(_outputSaveAsFilePath));

        _outputSaveAsFilePath = view->outputSaveAsFilePath();
        view->setOutputValid(_outputSaveAsFilePath != "");
        view->setSummary(summary());

        _outputFilePathOverwriteAllowed = true;
        view->setOutputOverwriteAllowed(_outputFilePathOverwriteAllowed);

    }
}


void Presenter::handleOutputSaveAsFilePathChanged() {
    _outputSaveAsFilePath = view->outputSaveAsFilePath();

    _outputFilePathOverwriteAllowed = false;
    view->setOutputValid(_outputSaveAsFilePath != "");
    view->setSummary(summary());
}

void Presenter::doOutputOverwriteCheck() {

    if (_outputFilePathOverwriteAllowed) {
        view->setOutputOverwriteAllowed(_outputFilePathOverwriteAllowed);
    } else {
        QFileInfo outputFileInfo(_outputSaveAsFilePath);
        if (outputFileInfo.exists()) {
            bool fOverwrite = view->confirmOverwriteFilePath("Confirm Save As", _outputFilePath);

            if (fOverwrite) {
                _outputFilePathOverwriteAllowed = true;
                view->setOutputOverwriteAllowed(_outputFilePathOverwriteAllowed);

            } else {
                _outputFilePathOverwriteAllowed = false;
                view->setOutputOverwriteAllowed(_outputFilePathOverwriteAllowed);

            }
        }
     }
}






void Presenter::handleOutputTypeChanged() {

    _outputType = view->outputType();

    _isOutputTempDir = false;
    _outputTempFileName = "";


    if (_outputType == View::displayWebpageReportFormat) {
        _outputTempFileName = "Muze Ratings.html";
        _isOutputTempDir = true;
        _outputSaveAsFilePath = "";

        view->setOutputSaveAsFilePathEnabled(false);
        view->setOutputSaveAsFilePathBrowseEnabled(false);
        view->setOutputSaveAsFilePath("");
        view->setOutputValid(true);
        view->setOutputOverwriteAllowed(true);


   } else {

        view->setOutputSaveAsFilePathEnabled(true);
        view->setOutputSaveAsFilePathBrowseEnabled(true);

        view->setOutputValid(true);
   }

    if (_outputType == View::saveWebpageReportFormat) {
         _outputSaveAsFilePath = _outputDefaultFilePath + "/Muze Ratings.html";
        view->setOutputSaveAsFilePath(QDir::toNativeSeparators(_outputSaveAsFilePath));
        _outputFileFilters = QStringList({"HTML files (*.html)"});
    }

    if (_outputType == View::saveXMLDataFileFormat) {
        _outputSaveAsFilePath = _outputDefaultFilePath + "/Muze Ratings.xml";
        view->setOutputSaveAsFilePath(QDir::toNativeSeparators(_outputSaveAsFilePath));
        _outputFileFilters = QStringList({"XML files (*.xml)"});
    }


    view->setSummary(summary());
}

void Presenter::showResult() {
    if (_isOutputTempDir)
        view->setOutputFilePath("a temporary folder.");
    else
        view->setOutputFilePath(QDir::toNativeSeparators(_outputSaveAsFilePath));

    view->showResult();

}

void Presenter::saveSettings() {
    QSettings settings;
    settings.setValue("muzeRater/databaseType", _databaseType);
}


void Presenter::restoreSettings() {

    QSettings settings;
    int _databaseType  = settings.value("muzeRater/databaseType").toInt();

    view->setDatabaseType(_databaseType);
    view->setSummary(summary());
}


void Presenter::handleHasMaxRatedTracksFilterChanged(){
    _hasMaxRatedTracksFilter = view->hasMaxRatedTracksFilter();

    if (_hasMaxRatedTracksFilter) {
       view->setMaxRatedTracksFilterEnabled(true);
       if (_maxRatedTracksFilter < _minRatedTracksFilter) {
           _minRatedTracksFilter = _maxRatedTracksFilter;
           view->setMinRatedTracksFilter(_minRatedTracksFilter);
        }
    } else {
        view->setMaxRatedTracksFilterEnabled(false);
        _maxRatedTracksFilter = _minRatedTracksFilter;
        view->setMaxRatedTracksFilter(_maxRatedTracksFilter);

    }
    view->setSummary(summary());
}


void Presenter:: handleMinRatedTracksFilterChanged(){
    _minRatedTracksFilter = view->minRatedTracksFilter();
     if (_hasMaxRatedTracksFilter) {
         if (_minRatedTracksFilter > _maxRatedTracksFilter) {
             _maxRatedTracksFilter = _minRatedTracksFilter;
             view->setMaxRatedTracksFilter(_maxRatedTracksFilter);
         }
     } else {
         _maxRatedTracksFilter = _minRatedTracksFilter;
         view->setMaxRatedTracksFilter(_maxRatedTracksFilter);
     }

    view->setSummary(summary());
}


void Presenter::handleMaxRatedTracksFilterChanged() {
    _maxRatedTracksFilter = view->maxRatedTracksFilter();
    if (_maxRatedTracksFilter < _minRatedTracksFilter) {
        _minRatedTracksFilter = _maxRatedTracksFilter;
        view->setMinRatedTracksFilter(_minRatedTracksFilter);
    }

    view->setSummary(summary());
}


QString Presenter::summary() {

    QString summary = "";

    summary += "The following options have been selected:\n\n";
    summary += "<ul style=""list-style-type:disc"">";

    if (_databaseType == ITunesDatabase) {
        summary += "<li>Use an iTunes Music Library.<br></li>";

        if (_isITunesDefaultLibrary) {
            summary += "<li>Use the default iTunes Music Library XML database.<br>";
            summary += "(" + QDir::toNativeSeparators(_iTunesDefaultLibraryFilePath) + ")<br></li>";
        } else {
            summary += "<li>Use a manually selected iTunes Music Library XML database file.<br>";
            summary += "(" + QDir::toNativeSeparators(_iTunesCustomLibraryFilePath) + ")<br></li>";
        }
    }

    if (_databaseType == Foobar2000Database) {
        summary += "<li>Use a foobar2000 database.<br></li>";

        if (_isFoobar2000ClipboardChecked)
            summary += "<li>Read the foobar2000 Album Ratings SQL data from the clipboard.<br></li>";
        else
            summary += "<li>Warning: the foobar2000 Album Ratings SQL data needs to come from the clipboard<br></li>";
    }


    if (_outputType == View::displayWebpageReportFormat) {
        summary +=  "<li>Display a webpage report (HTML).<br></li>";


    } else if (_outputType == View::saveWebpageReportFormat) {
        summary +=  "<li>Save and display a webpage report (HTML).<br>";
        summary += "(" + QDir::toNativeSeparators(_outputSaveAsFilePath) + ")<br></li>";

    } else if (_outputType == View::saveXMLDataFileFormat) {
        summary +=  "<li>Save an XML data file.<br>";
        summary += "(" + QDir::toNativeSeparators(_outputSaveAsFilePath) + ")<br></li>";

    }

    summary +=  "<li>";
    summary +=  QString("") + "Only include albums with a minimum number of rated tracks of " +
             QString::number(_minRatedTracksFilter) + ".<br>";

    if (_hasMaxRatedTracksFilter) {
        summary +=  QString("") + "Also, only include albums with a maximum number of rated tracks of " +
           QString::number(_maxRatedTracksFilter) + ".<br>";
    }
    summary +=  "</li>";
    summary += "</ul>";

    return summary;
}


void Presenter::launchOutputFile() {
    view->launchFile(_outputFilePath);
}


void Presenter::showOutputDir() {
    QFileInfo fileInfo(_outputFilePath);

    view->launchDir(fileInfo.absolutePath());
}


void Presenter::copyAlbumsFromXMLToHTML(QIODevice *inDevice, QIODevice *outDevice) {
    QString queryText = "";

    QStringList queryFilenameList;

    updateProgress(basePercentage + 1,"Started copying albums.");

    QString path = QCoreApplication::applicationDirPath();
    //queryFilenameList
    //  << path + "/xq/header-xquery.xq"
    //  << path + "/xq/html-albums.xq";

    queryFilenameList
        << ":xq/header-xquery.xq"
        << ":xq/html-albums.xq";


    updateProgress(basePercentage + 2,"Preparing XQuery to copy albums.");

    for (int i = 0; i < queryFilenameList.size(); ++i) {

        QFile queryFile(queryFilenameList[i]);
        errorFlag = !queryFile.open(QIODevice::ReadOnly);
        if (errorFlag) {
            QString msg = "The XQuery cannot be opened for reading. The query file is \n\n"
                     + queryFilenameList[i];
            raiseError(msg);
          }
         queryText = queryText + QString::fromLatin1(queryFile.readAll());

    }

    updateProgress(basePercentage + 3, "Initializing albums to copy...");

    inDevice->open(QIODevice::ReadOnly);
    outDevice->open(QIODevice::ReadWrite);

    updateProgress(basePercentage + 4, "Initializing XQuery to copy albums...");
    QXmlQuery query;
    errorFlag = !query.setFocus(inDevice);
    if (errorFlag) {
        QString msg = "The XQuery cannot receive input from the albums in memory" ;

        view->showError(msg);
        return;
     }
    query.setQuery(queryText);

    updateProgress(basePercentage + 5, "Running XQuery to copy albums. This may take some time. Please wait...");
    QXmlFormatter formatter(query, outDevice);
    errorFlag = !query.evaluateTo(&formatter);
    if (errorFlag) {
        QString msg = "The XQuery cannot be evaluated. The query files are \n\n"
                + queryFilenameList.join(", ");
        raiseError(msg);
     }
    updateProgress(basePercentage + 6,"Finalizing copying albums...");
    inDevice->close();
    outDevice->close();

    updateProgress(basePercentage + 7, "Finished copying albums.");
}


void Presenter::createHTMLReport()
{

    if (_isOutputTempDir) {
        tempDir = new QTemporaryDir();

        errorFlag = !tempDir->isValid();
        if (errorFlag) {
            QString msg = QString("") + \
                "A temporary directory could not be created." + \
                "\n\nThe error is \n\n" + tempDir->errorString();

            raiseError(msg);
            return;
         }


        _outputFilePath = tempDir->path() + "/" + _outputTempFileName;

    } else {
        _outputFilePath = _outputSaveAsFilePath;
    }



    errorFlag = !removeExistingFile(_outputFilePath);
    if (errorFlag)
        return;

    QFileInfo outputFileInfo(_outputFilePath);
    QFileInfo jsOutDir(outputFileInfo.absoluteDir().path() + "/js");
    if (!jsOutDir.exists()) {

        errorFlag = !outputFileInfo.absoluteDir().mkdir("js");
        if (errorFlag) {
             QString msg = QString("") + \
                     "A subfolder for the js (javascript) files could not be made. " + \
                     "\n\nThe folder path is: " + \
                     QDir::toNativeSeparators(_outputFilePath + "/js");

             raiseError(msg);
        }
    }




    QString jsFilename = "sort-table-on-click.js";
    QString jsRelativeFilePath = "/js/" + jsFilename;
    QString jsOutFilePath = outputFileInfo.path() + jsRelativeFilePath;
    QFile jsOutFile(jsOutFilePath);

    //QString jsSourcePath = QCoreApplication::applicationDirPath() + jsRelativeFilePath;
    QString jsSourcePath = ":js/" + jsFilename;

    QFile jsSourceFile(jsSourcePath);

    if (jsOutFile.exists()) {
        errorFlag = !jsOutFile.remove();
        if (errorFlag) {
            QString msg = QString("") + \
                    "There is already a js (java script) file " + jsFilename  + \
                    " in the folder " + QDir::toNativeSeparators(jsOutFilePath) + \
                    " that cannot be deleted.";

            raiseError(msg);

         }
    }

    errorFlag = !jsSourceFile.copy(jsOutFilePath);
    if (errorFlag) {
        QString msg = QString("") + \
            "The js (java script) file " + jsFilename + \
            " cannot be copied from:\n\n" + \
            QDir::toNativeSeparators(jsSourcePath) + \
            "\n\nto:\n\n" + \
            QDir::toNativeSeparators(jsOutFilePath) + \
            "";


        raiseError(msg);

     }


    QFile inputFile;
    QFile outputFile;

    outputFile.setFileName(_outputFilePath);


    QApplication::setOverrideCursor(Qt::WaitCursor);
    QBuffer buffer;

    basePercentage = 0;
    updateProgress(0, "Start reading album database.");

    AlbumExtractor *albumExtractor;

    if (view->databaseType() == View::ITunesDatabase) {
        albumExtractor = new ITunesAlbumExtractor();
        if (_isITunesDefaultLibrary)
            inputFile.setFileName(_iTunesDefaultLibraryFilePath);
        else
            inputFile.setFileName(_iTunesCustomLibraryFilePath);

    }

    if (view->databaseType() == View::Foobar2000Database) {
        albumExtractor = new Foobar2000AlbumExtractor();

    }

    connect( albumExtractor, &AlbumExtractor::progressUpdated,
             this, [=](int percentage, const QString &description)
             { this->updateScaledProgress(0, 80, percentage, description); });

   connect(albumExtractor, &AlbumExtractor::error, this, &Presenter::raiseError);

    albumExtractor->setRatedTracksFilter(_minRatedTracksFilter,
                     (_hasMaxRatedTracksFilter ? _maxRatedTracksFilter : -1));

    albumExtractor->getXMLData(&inputFile, &buffer);

    basePercentage = 80;
    updateProgress(80, "Create HTML report using XQuery.");

    copyAlbumsFromXMLToHTML(&buffer, &outputFile);

    updateProgress(90, "Opening HTML report... please wait.");


    QDesktopServices::openUrl(QUrl::fromLocalFile(_outputFilePath));

    updateProgress(100, "Finished creating report.");
    QApplication::restoreOverrideCursor();
    showResult();
}


void Presenter::createXMLData()
{
    _outputFilePath = _outputSaveAsFilePath;

    errorFlag = !removeExistingFile(_outputFilePath);
    if (errorFlag)
        return;

    QFile inputFile;
    QFile outputFile;

    outputFile.setFileName(_outputFilePath);

    QApplication::setOverrideCursor(Qt::WaitCursor);


    basePercentage = 0;
    updateProgress(0, "Start reading album database.");

    AlbumExtractor *albumExtractor;


    if (view->databaseType() == View::ITunesDatabase) {
        albumExtractor = new ITunesAlbumExtractor();
        if (_isITunesDefaultLibrary)
            inputFile.setFileName(_iTunesDefaultLibraryFilePath);
        else
            inputFile.setFileName(_iTunesCustomLibraryFilePath);

    }

    if (view->databaseType() == View::Foobar2000Database) {
        albumExtractor = new Foobar2000AlbumExtractor();

    }

    connect( albumExtractor, &AlbumExtractor::progressUpdated,
             this, [=](int percentage, const QString &description)
             { this->updateScaledProgress(0, 80, percentage, description); });

    connect(albumExtractor, &AlbumExtractor::error, this, &Presenter::raiseError);

    albumExtractor->setRatedTracksFilter(view->minRatedTracksFilter(),
                       (_hasMaxRatedTracksFilter ? _maxRatedTracksFilter : -1));

    albumExtractor->getXMLData(&inputFile, &outputFile);


   updateProgress(100, "Finished creating data.");


   QApplication::restoreOverrideCursor();

    showResult();
}



bool Presenter::removeExistingFile(const QString& filePath) {

    QFile file(filePath);
    file.setFileName(filePath);
    errorFlag = false;
    if (file.exists()) {
        errorFlag = !file.remove();
         if (errorFlag) {
             QString msg = QString("") + \
                     "The existing file cannot be removed. Check the " + \
                     "permissions of the file or try to remove it manually." + \
                     "\n\nThe file is: " + QDir::toNativeSeparators(_outputFilePath);

             raiseError(msg);

          }
    }
    return !errorFlag;
}


void Presenter::updateProgress(int percentage, const QString& description) {

    if (percentage < 0)
        percentage = 0;

    if (percentage > 100)
        percentage = 100;

        view->updateProgress(percentage, description);
}


void Presenter::updateScaledProgress(int base, int scale, int unscaledPercentage, const QString& description) {
   int percentage = base + unscaledPercentage * (float) scale/100.0;

    if (percentage < 0)
        percentage = 0;

    if (percentage > 100)
        percentage = 100;

        view->updateProgress(percentage, description);
}


void Presenter::processData() {

    saveSettings();

    if (_outputType == View::displayWebpageReportFormat
        || _outputType == View::saveWebpageReportFormat)
    createHTMLReport();

    else if(_outputType == View::saveXMLDataFileFormat)
        createXMLData();

    return;
}


void Presenter::raiseError(const QString& errorMessage) {
    hasError = true;
    view->setHasError(true);
    view->showError(errorMessage);
}

void Presenter::help() {

        QString link = "https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/Muze-Rater.md";
        QDesktopServices::openUrl(QUrl(link));

}

void Presenter::setVersion() {
    view->setVersion("Version " + QCoreApplication::applicationVersion());
}
