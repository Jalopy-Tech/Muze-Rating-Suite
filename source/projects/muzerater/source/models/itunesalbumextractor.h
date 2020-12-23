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

#ifndef ITUNESALBUMEXTRACTOR_H
#define ITUNESALBUMEXTRACTOR_H

#include "albumextractor.h"
#include "muzeratingcalculator.h"
#include "album.h"

#include <QDebug>
#include <QFile>
#include <QCoreApplication>
#include <QDir>
#include <QXmlQuery>
#include <QXmlFormatter>
#include <QXmlSerializer>
#include <QTextCodec>


class ITunesAlbumExtractor : public AlbumExtractor
{
    Q_OBJECT

public:


    explicit ITunesAlbumExtractor(QObject *parent = nullptr);
    void getXMLData(QIODevice* inDevice, QIODevice* outDevice);
    void setRatedTracksFilter(int minRatedTracks, int maxRatedTracks);

private:
    void copyTracksFromITunesXMLDirectlyToAlbumMap(QIODevice *device);
    void copyAlbumsFromITunesXMLViaXQuery(QIODevice *inDevice, QIODevice *outDevice);
    void copyAlbumsFromAlbumMapToXML(QIODevice *device, int minRatedTracks, int maxRatedTracks);

    void calculateAlbumRatingsInXml(QIODevice *inDevice, QIODevice *outDevice);

    void incrementProgress(const QString& description);
    void setProgress(const QString& stage, int base, int range, int incrementTotal);

    AlbumCollection albumCollection;
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


class TrackReader : public QObject
{
    Q_OBJECT


public:
    explicit TrackReader(QObject *parent = nullptr);
    explicit TrackReader(QIODevice *device, QObject *parent = nullptr);



signals:

    void error(const QString& errorMessage);


public slots:

};


class ITunesReader : public TrackReader
{
    Q_OBJECT


public:
    explicit ITunesReader(QObject *parent = nullptr);
    explicit ITunesReader(QIODevice *device, QObject *parent = nullptr);
    int exec();

    bool atEnd();
    bool readNext(Track *track);
    void setDevice(QIODevice *device);

    static int percentageRatingToStars(int p);
    static int percentageRatingToStars(float p);

signals:
    void error(const QString& errorMessage);



private:
    QXmlStreamReader _streamReader;
    bool _isAtEnd = false;
    QIODevice *_device;

    bool skipToPlistDict();
    bool skipToTracksDict();
    bool skipToTracks();
    bool skipToNextTrack();
    void readTrack(Track *track);
    void getTrack(Track *track);

};

#endif

