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

#ifndef FOOBAR2000ALBUMEXTRACTOR_H
#define FOOBAR2000ALBUMEXTRACTOR_H

#include "albumextractor.h"
#include "muzeratingcalculator.h"
#include "album.h"

#include <QDebug>
#include <QFile>
#include <QTextCodec>
#include <QGuiApplication>
#include <QClipboard>

class Foobar2000AlbumExtractor : public AlbumExtractor
{
    Q_OBJECT

public:
    explicit Foobar2000AlbumExtractor(QObject *parent = nullptr);
    void getXMLData(QIODevice* inDevice, QIODevice* outDevice);
    void setRatedTracksFilter(int minRatedTracks, int maxRatedTracks);

private:
    void copyAlbumsFromClipboardToXML(QIODevice *device, int minRatedTracks, int maxRatedTracks);


    void incrementProgress(const QString& description);
    void setProgress(const QString& stage, int base, int range, int incrementTotal);

    int minRatedTracksFilter = 0;
    int maxRatedTracksFilter = -1;


    int progressPercentageBase = 0;
    int progressPercentageRange = 100;
    int progressIncrementTotal = 100;
    int progressIncrementTally = 0;
    QString progressStage = "";

    int lastProgressPercentage = -1;
    QString lastProgressText = "";
};



#endif

