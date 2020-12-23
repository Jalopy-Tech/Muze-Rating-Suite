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

#include "console_view.h"

ConsoleView::ConsoleView(QObject *parent)
    : View(parent)
{

    presenter = new Presenter(this);


}

ConsoleView::ConsoleView(int stars[5], QObject *parent)
    : View(parent)
{

    // Fix for Windows console issue with GUI and console in one application
    // Inert to non-windows platforms
    WindowsConsoleFix::initialize();

    presenter = new Presenter(this);


    for (int i = 0; i < 5; i++)
        _stars[i] = stars[i];

    emit starsChanged();
}

ConsoleView::~ConsoleView()
{
    delete presenter;

    // Fix for Windows console issue with GUI and console in one application
    // Inert to non-windows platforms
    WindowsConsoleFix::finalize();
}

int ConsoleView::exec() {

   if (!executable())
        return 1;

   if (_helpText != "") {
       QTextStream(stdout) << QString("") + \
                _helpText + "\n";
   } else if (_versionText != "") {
       QTextStream(stdout) << QString("") + \
                _versionText + "\n";
   } else {

       emit ratingRequested();

       if (_isRatingAllowed)
           showData();
       else
           showNoData();

   }


    return 0;

}

void ConsoleView::showError(const QString& msg)
{
    QTextStream(stderr) << "Error: " + msg << "\n";
}

void ConsoleView::showInformation(const QString& msg)
{
    QTextStream(stdout) << msg << "\n";
}

void ConsoleView::setVersion(const QString& version) {
    _version = version;
}



void ConsoleView::showData() {
    QTextStream(stdout) << "\n";

    if(_hasMuzeRating)
        QTextStream(stdout) << QString("") + "Muze Rating: " + QString::number(_muzeRating,'f',1) + "\n";
    else
        QTextStream(stdout) << QString("") + "Muze Rating: [none]\n";

    QTextStream(stdout) << QString("") + \
             "Number of rated tracks: " + QString::number(_numberOfRatedTracks) + "\n";

    QTextStream(stdout) << QString("") + \
             "Number of stars: " + QString::number(_numberOfStars) + "\n";

    if(_hasStarsPerRatedTrack)
        QTextStream(stdout) << QString("") + "Stars per rated track: " + QString::number(_starsPerRatedTrack,'f',1) + "\n";
    else
        QTextStream(stdout) << QString("") + "Stars per rated track: [none]\n";

    for (int i = 0; i < 5; i++) {
        QTextStream(stdout) << QString("") + \
             "Number of " + QString::number(5 - i) + \
             " star ratings: " << QString::number(_stars[5 - i - 1]) + "\n";
    }






}

void ConsoleView::showNoData() {
    QTextStream(stdout) << QString("") + \
      "Numbers for rated tracks have been not been set.\n" + \
      "These can be set using options.\n" + \
      "Use option -h, --help for help.\n";
}

void ConsoleView::setStars(int stars[5])
{
    for (int i = 0; i < 5; i++)
        _stars[i] = stars[i];
}

int ConsoleView::stars(int i)
{
    return _stars[i - 1];
}


void ConsoleView::setMuzeRating(float rating)
{
  _muzeRating = rating;
  _hasMuzeRating = true;
}

void ConsoleView::setMuzeRating()
{
    _hasMuzeRating = false;
}


void ConsoleView::setStarsPerRatedTrack(float starsPerRatedTrack)
{
    _starsPerRatedTrack = starsPerRatedTrack;
    _hasStarsPerRatedTrack = true;
}

void ConsoleView::setStarsPerRatedTrack()
{
     _hasStarsPerRatedTrack = false;
}

void ConsoleView::setNumberOfRatedTracks(int n)
{

    _numberOfRatedTracks = n;
}


void ConsoleView::setNumberOfStars(int n)
{

    _numberOfStars = n;
}

void ConsoleView::allowRating(bool isRatingAllowed) {
    _isRatingAllowed = isRatingAllowed;
}
