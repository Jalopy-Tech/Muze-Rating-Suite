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


#include "gui_view.h"


GuiView::GuiView(QObject *parent)
    : View(parent)
{

    welcomeWP = new MuzeRaterWelcomeWizardPage();
    muzeRaterWizard.setPage(GuiView::WelcomeWPID,welcomeWP);

    databaseWP = new MuzeRaterDatabaseWizardPage();
    muzeRaterWizard.setPage(GuiView::DatabaseWPID,databaseWP);

    iTunesWP = new MuzeRaterITunesWizardPage();
    muzeRaterWizard.setPage(GuiView::ITunesWPID, iTunesWP);

    foobar2000WP = new MuzeRaterFoobar2000WizardPage();
    muzeRaterWizard.setPage(GuiView::Foobar2000WPID, foobar2000WP);

    outputWP = new MuzeRaterOutputWizardPage();
    muzeRaterWizard.setPage(GuiView::OutputWPID, outputWP);

    filterByRatedWP = new MuzeRaterFilterByRatedWizardPage();
    muzeRaterWizard.setPage(GuiView::FilterByRatedWPID, filterByRatedWP);

    summaryWP = new MuzeRaterSummaryWizardPage();
    muzeRaterWizard.setPage(GuiView::SummaryWPID, summaryWP);

    processWP= new MuzeRaterProcessWizardPage();
    muzeRaterWizard.setPage(GuiView::ProcessWPID, processWP);

    resultWP = new MuzeRaterResultWizardPage();
    muzeRaterWizard.setPage(GuiView::LastWPID, resultWP);

    muzeRaterWizard.setStartId(GuiView::WelcomeWPID);


    connect(&muzeRaterWizard, &QWizard::currentIdChanged, this, &GuiView::handlePageChanged);

    connect(databaseWP->iTunesRadioButton, &QRadioButton::clicked, this, &View::databaseTypeChanged);
    connect(databaseWP->foobar2000RadioButton, &QRadioButton::clicked, this, &View::databaseTypeChanged);

    connect(iTunesWP->iTunesDefaultLibraryRadioButton, &QRadioButton::clicked, this, &View::iTunesLibraryChanged);
    connect(iTunesWP->iTunesCustomLibraryRadioButton, &QRadioButton::clicked, this, &View::iTunesLibraryChanged);
    connect(iTunesWP->iTunesCustomLibraryFilePathLineEdit, &QLineEdit::textChanged, this, &View::iTunesLibraryChanged);
    connect(iTunesWP->iTunesCustomLibraryFilePathBrowsePushButton, &QRadioButton::clicked, this, &View::browseIIunesCustomFilePathRequested);

    connect(foobar2000WP->foobar2000ClipboardCheckedCheckBox, &QCheckBox::clicked, this, &View::foobar2000ClipboardCheckedChanged);

    connect(outputWP->displayWebpageReportRadioButton, &QRadioButton::clicked, this, &View::outputTypeChanged);
    connect(outputWP->saveWebpageReportRadioButton, &QRadioButton::clicked, this,&View::outputTypeChanged);
    connect(outputWP->saveXMLDataFileRadioButton, &QRadioButton::clicked, this, &View::outputTypeChanged);
    connect(outputWP->outputSaveAsFilePathBrowsePushButton, &QPushButton::clicked, this,&View::browseOutputSaveAsFilePathRequested);
    connect(outputWP->outputSaveAsFilePathLineEdit, &QLineEdit::textChanged, this, &View::outputSaveAsFilePathChanged);
    connect(outputWP, &MuzeRaterOutputWizardPage::outputCompleted, this, &View::outputCompleted);

    connect(filterByRatedWP->minRatedTracksFilterSpinBox,  QOverload<int>::of(&QSpinBox::valueChanged), this, &View::minRatedTracksFilterChanged);
    connect(filterByRatedWP->maxRatedTracksFilterSpinBox,  QOverload<int>::of(&QSpinBox::valueChanged), this, &View::maxRatedTracksFilterChanged);
    connect(filterByRatedWP->hasMaxRatedTracksFilterCheckBox, &QCheckBox::clicked, this, &View::hasMaxRatedTracksFilterChanged);

    connect(resultWP->launchOutputFilePushButton, &QPushButton::clicked, this, &View::launchOutputFileRequested);
    connect(resultWP->showOutputFolderPushButton, &QPushButton::clicked, this, &View::showOutputFolderRequested);

    connect(&muzeRaterWizard, &QWizard::helpRequested, this, &View::helpRequested);


    muzeRaterWizard.show();
    presenter = new Presenter(this);
}

int GuiView::exec() {
    return qApp->exec();
}

GuiView::~GuiView()
{
    delete presenter;
}

void GuiView::setWelcomeText(const QString& text) {
    welcomeWP->welcomeTextBrowser->setMarkdown(text);
}

void GuiView::setVersion(const QString& version) {
    welcomeWP->versionLabel->setText(version);
}

void GuiView::setDatabaseType(int databaseType) {
    if (databaseType == View::ITunesDatabase)
        databaseWP->iTunesRadioButton->setChecked(true);

    if (databaseType == View::Foobar2000Database)
        databaseWP->foobar2000RadioButton->setChecked(true);
}

int GuiView::databaseType() {
   if (databaseWP->iTunesRadioButton->isChecked())
       return View::ITunesDatabase;

   if (databaseWP->foobar2000RadioButton->isChecked())
       return View::Foobar2000Database;

   return 0;
}




void GuiView::handleITunesLibraryChanged() {

    emit iTunesLibraryChanged();
}
void GuiView::handlePageChanged(int id) {

    if (id == GuiView::ProcessWPID) {
        emit processDataRequested();
    }

    if (id == GuiView::LastWPID) {
        muzeRaterWizard.button(QWizard::FinishButton)->setFocus();

    }
}

bool GuiView::isITunesDefaultLibrary() {
    return(iTunesWP->iTunesDefaultLibraryRadioButton->isChecked());
}


void GuiView::setITunesDefaultLibraryFilePath(const QString& filePath) {
    iTunesWP->iTunesDefaultLibraryFilePathLineEdit->
            setText(filePath);
}

void GuiView::setITunesValid(bool isValid) {
    muzeRaterWizard.setField("isITunesValid",isValid);
}


void GuiView::setITunesDefaultLibrary(bool isDefault) {
    if (isDefault)
       iTunesWP->iTunesDefaultLibraryRadioButton->setChecked(true);
    else
        iTunesWP->iTunesCustomLibraryRadioButton->setChecked(true);

}
void GuiView::setITunesDefaultLibraryEnabled(bool isEnabled) {
    iTunesWP->iTunesDefaultLibraryRadioButton->
            setEnabled(isEnabled);
}


void GuiView::setITunesDefaultLibraryNotAvailableWarning(bool isNotAvailable) {
           iTunesWP->iTunesDefaultLibraryNotAvailableLabel->setVisible(isNotAvailable);
}

void GuiView::setITunesDefaultLibraryFilePathEnabled(bool isEnabled) {
    iTunesWP->iTunesDefaultLibraryFilePathLineEdit->
            setEnabled(isEnabled);
}
void GuiView::setITunesCustomLibraryFilePath(const QString& filePath) {
    iTunesWP->iTunesCustomLibraryFilePathLineEdit->
            setText(filePath);
}

QString GuiView::iTunesCustomLibraryFilePath() {
    return iTunesWP->iTunesCustomLibraryFilePathLineEdit->
           text();
}
void GuiView::setITunesCustomLibraryFilePathEnabled(bool isEnabled) {
    iTunesWP->iTunesCustomLibraryFilePathLineEdit->
            setEnabled(isEnabled);
}

void GuiView::setITunesCustomLibraryFilePathBrowseEnabled(bool isEnabled) {
    iTunesWP->iTunesCustomLibraryFilePathBrowsePushButton->
            setEnabled(isEnabled);
}


void GuiView::setFoobar2000ClipboardChecked(bool isChecked) {
    foobar2000WP->foobar2000ClipboardCheckedCheckBox->setChecked(isChecked);
}

bool GuiView::isFoobar2000ClipboardChecked() {
    return foobar2000WP->foobar2000ClipboardCheckedCheckBox->isChecked();
}

void GuiView::setFoobar2000Valid(bool isValid) {
    muzeRaterWizard.setField("isFoobar2000Valid",isValid);
}

QString GuiView::browseSelectFilePath(const QString& title, const QStringList& filters) {
    QFileDialog dialog(&muzeRaterWizard, title);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setOption(QFileDialog::ReadOnly,true);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setLabelText(QFileDialog::Accept,"Select");
    dialog.setNameFilters(filters);
    dialog.setFilter(QDir::Files);

    if (dialog.exec())
        return dialog.selectedFiles()[0];
    else
        return "";
}

QString GuiView::browseSaveFilePath(const QString& title, const QStringList& filters, const QString& fileName, const QString& dirPath) {


    QFileDialog dialog(&muzeRaterWizard, title);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setLabelText(QFileDialog::Accept,"Save");
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    dialog.selectFile(fileName);
    dialog.setDirectory(dirPath);
    dialog.setNameFilters(filters);
    dialog.setFilter(QDir::Files);

    if (dialog.exec())
        return dialog.selectedFiles()[0];
    else
        return "";

}
bool GuiView::confirmOverwriteFilePath(const QString& title, const QString& filePath) {

    QString msg = QString("") + \
        "The file " + \
        QDir::toNativeSeparators(filePath) + \
        " already exists.";

    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Warning);

    msgBox.setText(msg);
    msgBox.setInformativeText("Do you want to replace it?");
    msgBox.setWindowTitle(title);

    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);


    int ret = msgBox.exec();
    return (ret == QMessageBox::Yes);

}


void GuiView::setOutputType(int outputType) {

    switch (outputType) {
        case displayWebpageReportFormat:
            outputWP->displayWebpageReportRadioButton->setChecked(true);
            break;

        case saveWebpageReportFormat:
            outputWP->saveWebpageReportRadioButton->setChecked(true);
            break;

        case saveXMLDataFileFormat:
            outputWP->saveXMLDataFileRadioButton->setChecked(true);
            break;

    }
}




int GuiView::outputType() {
    if (outputWP->displayWebpageReportRadioButton->isChecked())
         return displayWebpageReportFormat;

    if (outputWP->saveWebpageReportRadioButton->isChecked())
        return  saveWebpageReportFormat;

    if (outputWP->saveXMLDataFileRadioButton->isChecked())
        return saveXMLDataFileFormat;


    return 0;
}

void GuiView::setOutputSaveAsFilePath(const QString& filePath) {
    outputWP->outputSaveAsFilePathLineEdit->setText(filePath);
}

QString GuiView::outputSaveAsFilePath() {
    return outputWP->outputSaveAsFilePathLineEdit->text();
}

void  GuiView::setOutputSaveAsFilePathEnabled(bool isEnabled) {
    outputWP->outputSaveAsFilePathLineEdit->setEnabled(isEnabled);
    outputWP->outputSaveAsFilePathLabel->setEnabled(isEnabled);

}

void  GuiView::setOutputSaveAsFilePathBrowseEnabled(bool isEnabled) {
    outputWP->outputSaveAsFilePathBrowsePushButton->setEnabled(isEnabled);

}

void GuiView::setOutputValid(bool isValid) {
    muzeRaterWizard.setField("isOutputValid",isValid);
}

void GuiView::setOutputOverwriteAllowed(bool isAllowed) {
    outputWP->setOverwriteAllowed(isAllowed);
}

void GuiView::reeditOutput() {

}


int GuiView::minRatedTracksFilter() {
   return filterByRatedWP->minRatedTracksFilterSpinBox->value();
}
void GuiView::setMinRatedTracksFilter(int n) {
    filterByRatedWP->minRatedTracksFilterSpinBox->blockSignals(true);
    filterByRatedWP->minRatedTracksFilterSpinBox->setValue(n);
    filterByRatedWP->minRatedTracksFilterSpinBox->blockSignals(false);
}
int GuiView::maxRatedTracksFilter() {
    return filterByRatedWP->maxRatedTracksFilterSpinBox->value();

}
void GuiView::setMaxRatedTracksFilter(int n) {
    filterByRatedWP->maxRatedTracksFilterSpinBox->blockSignals(true);
    filterByRatedWP->maxRatedTracksFilterSpinBox->setValue(n);
    filterByRatedWP->maxRatedTracksFilterSpinBox->blockSignals(false);
}
bool GuiView::hasMaxRatedTracksFilter() {
    return filterByRatedWP->hasMaxRatedTracksFilterCheckBox->isChecked();

}
void GuiView::setHasMaxRatedTracksFilter(bool hasMax) {
   filterByRatedWP->hasMaxRatedTracksFilterCheckBox->setChecked(hasMax);
}

void  GuiView::setMaxRatedTracksFilterEnabled(bool isEnabled){
    filterByRatedWP->maxRatedTracksFilterSpinBox->setEnabled(isEnabled);

}

void GuiView::setSummary(const QString& summary) {
   summaryWP->summaryTextBrowser->setHtml(summary);
}

void GuiView::setOutputFilePath(const QString& filePath) {
    resultWP->outputFilePathLineEdit->setText(filePath);
}

void  GuiView::showError(const QString& msg)
{
    QMessageBox::warning(&muzeRaterWizard, "Error", msg);
}

void  GuiView::setHasError(bool hasError)
{
    resultWP->hasErrorLabel->setVisible(hasError);
}

void GuiView::updateProgress(int progress, const QString& progressText)
{
    processWP->progressBar->setValue(progress);
    processWP->progressLabel->setText(progressText);
}


void GuiView::showResult() {
   muzeRaterWizard.next();
}

void GuiView::launchFile(const QString& filePath) {
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}

void GuiView::launchDir(const QString& dirPath) {
    QDesktopServices::openUrl(QUrl(QString("") + "file:///" + dirPath, QUrl::TolerantMode));
}
