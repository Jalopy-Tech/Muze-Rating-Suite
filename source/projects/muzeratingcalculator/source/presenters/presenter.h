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
#include "muzeratingcalculator.h"


#include <QDebug>
#include <QCommandLineParser>
#include <QDesktopServices>
#include <QUrl>

class Presenter : public QObject
{
    Q_OBJECT

public:
    explicit Presenter(View* view, QObject *parent = nullptr);

private:
    void setVersion();

    View *view;

    int _stars[5] = {0,0,0,0,0};

private slots:
    void calculateRating();
    void handleStarsChanged();
    void reset();
    void help();

};

#endif
