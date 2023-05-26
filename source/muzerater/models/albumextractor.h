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

#ifndef ALBUMEXTRACTOR_H
#define ALBUMEXTRACTOR_H

#include <QDebug>
#include <QObject>

class AlbumExtractor : public QObject
{
    Q_OBJECT

public:
    explicit AlbumExtractor(QObject *parent = nullptr);

    virtual void getXMLData(QIODevice* inDevice, QIODevice* outDevice) = 0;
    virtual void setRatedTracksFilter(int minRatedTracks, int maxRatedTracks) = 0;

signals:
    void progressUpdated(int percentage, const QString& description);
    void error(const QString& errorMessage);
    void testSignal();
};

#endif

