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

#ifndef VIEW_H
#define VIEW_H


#include <QObject>
#include <QFile>

class Presenter;

class View : public QObject
{
    Q_OBJECT


public:

    enum {displayWebpageReportFormat, saveWebpageReportFormat,
           saveXMLDataFileFormat};


    enum {ITunesDatabase, Foobar2000Database};

    explicit        View(QObject *parent = nullptr);  
    ~View();
    virtual int exec() = 0;

    virtual void setVersion(const QString& version) = 0;
    virtual void setWelcomeText(const QString& text) = 0;

    virtual void setDatabaseType(int databaseType) = 0;
    virtual int databaseType() = 0;

    virtual bool isITunesDefaultLibrary() = 0;
    virtual void setITunesDefaultLibrary(bool isDefault) = 0;
    virtual void setITunesDefaultLibraryEnabled(bool isEnabled) = 0;
    virtual void setITunesValid(bool isValid) = 0;
    virtual void setITunesDefaultLibraryFilePath(const QString& filePath) = 0;
    virtual void setITunesDefaultLibraryFilePathEnabled(bool isEnabled) = 0;
    virtual void setITunesCustomLibraryFilePath(const QString& filePath) = 0;
    virtual QString iTunesCustomLibraryFilePath() = 0;
    virtual void setITunesCustomLibraryFilePathEnabled(bool isEnabled) = 0;
    virtual void setITunesCustomLibraryFilePathBrowseEnabled(bool isEnabled) = 0;
    virtual void setITunesDefaultLibraryNotAvailableWarning(bool isNotAvailable) = 0;

    virtual void setFoobar2000ClipboardChecked(bool isChecked) = 0;
    virtual bool isFoobar2000ClipboardChecked() = 0;
    virtual void setFoobar2000Valid(bool isValid) = 0;

    virtual void setOutputType(int outputType) = 0;
    virtual int outputType() = 0;
    virtual QString outputSaveAsFilePath() = 0;
    virtual void setOutputSaveAsFilePath(const QString& filePath) = 0;
    virtual void setOutputSaveAsFilePathEnabled(bool isEnabled) = 0;
    virtual void setOutputSaveAsFilePathBrowseEnabled(bool isEnabled) = 0;
    virtual void setOutputValid(bool isValid) = 0;

    virtual int minRatedTracksFilter() = 0;
    virtual void setMinRatedTracksFilter(int n) = 0;
    virtual int maxRatedTracksFilter() = 0;
    virtual void setMaxRatedTracksFilter(int n) = 0;
    virtual bool hasMaxRatedTracksFilter() = 0;
    virtual void setHasMaxRatedTracksFilter(bool hasMax) = 0;
    virtual void setMaxRatedTracksFilterEnabled(bool isEnabled) = 0;

    virtual void setSummary(const QString& summary) = 0;

    virtual void updateProgress(int progress, const QString& progressText) = 0;

    virtual void setOutputFilePath(const QString& filePath) = 0;
    virtual void reeditOutput() = 0;
    virtual void setOutputOverwriteAllowed(bool isAllowed) = 0;


    virtual void showError(const QString& msg) = 0;
    virtual void setHasError(bool hasError) = 0;
    virtual QString browseSelectFilePath(const QString& title, const QStringList& filters) = 0;
    virtual QString browseSaveFilePath(const QString& title, const QStringList& filters,
                                       const QString& fileName, const QString& dirPath) = 0;
    virtual bool confirmOverwriteFilePath(const QString& title, const QString& filePath) = 0;

    virtual void showResult() = 0;

    virtual void launchFile(const QString& filePath) = 0;
    virtual void launchDir(const QString& dirPath) = 0;

signals:
    void createHTMLReportRequested();
    void processDataRequested();

    void databaseTypeChanged();
    void iTunesLibraryChanged();
    void browseIIunesCustomFilePathRequested();
    void foobar2000ClipboardCheckedChanged();

    void outputTypeChanged();
    void outputSaveAsFilePathChanged();
    void browseOutputSaveAsFilePathRequested();
    void outputCompleted();

    void minRatedTracksFilterChanged();
    void maxRatedTracksFilterChanged();
    void hasMaxRatedTracksFilterChanged();

    void launchOutputFileRequested();
    void showOutputFolderRequested();

    void helpRequested();

protected:
    Presenter *presenter = NULL;

};


#endif

