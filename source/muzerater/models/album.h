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


#ifndef ALBUM_H
#define ALBUM_H

#include "muzeratingcalculator.h"

#include <QDebug>
#include <QBuffer>
#include <QXmlStreamWriter>


class Track;

class Album : public QObject
{
    Q_OBJECT


public:
    explicit Album(const QString& albumArtist, const QString& albumName, QObject *parent = nullptr);

    QString albumArtist();
    void setAlbumArtist(const QString& albumArtist);

    QString albumName();
    void setAlbumName(const QString& albumName);

    int numberOfTracks();
    void setNumberOfTracks(int totalTracks);

    void addRating(int rating);

    int numberOfRatedTracks();
    int numberOfRatedTracks(int rating);
    int numberOfStars();

    float starsPerRatedTrack();
    QString starsPerRatedTrackString();

    float rating();
    QString ratingString();

    float muzeRating();
    QString muzeRatingString();

    void insert(Track *track);

private:
    QString _albumArtist = "";
    QString _albumName = "";

    int _stars[5] = {0,0,0,0,0};
    int _numberOfTracks = 0;
};


class Track : public QObject
{
    Q_OBJECT


public:
    explicit Track(QObject *parent = nullptr);

    int trackID();
    void setTrackID(int trackID);

    int trackNumber();
    void setTrackNumber(int trackNumber);

    QString albumArtist();
    void setAlbumArtist(const QString& albumArtist);

    QString artist();
    void setArtist(const QString& artist);

    QString album();
    void setAlbum(const QString& album);

    int totalTracks();
    void setTotalTracks(int totalTracks);

    int rating();
    void setRating(int rating);

    bool isRatingComputed();
    void setIsRatingComputed(bool isRatingComputed);



private:
    int _trackNumber = 0;
    int _trackID = 0;
    QString _artist = "";
    QString _albumArtist = "";
    QString _album = "";
    int _rating = 0;
    bool _isRatingComputed = false;


    int _stars[5] = {0,0,0,0,0};
    int _totalTracks = 0;


};

class AlbumCollection : public QObject
{
    Q_OBJECT


public:
    explicit AlbumCollection(QObject *parent = nullptr);
    ~AlbumCollection();

    void add(Track *track);
    void add(Album *album);

    void xmlWriter(QIODevice *device);
    bool hasNext();
    void next();
    void start();
    Album* currentAlbum();
    int tally();

private:
    QMap<QString, Album*> _albumMap;
    QMapIterator<QString, Album*> *_albumMapIterator = NULL;
    void deleteAlbums();

    int _tally = 0;
};



#endif

