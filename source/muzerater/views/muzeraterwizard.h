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

#ifndef MUZERATERWIZARD_H
#define MUZERATERWIZARD_H


#include "ui_muzeraterwizard.h"
#include "view.h"

#include "ui_muzeraterwelcomewizardpage.h"
#include "ui_muzeraterdatabasewizardpage.h"
#include "ui_muzeraterituneswizardpage.h"
#include "ui_muzeraterfoobar2000wizardpage.h"
#include "ui_muzerateroutputwizardpage.h"
#include "ui_muzeraterfilterbyratedwizardpage.h"
#include "ui_muzeratersummarywizardpage.h"
#include "ui_muzeraterprocesswizardpage.h"
#include "ui_muzeraterresultwizardpage.h"

#include <QDebug>
#include <QDir>
#include <QFileDialog>
#include <QTemporaryDir>
#include <QMessageBox>
#include <QDesktopServices>
#include <QAbstractButton>


class MuzeRaterDatabaseWizardPage;

class MuzeRaterWizard : public QWizard, public Ui::muzeRaterWizard
{
    Q_OBJECT

public:
    enum {WelcomePage, DatabasePage, ITunesPage, Foobar2000Page, OutputPage,
             FilterByRatedPage, SummaryPage, ProcessPage, LastPage};


    explicit MuzeRaterWizard(QWidget *parent = nullptr);

    void static setForegroundToBackground(QWidget *widget);


};

class MuzeRaterWelcomeWizardPage : public QWizardPage, public Ui::muzeRaterWelcomeWizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterWelcomeWizardPage(QWidget *parent = nullptr);

};

class MuzeRaterDatabaseWizardPage : public QWizardPage, public Ui::muzeRaterDatabaseWizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterDatabaseWizardPage(QWidget *parent = nullptr);

private:
    int nextId() const;
};


class MuzeRaterITunesWizardPage : public QWizardPage, public Ui::muzeRaterITunesWizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterITunesWizardPage(QWidget *parent = nullptr);


private:
    int nextId() const;




};

class MuzeRaterFoobar2000WizardPage : public QWizardPage, public Ui::muzeRaterFoobar2000WizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterFoobar2000WizardPage(QWidget *parent = nullptr);


private:
    int nextId() const;

};


class MuzeRaterOutputWizardPage : public QWizardPage, public Ui::muzeRaterOutputWizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterOutputWizardPage(QWidget *parent = nullptr);

    void setOverwriteAllowed(bool isAllowed);

signals:
    void outputCompleted();

private:

    bool validatePage();

    bool _isOverwriteAllowed = false;


};


class MuzeRaterFilterByRatedWizardPage : public QWizardPage, public Ui::muzeRaterFilterByRatedWizardPage
{
    Q_OBJECT

public:
    explicit 		MuzeRaterFilterByRatedWizardPage(QWidget *parent = nullptr);


};

class MuzeRaterSummaryWizardPage : public QWizardPage, public Ui::muzeRaterSummaryWizardPage
{
    Q_OBJECT

public:
    explicit 		MuzeRaterSummaryWizardPage(QWidget *parent = nullptr);


};

class MuzeRaterProcessWizardPage : public QWizardPage, public Ui::muzeRaterProcessWizardPage
{
    Q_OBJECT

public:
    explicit 		MuzeRaterProcessWizardPage(QWidget *parent = nullptr);

    void            updateProgress(int progress, QString progressText);

signals:
    void            processDataRequested();


};

class MuzeRaterResultWizardPage : public QWizardPage, public Ui::muzeRaterResultWizardPage
{
    Q_OBJECT

public:
    explicit MuzeRaterResultWizardPage(QWidget *parent = nullptr);

private:
    void initializePage();

};

#endif

