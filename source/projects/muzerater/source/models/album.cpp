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

#include "album.h"


Album::Album(const QString& albumArtist, const QString& albumName, QObject *parent)
    : QObject(parent)
{

        _albumArtist = albumArtist;
        _albumName = albumName;

}

QString Album::albumArtist() { return _albumArtist; }
void Album::setAlbumArtist(const QString& albumArtist) { _albumArtist = albumArtist; }

QString Album::albumName() { return _albumName; }
void Album::setAlbumName(const QString& albumName) { _albumName = albumName; }

int Album::numberOfTracks() { return _numberOfTracks; }
void Album::setNumberOfTracks(int numberOfTracks) { _numberOfTracks = numberOfTracks; }

void Album::addRating(int rating) {
    if (rating >= 1 && rating <= 5)
        _stars[rating - 1] += 1;
}

int Album::numberOfRatedTracks(int rating) {
    if (rating >= 1 && rating <= 5)
        return _stars[rating - 1];
    else
        return 0;
}

int Album::numberOfRatedTracks() {

    int total = 0;
    for (int i = 0; i < 5; i++)
        total += numberOfRatedTracks(i + 1);

    return total;
}

float Album::starsPerRatedTrack() {
    return MuzeRatingCalculator::starsPerRatedTrack(_stars);
}

QString Album::starsPerRatedTrackString() {
    return QString::fromStdString(MuzeRatingCalculator::starsPerRatedTrackString(_stars));
}

float Album::muzeRating() {
    return MuzeRatingCalculator::muzeRating(_stars);
}

QString Album::muzeRatingString() {
    return QString::fromStdString(MuzeRatingCalculator::muzeRatingString(_stars));
}

void Album::insert(Track *track) {

    _numberOfTracks += 1;

    addRating(track->rating());

}

Track::Track(QObject *parent)
    : QObject(parent)
{


}

int Track::trackID() { return _trackID; }
void Track::setTrackID(int trackID) { _trackID = trackID; }

int Track::trackNumber() { return _trackNumber; }
void Track::setTrackNumber(int trackNumber) { _trackNumber = trackNumber; }


QString Track::albumArtist() { return _albumArtist; }
void Track::setAlbumArtist(const QString& albumArtist) { _albumArtist = albumArtist; }

QString Track::artist() { return _artist; }
void Track::setArtist(const QString& artist) { _artist = artist; }

QString Track::album() { return _album; }
void Track::setAlbum(const QString& album) { _album = album; }

int Track::totalTracks() { return _totalTracks; }
void Track::setTotalTracks(int totalTracks) { _totalTracks = totalTracks; }

int Track::rating() { return _rating; }
void Track::setRating(int rating) { _rating = rating; }

bool Track::isRatingComputed() { return _isRatingComputed; }
void Track::setIsRatingComputed(bool isRatingComputed) { _isRatingComputed = isRatingComputed; }


AlbumCollection::AlbumCollection(QObject *parent)
    : QObject(parent)
{

}

AlbumCollection::~AlbumCollection()
{
    deleteAlbums();
    delete _albumMapIterator;
}

int AlbumCollection::tally() { return _tally; }

void AlbumCollection::add(Track *track) {
    if (track->album() != "") {
        QString albumArtist = (track->albumArtist() != "" ? track->albumArtist() : track->artist());
        QString key = albumArtist + " || " + track->album();
        Album *album;
        if (_albumMap.contains(key) == NULL){
            album = new Album(albumArtist, track->album());
            _albumMap.insert(key,album);
            _tally += 1;
         } else {
            album = _albumMap.value(key);

        }
        album->insert(track);
     }
}

void AlbumCollection::add(Album *album) {
    if (album->albumName() != "") {
        QString key = album->albumArtist() + " || " + album->albumName();
        if (_albumMap.contains(key) == NULL) {
            _albumMap.insert(key,album);
            _tally += 1;
         }
     }
}

void AlbumCollection::deleteAlbums() {
    qDeleteAll(_albumMap);
    _albumMap.clear();
}

void AlbumCollection::start() {     
   delete _albumMapIterator;
   _albumMapIterator = new QMapIterator<QString, Album*>(_albumMap);
}

bool AlbumCollection::hasNext() {

    return _albumMapIterator->hasNext();
}

void AlbumCollection::next() {
    _albumMapIterator->next();
}


Album* AlbumCollection::currentAlbum() {
    return _albumMapIterator->value();
}




