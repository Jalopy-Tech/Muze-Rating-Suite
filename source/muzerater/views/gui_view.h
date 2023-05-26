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

#ifndef GUI_VIEW_H
#define GUI_VIEW_H

#include "view.h"
#include "presenter.h"
#include "muzeraterwizard.h"

#include <QDebug>
#include <QFileDialog>



class Presenter;

class GuiView : public View
{
    Q_OBJECT


public:

    enum {WelcomeWPID, DatabaseWPID, ITunesWPID, Foobar2000WPID, OutputWPID,
             FilterByRatedWPID, SummaryWPID, ProcessWPID, LastWPID};

    explicit GuiView(QObject *parent = nullptr);
            ~GuiView();

    int exec() override;

    void setVersion(const QString& version) override;
    int databaseType() override;
    void setDatabaseType(int databaseType) override;

    void setWelcomeText(const QString& text) override;

    bool isITunesDefaultLibrary() override;

    void setITunesDefaultLibrary(bool isDefault) override;
    void setITunesDefaultLibraryEnabled(bool isEnabled) override;

    void setITunesValid(bool isValid) override;
     void setITunesDefaultLibraryFilePath(const QString& filePath) override;

    void setITunesDefaultLibraryFilePathEnabled(bool isEnabled) override;
    void setITunesCustomLibraryFilePath(const QString& filePath) override;
    QString iTunesCustomLibraryFilePath() override;
    void setITunesCustomLibraryFilePathEnabled(bool isEnabled) override;
    void setITunesCustomLibraryFilePathBrowseEnabled(bool isEnabled) override;
    void setITunesDefaultLibraryNotAvailableWarning(bool isNotAvailable) override;

    void setFoobar2000ClipboardChecked(bool isChecked) override;
    bool isFoobar2000ClipboardChecked() override;
    void setFoobar2000Valid(bool isValid) override;

    void setOutputType(int output) override;
    int outputType() override;
    QString outputSaveAsFilePath() override;
    void setOutputSaveAsFilePath(const QString& filePath) override;
    void setOutputSaveAsFilePathEnabled(bool isEnabled) override;
    void setOutputSaveAsFilePathBrowseEnabled(bool isEnabled) override;
    void setOutputValid(bool isValid) override;

    int minRatedTracksFilter() override;
    void setMinRatedTracksFilter(int n) override;
    int maxRatedTracksFilter() override;
     void setMaxRatedTracksFilter(int n) override;
    void setMaxRatedTracksFilterEnabled(bool isEnabled) override;
    bool hasMaxRatedTracksFilter() override;
    void setHasMaxRatedTracksFilter(bool hasMax) override;

    void setSummary(const QString& summary) override;

    void updateProgress(int progress, const QString& progressText) override;

    void setOutputFilePath(const QString& filePath) override;
    void reeditOutput() override;
    void setOutputOverwriteAllowed(bool isAllowed) override;



    QString browseSelectFilePath(const QString& title, const QStringList& filters) override;
    QString browseSaveFilePath(const QString& title, const QStringList& filters,
                               const QString& fileName, const QString& dirPath) override;
    bool confirmOverwriteFilePath(const QString& title, const QString& filePath) override;

    void setHasError(bool hasError) override;
    void showError(const QString& msg) override;
    void showResult() override;


private:


    bool isVisibleMoreInformation;
    QStringList outFileFilters;

    bool hasProcessError = false;
    bool fNeedsCheckFileExists;

    int _databaseType;
    QString _iTunesLibraryFilePath;
    QString _iTunesDefaultLibraryFilePath;

    int _outputType;
    QString _outFilePath;
    QString _outTempFileName;
    bool _isTempDir;

    bool _hasMinRatedTracksFilter;
    int _minRatedTracksFilter;
    bool _hasMaxRatedTracksFilter;
    int _maxRatedTracksFilter;


    MuzeRaterWizard muzeRaterWizard;

    MuzeRaterWelcomeWizardPage *welcomeWP;
    MuzeRaterDatabaseWizardPage *databaseWP;
    MuzeRaterITunesWizardPage *iTunesWP;
    MuzeRaterFoobar2000WizardPage *foobar2000WP;
    MuzeRaterOutputWizardPage *outputWP;
    MuzeRaterFilterByRatedWizardPage *filterByRatedWP;
    MuzeRaterSummaryWizardPage *summaryWP;
    MuzeRaterProcessWizardPage *processWP;
    MuzeRaterResultWizardPage *resultWP;



private slots:
    void handlePageChanged(int id);
    void handleITunesLibraryChanged();
    void launchFile(const QString& filePath) override;
    void launchDir(const QString& dirPath) override;


};


#endif

