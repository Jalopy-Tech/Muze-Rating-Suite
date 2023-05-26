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


#ifndef VIEW_H
#define VIEW_H

#include <QObject>

class Presenter;

class View : public QObject
{
    Q_OBJECT

public:
    explicit View(QObject *parent = nullptr);
    explicit View(int stars[5], QObject *parent = nullptr);
    ~View();
    virtual int     exec() = 0;
    void setExecutable(bool isExecutable);
    bool executable();

    virtual void showError(const QString& msg) = 0;
    virtual void showInformation(const QString& msg) = 0;

    virtual void setVersion(const QString& version) = 0;
    virtual void setNumberOfRatedTracks(int n) = 0;
    virtual void setNumberOfStars(int n) = 0;
    virtual void setMuzeRating(float rating) = 0;
    virtual void setMuzeRating() = 0;
    virtual void setStarsPerRatedTrack(float starsPerRatedTrack) = 0;
    virtual void setStarsPerRatedTrack() = 0;
    virtual void setStars(int stars[5]) = 0;
    virtual int stars(int i) = 0;
    virtual void allowRating(bool isAllowed) = 0;


signals:
    void ratingRequested();
    void resetRequested();
    void starsChanged();
    void helpRequested();

protected:
    Presenter *presenter = NULL;

private:
    bool _isExecutable = true;
};


#endif

