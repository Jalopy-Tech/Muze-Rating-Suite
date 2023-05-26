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

   ------------------------------------------------------------------------------------

*/


#ifndef PRESENTER_H
#define PRESENTER_H

#include "view.h"
#include "album.h"
#include "itunesalbumextractor.h"
#include "foobar2000albumextractor.h"
#include "muzeratingcalculator.h"

#include <QDebug>
#include <QDesktopServices>
#include <QApplication>
#include <QSettings>
#include <QTemporaryDir>



class Presenter : public QObject
{
    Q_OBJECT

public:

    enum {displayWebpageReportFormat, saveWebpageReportFormat,
           saveXMLDataFileFormat, saveCSVDataFileFormat};


    enum {ITunesDatabase, Foobar2000Database};

    explicit       Presenter(View* view, QObject *parent = nullptr);
    ~Presenter();


signals:

    void        trackReadingStarted();
    void        trackReadingInitialised();
    void        trackRead();
    void        trackReadingFinalised();
    void        trackReadingFinished();

    void        albumWritingStarted();
    void        albumWritingInitialised();
    void        albumWritten();
    void        albumWritingFinalised();
    void        albumWritingFinished();



public slots:

    void        processData();
    void        updateProgress(int percentage, const QString& description);
    void        updateScaledProgress(int base, int scale, int unscaledPercentage, const QString& description);
    void        raiseError(const QString& errorMessage);


private:
    View *view;

    void setVersion();
    int         basePercentage = 0;

    void        writeAlbums(QFile *outFile, QByteArray *inArray);


    void        copyAlbumsFromXMLToHTML(QIODevice *inDevice, QIODevice *outDevice);


    bool        removeExistingFile(const QString& filePath);

    void        createHTMLReport();
    void        createXMLData();

    AlbumCollection albumCollection;

    QTemporaryDir  *tempDir = NULL;
    QStringList toStringList(const QList<QByteArray> list);


    QString _welcomeText;

    int _databaseType = 0;

    bool _isITunesDefaultLibrary = true;
    QFile *_iTunesLibraryFile;
    QString _iTunesDefaultLibraryFilePath = "";
    QString _iTunesCustomLibraryFilePath = "";

    bool    _isFoobar2000ClipboardChecked;

    int _outputType = 0;
    QString _outputSaveAsFilePath = "";
    QString _outputTempFileName = "Muze Ratings";
    QString _outputFilePath = 0;
    bool _outputFilePathOverwriteAllowed = false;
    QString _outputDefaultFilePath = "";
    bool _isOutputTempDir = true;
    QStringList _outputFileFilters;


    int _minRatedTracksFilter = 1;
    int _maxRatedTracksFilter = -1;
    bool _hasMaxRatedTracksFilter = false;

    void setupITunesDefaultLibrary();
    void handleITunesLibrarySettings();
    void handleWelcomeText();
    QString summary();
    void setSummary();

    void showResult();

    void saveSettings();
    void restoreSettings();

    bool errorFlag = false;
    bool hasError = false;

private slots:


    void handleDatabaseTypeChanged();
    void handleITunesLibraryChanged();
    void browseIIunesCustomFilePath();
    void handleOutputTypeChanged();
    void browseOutputSaveAsFilePath();
    void doOutputOverwriteCheck();

    void handleOutputSaveAsFilePathChanged();
    void handleHasMaxRatedTracksFilterChanged();
    void handleMinRatedTracksFilterChanged();
    void handleMaxRatedTracksFilterChanged();
    void handleFoobar2000ClipboardCheckedChanged();
    void launchOutputFile();
    void showOutputDir();
    void help();

};

#endif
