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

    The View for a Console (comamnd line terminal) interface.
*/


#ifndef CONSOLE_VIEW_H
#define CONSOLE_VIEW_H


#include "view.h"
#include "presenter.h"
#include "windows_console_fix.h"

#include <QDebug>
#include <QTextStream>
#include <QApplication>


class Presenter;

class ConsoleView : public View
{
    Q_OBJECT

public:
    explicit ConsoleView(QObject *parent = nullptr);
    explicit ConsoleView(int stars[5], QObject *parent = nullptr);
    ~ConsoleView();

    int exec() override;

    void showError(const QString& msg) override;
    void showInformation(const QString& msg) override;

    void setVersion(const QString& version) override;
    void setStars(int stars[5]) override;
    int stars(int i) override;
    void setNumberOfRatedTracks(int n) override;
    void setNumberOfStars(int n) override;
    void setMuzeRating(float rating) override;
    void setMuzeRating()  override;
    void setStarsPerRatedTrack(float starsPerRatedTrack) override;
    void setStarsPerRatedTrack() override;
    void allowRating(bool isAllowed) override;

private:
    void init();
    void showData();
    void showNoData();

    int _stars[5] = {0,0,0,0,0};

    QString _version;

    bool _hasMuzeRating = false;
    float _muzeRating;
    bool _hasStarsPerRatedTrack = false;
    float _starsPerRatedTrack;
    int _numberOfRatedTracks = 0;
    int _numberOfStars = 0;
    bool _isRatingAllowed = false;
    QString _versionText = "";
    QString _helpText = "";
};



#endif

