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

#include "controller.h"

Controller::Controller(QObject *parent)
    : QObject(parent)
{
    QCommandLineParser parser;

    // Set up the various command options allowed in the parser.

    parser.setApplicationDescription("Calculate Muze Rating for given track ratings.");

    const QCommandLineOption helpOption = parser.addHelpOption();
    const QCommandLineOption versionOption = parser.addVersionOption();

    const QCommandLineOption noGuiOption(QStringList() << "n" << "no-gui",
         "The output will be displayed to the console, not using a GUI.");

    parser.addOption(noGuiOption);

    const QCommandLineOption s1Option(QStringList() << "1" << "s1" << "star-1",
         "Specify the number of tracks with a 1-star rating.","s1");
    parser.addOption(s1Option);

    const QCommandLineOption s2Option(QStringList() << "2" << "s2" << "star-2",
         "Specify the number of tracks with a 2-star rating.","s2");
    parser.addOption(s2Option);

    const QCommandLineOption s3Option(QStringList() << "3" << "s3" << "star-3",
         "Specify the number of tracks with a 3-star rating.","s3");
    parser.addOption(s3Option);

    const QCommandLineOption s4Option(QStringList() << "4" << "s4" << "star-4",
         "Specify the number of tracks with a 4-star rating.","s4");
    parser.addOption(s4Option);

    const QCommandLineOption s5Option(QStringList() << "5" << "s5" << "star-5",
         "Specify the number of tracks with a 5-star rating.","s5");
    parser.addOption(s5Option);



    // Parce the parser to extract all the command line options.

    bool fParseError = !parser.parse(QCoreApplication::arguments());

    bool hasHelpOption = parser.isSet(helpOption);
    bool hasVersionOption = parser.isSet(versionOption);
    bool hasNoGui = parser.isSet(noGuiOption);

    int stars[5];
    stars[0] = parser.value(s1Option).toInt();
    stars[1] = parser.value(s2Option).toInt();
    stars[2] = parser.value(s3Option).toInt();
    stars[3] = parser.value(s4Option).toInt();
    stars[4] = parser.value(s5Option).toInt();

    if (hasNoGui || hasHelpOption || hasVersionOption)
       _view = new ConsoleView(stars);
     else
       _view = new GuiView(stars);


    if (fParseError) {
        _view->showError(parser.errorText());
        _view->setExecutable(false);
    } else if (hasHelpOption) {
         _view->showInformation(parser.helpText());
         _view->setExecutable(false);
    } else if (hasVersionOption) {
       QString versionText = QString("") + \
           QCoreApplication::applicationName() + " " + \
           QCoreApplication::applicationVersion();

       _view->showInformation(versionText);
       _view->setExecutable(false);
    }


}

Controller::~Controller()
{
    delete (_view);
}

View* Controller::view()
{
    return _view;
}


