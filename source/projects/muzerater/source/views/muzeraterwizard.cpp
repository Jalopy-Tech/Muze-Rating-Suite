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


#include "muzeraterwizard.h"


MuzeRaterWizard::MuzeRaterWizard(QWidget *parent)
    : QWizard(parent)
{
    setupUi(this);


}


void MuzeRaterWizard::setForegroundToBackground(QWidget *widget) {
    QPalette pal = widget->palette();
    pal.setColor(QPalette::Active, QPalette::Base, widget->palette().color(QPalette::Active, QPalette::Window));
    widget->setPalette(pal);

}

MuzeRaterWelcomeWizardPage::MuzeRaterWelcomeWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
    setupUi(this);

     QString path =  QCoreApplication::applicationDirPath() + "/images/watermark.png";
     setPixmap(QWizard::WatermarkPixmap, QPixmap(path));

}

MuzeRaterDatabaseWizardPage::MuzeRaterDatabaseWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
    setupUi(this);

    QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
    setPixmap(QWizard::LogoPixmap, QPixmap(path));
}



int MuzeRaterDatabaseWizardPage::nextId() const
{
    if (iTunesRadioButton->isChecked()) {
        return MuzeRaterWizard::ITunesPage;
    }

    if (foobar2000RadioButton->isChecked()) {
        return MuzeRaterWizard::Foobar2000Page;
    }

    return 0;
}


MuzeRaterITunesWizardPage::MuzeRaterITunesWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
    setupUi(this);

    QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
    setPixmap(QWizard::LogoPixmap, QPixmap(path));

    MuzeRaterWizard::setForegroundToBackground(iTunesDefaultLibraryFilePathLineEdit);
    registerField("isITunesValid*", isITunesValidCheckBox);
    isITunesValidCheckBox->setVisible(false);
}


int MuzeRaterITunesWizardPage::nextId() const
{
        return MuzeRaterWizard::OutputPage;
}

MuzeRaterFoobar2000WizardPage::MuzeRaterFoobar2000WizardPage(QWidget *parent)
    : QWizardPage(parent)
{

    setupUi(this);

    QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
    setPixmap(QWizard::LogoPixmap, QPixmap(path));


    registerField("isFoobar2000Valid*", isFoobar2000ValidCheckBox);
    isFoobar2000ValidCheckBox->setVisible(false);
}


int MuzeRaterFoobar2000WizardPage::nextId() const
{
        return MuzeRaterWizard::OutputPage;
}



MuzeRaterOutputWizardPage::MuzeRaterOutputWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
    setupUi(this);

    QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
    setPixmap(QWizard::LogoPixmap, QPixmap(path));

    registerField("isOutputValid*", isOutputValidCheckBox);
    isOutputValidCheckBox->setVisible(false);

}



bool MuzeRaterOutputWizardPage::validatePage() {
        emit outputCompleted();

    return _isOverwriteAllowed;
}

void MuzeRaterOutputWizardPage::setOverwriteAllowed(bool isAllowed) {_isOverwriteAllowed = isAllowed; }

MuzeRaterFilterByRatedWizardPage::MuzeRaterFilterByRatedWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
    setupUi(this);

    QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
    setPixmap(QWizard::LogoPixmap, QPixmap(path));

}


MuzeRaterSummaryWizardPage::MuzeRaterSummaryWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
        setupUi(this);
        setCommitPage(true);

        QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
        setPixmap(QWizard::LogoPixmap, QPixmap(path));


        setButtonText(QWizard::CommitButton,"Create");
        MuzeRaterWizard::setForegroundToBackground(summaryTextBrowser);


}


MuzeRaterProcessWizardPage::MuzeRaterProcessWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
        setupUi(this);

        QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
        setPixmap(QWizard::LogoPixmap, QPixmap(path));

}


MuzeRaterResultWizardPage::MuzeRaterResultWizardPage(QWidget *parent)
    : QWizardPage(parent)
{
        setupUi(this);

        QString path =  QCoreApplication::applicationDirPath() + "/images/logo.png";
        setPixmap(QWizard::LogoPixmap, QPixmap(path));

}


void MuzeRaterResultWizardPage::initializePage() {
    MuzeRaterWizard::setForegroundToBackground(outputFilePathLineEdit);
}



