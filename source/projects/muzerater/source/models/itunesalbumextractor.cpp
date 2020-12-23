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


#include "itunesalbumextractor.h"

ITunesAlbumExtractor::ITunesAlbumExtractor(QObject *parent)
    : AlbumExtractor(parent)
{

}

void ITunesAlbumExtractor::getXMLData(QIODevice* inDevice, QIODevice* outDevice)
{
    QBuffer buffer;

    if (true == false) {
         copyAlbumsFromITunesXMLViaXQuery(inDevice, &buffer);

    } else {

        int numberOfTracks = (float) inDevice->size() / 2000.0;
        setProgress("Reading iTunes: Read albums from iTunes Music Library into memory.",
            0, 70, numberOfTracks);

        copyTracksFromITunesXMLDirectlyToAlbumMap(inDevice);

        setProgress("Reading iTunes: Copy albums to XML file.",
            70, 30, albumCollection.tally());

        copyAlbumsFromAlbumMapToXML(outDevice, minRatedTracksFilter, maxRatedTracksFilter);
    }

    setProgress("Reading iTunes: Finished reading.",
        100, 0, 1);

    incrementProgress("");
}

void ITunesAlbumExtractor::setRatedTracksFilter(int minRatedTracks, int maxRatedTracks) {

    minRatedTracksFilter = minRatedTracks;
    maxRatedTracksFilter = maxRatedTracks;

}
void ITunesAlbumExtractor::incrementProgress(const QString& progressDescription) {

    progressIncrementTally += 1;

    int progressPercentage = (((float) progressIncrementTally / ((float) progressIncrementTotal)))
            * ((float) progressPercentageRange) + ((float) progressPercentageBase);

    if (progressPercentage < 0)
        progressPercentage = 0;

    if (progressPercentage > 100)
        progressPercentage = 100;

    QString progressText = progressStage + (progressDescription != "" ? " [" + progressDescription + "]" : "");

    if (progressPercentage != lastProgressPercentage || progressText != lastProgressText) {
        emit progressUpdated(progressPercentage, progressText);
        lastProgressPercentage = progressPercentage;
        lastProgressText = progressText;
    }

}

void ITunesAlbumExtractor::setProgress(const QString& stage, int base, int range, int incrementTotal) {
    progressStage = stage;
    progressPercentageBase = base;
    progressPercentageRange =range;
    progressIncrementTally = 0;
    progressIncrementTotal = incrementTotal;
}

void ITunesAlbumExtractor::copyAlbumsFromITunesXMLViaXQuery(QIODevice *inDevice, QIODevice *outDevice) {
    bool errorFlag = false;
    QStringList queryFilenameList;



    QString path = QCoreApplication::applicationDirPath();
    queryFilenameList
      << path + "/xq/header-xquery.xq"
      << path + "/xq/library-ratings.xq"
      << path + "/xq/library-itunes.xq"
      << path + "/xq/library-albums.xq"
      << path + "/xq/show-albums.xq"
      ;

    QString queryText = "";

    for (int i = 0; i < queryFilenameList.size(); ++i) {

        QFile queryFile(queryFilenameList[i]);
         errorFlag = !queryFile.open(QIODevice::ReadOnly);
         if (errorFlag) {
             QString msg = "The XQuery cannot be opened for reading.";
             emit error(msg);
          }
         queryText = queryText + QString::fromLatin1(queryFile.readAll());

    }

    errorFlag = !inDevice->open(QIODevice::ReadOnly);
    if (errorFlag) {
        QString msg = "The iTunes Music Library cannot be opened for reading.";
        emit error(msg);
     }

    QXmlQuery query;
    errorFlag = !query.setFocus(inDevice);
    if (errorFlag) {
        QString msg = QString("") + \
                "The XQuery cannot receive input from the iTunes Music Library" ;

        emit error(msg);
        return;
     }
    query.setQuery(queryText);

    if (!query.isValid()) {
        QString msg = "The XQuery to read the iTunes Music Library is invalid. The query files are \n\n"
                + queryFilenameList.join(", ");
        emit error(msg);
    }

    QBuffer buffer;

    errorFlag = !buffer.open(QIODevice::ReadWrite);
    if (errorFlag) {
        QString msg = QString("") + \
                "The XQuery cannot be opened for writing" + \
                " to an internal buffer while reading in from the iTunes Music Library.";
        emit error(msg);
     }


    QXmlFormatter formatter(query, &buffer);
    errorFlag = !query.evaluateTo(&formatter);
    if (errorFlag) {
        QString msg = "The XQuery cannot be evaluated for reading from the iTunes Music Library. The query files are \n\n"
                + queryFilenameList.join(", ");
        emit error(msg);
     }
    buffer.close();

    calculateAlbumRatingsInXml(&buffer, outDevice);
}



void ITunesAlbumExtractor::calculateAlbumRatingsInXml(QIODevice *inDevice, QIODevice *outDevice) {
    bool errorFlag = false;
      errorFlag = !inDevice->open(QIODevice::ReadOnly);
      if (errorFlag) {
          QString msg = "The input device cannot be opened for reading when calculating ratings.";
          emit error(msg);
       }

      QXmlStreamReader streamReader(inDevice);

      errorFlag = !outDevice->open(QIODevice::ReadWrite);
      if (errorFlag) {
          QString msg = "The output device cannot be opened for reading when calculating ratings.";
          emit error(msg);
       }

      QXmlStreamWriter streamWriter;
      streamWriter.setDevice(outDevice);


      while (!streamReader.atEnd()) {
             streamReader.readNext();
             if (streamReader.isStartElement() && streamReader.name() == "uncalculatedRating") {

                 int stars[5];

                 int s1 = streamReader.attributes().value("s1").toInt();
                 int s2 = streamReader.attributes().value("s2").toInt();
                 int s3 = streamReader.attributes().value("s3").toInt();
                 int s4 = streamReader.attributes().value("s4").toInt();
                 int s5 = streamReader.attributes().value("s5").toInt();

                 if (s1 + s2 + s3 + s4 + s5 > 0) {
                     stars[0] = s1;
                     stars[1] = s2;
                     stars[2] = s3;
                     stars[3] = s4;
                     stars[4] = s5;

                     float muzeRating = MuzeRatingCalculator::muzeRating(stars);
                     streamWriter.writeTextElement("muzeRating",QString::number(muzeRating));
                     streamReader.skipCurrentElement();

                 }
             }
             else
                 streamWriter.writeCurrentToken(streamReader);
       }
       if (streamReader.hasError()) {
           QString msg = "A stream error occurred while calculating ratings.";
           emit error(msg);
       }


       inDevice->close();
       outDevice->close();

}

void ITunesAlbumExtractor::copyTracksFromITunesXMLDirectlyToAlbumMap(QIODevice *inDevice) {
    bool errorFlag = false;

    incrementProgress("Started reading in tracks from iTunes Music LibraryL...");
    errorFlag = !inDevice->open(QIODevice::ReadOnly);
    if (errorFlag) {
        QString msg = "The input device cannot be opened for reading in iTunes tracks.";
        emit error(msg);
     }
    incrementProgress("Opening iTunes Music Library for reading...");
    ITunesReader iTunesReader(inDevice);
    incrementProgress("Started reading tracks...");


    while (!iTunesReader.atEnd()) {
        Track track;

        bool fFlag = iTunesReader.readNext(&track);

        if (fFlag) {

            albumCollection.add(&track);
        }
        incrementProgress("Reading tracks...");

    }

   incrementProgress("Closing iTunes Music Library...");

    inDevice->close();

    incrementProgress("Finished reading tracks...");

    return;

}



void ITunesAlbumExtractor::copyAlbumsFromAlbumMapToXML(QIODevice *device, int minRatedTracks, int maxRatedTracks) {

    QXmlStreamWriter streamWriter;

    incrementProgress("Started copying albums.");
    device->open(QIODevice::ReadWrite);
    incrementProgress("Initializing copying albums...");
    streamWriter.setDevice(device);
    streamWriter.setCodec(QTextCodec::codecForName("UTF-16"));
    streamWriter.setAutoFormatting(true);

    streamWriter.writeStartDocument();
    streamWriter.writeStartElement("albums");

    albumCollection.start();

    while (albumCollection.hasNext()) {
        albumCollection.next();
        if (albumCollection.currentAlbum()->numberOfRatedTracks() >= minRatedTracks &&
           (maxRatedTracks == -1 || albumCollection.currentAlbum()->numberOfRatedTracks() <= maxRatedTracks)) {

            streamWriter.writeStartElement("album");

            streamWriter.writeTextElement("albumArtist",albumCollection.currentAlbum()->albumArtist());
            streamWriter.writeTextElement("albumTitle",albumCollection.currentAlbum()->albumName());

            if (albumCollection.currentAlbum()->numberOfRatedTracks() > 0)
                streamWriter.writeTextElement("muzeRating",albumCollection.currentAlbum()->muzeRatingString());
            else
                 streamWriter.writeEmptyElement("muzeRating");

            streamWriter.writeTextElement("numberOfRatedTracks",QString::number(albumCollection.currentAlbum()->numberOfRatedTracks()));
            streamWriter.writeTextElement("numberOfTracks",QString::number(albumCollection.currentAlbum()->numberOfTracks()));

            if (albumCollection.currentAlbum()->numberOfRatedTracks() > 0)
                streamWriter.writeTextElement("starsPerRatedTrack",albumCollection.currentAlbum()->starsPerRatedTrackString());
            else
                 streamWriter.writeEmptyElement("starsPerRatedTrack");

            for (int i = 0; i < 5; i++)
                 streamWriter.writeTextElement("numberOf" + QString::number(5 - i) + "StarRatings", QString::number(albumCollection.currentAlbum()->numberOfRatedTracks(5 - i)));

            streamWriter.writeEndElement();
         }
        incrementProgress("Copying albums...");
    }

    incrementProgress("Finalizing copying albums...");
    streamWriter.writeEndElement();
    streamWriter.writeEndDocument();
    device->close();
    incrementProgress("Finished copying albums.");
}



TrackReader::TrackReader(QObject *parent)
    : QObject(parent)
{

}

ITunesReader::ITunesReader(QObject *parent)
    : TrackReader(parent)
{
    _device = NULL;

}

ITunesReader::ITunesReader(QIODevice *device, QObject *parent)
    : TrackReader(parent)
{

     _device = device;
    if (device != NULL) {
        _streamReader.setDevice(device);

        skipToTracks();
    } else
        _isAtEnd = true;
}


bool ITunesReader::atEnd() { return _isAtEnd; }

void ITunesReader::getTrack(Track *track) {

    bool fFinished = false;

    int rating = 0;
    bool isRatingComputed = false;

    do {
        if (_isAtEnd || _streamReader.atEnd() ) {
            _isAtEnd = true;
            fFinished = true;
            break;
        }

        if (_streamReader.name() == "dict" && _streamReader.isEndElement()) {
            fFinished = true;
            _streamReader.readNext();
            break;
        }

        if (_streamReader.name() == "key" && _streamReader.isStartElement()) {

            QString keyValue = _streamReader.readElementText(QXmlStreamReader::SkipChildElements);
            _streamReader.readNext();

            QString keyData = _streamReader.readElementText(QXmlStreamReader::SkipChildElements);
            _streamReader.readNext();

            if (keyValue == "Track ID")
                track->setTrackID(keyData.toInt());

            else if (keyValue == "Track Number")
                track->setTrackNumber(keyData.toInt());

            else if (keyValue == "Album")
                track->setAlbum(keyData);

            else if (keyValue == "Album Artist")
                track->setAlbumArtist(keyData);

            else if (keyValue == "Artist")
                track->setArtist(keyData);

            else if (keyValue == "Rating")
                rating = ITunesReader::percentageRatingToStars(keyData.toInt());

            else if (keyValue == "Rating Computed")
                isRatingComputed = true;

            continue;
        }

        _streamReader.readNext();
    }
    while (!fFinished);

    if (isRatingComputed)
        rating = 0;

    track->setRating(rating);
}



void ITunesReader::readTrack(Track *track) {

    bool fFinished = false;
    bool fFound = true;

    do {
        if (_isAtEnd || _streamReader.atEnd()) {
            _isAtEnd = true;
            fFinished = true;
            break;
        }

        if (_streamReader.name() == "dict" && _streamReader.isEndElement()) {
            fFinished = true;
            _isAtEnd = true;
            break;
        }

        if (fFound && _streamReader.name() == "dict" && _streamReader.isStartElement()) {
            _streamReader.readNext();
            getTrack(track);
            break;
         }

        if (_streamReader.name() == "key" && _streamReader.isStartElement()) {
            fFound = true;
            QString keyValue = _streamReader.readElementText(QXmlStreamReader::SkipChildElements);
            _streamReader.readNext();
            continue;
        }

        _streamReader.readNext();
    }
    while (!fFinished);
}


bool ITunesReader::skipToNextTrack() {

    bool fFinished = false;
    bool fFound = false;

    do {

        if (_isAtEnd || _streamReader.atEnd()) {
            _isAtEnd = true;
            fFinished = true;
            break;
        }

        if (_streamReader.name() == "dict" && _streamReader.isEndElement()) {
            fFinished = true;
            _isAtEnd = true;
            break;
        }

        if (_streamReader.name() == "key" && _streamReader.isStartElement()) {

            QString keyValue = _streamReader.readElementText(QXmlStreamReader::SkipChildElements);
            _streamReader.readNext();
            fFound = true;
            fFinished = true;
            break;
         }

         _streamReader.readNext();
    }
    while (!fFinished);

    return fFound;
}

bool ITunesReader::readNext(Track *track) {

    if (_isAtEnd || _streamReader.atEnd())
        return false;
    else {
        readTrack(track);
        skipToNextTrack();
        return true;
    }

}



bool ITunesReader::skipToTracksDict() {

    bool fFoundTracks = false;
    bool fFoundTracksDict = false;
    bool fFinished = false;

    do {

        if (_isAtEnd || _streamReader.atEnd()) {
            _isAtEnd = true;
            fFinished = true;
            break;
        }

        if (!fFoundTracks && _streamReader.name() == "dict" && _streamReader.isStartElement()) {
            _streamReader.skipCurrentElement();
            continue;
        }

        if (_streamReader.name() == "key" && _streamReader.isStartElement()) {
            QString keyValue = _streamReader.readElementText(QXmlStreamReader::SkipChildElements);
            _streamReader.readNext();
            if (keyValue == "Tracks") {
                fFoundTracks = true;
                continue;
            }
         }


        if (fFoundTracks && _streamReader.name() == "dict" && _streamReader.isStartElement()) {
            fFinished = true;
            fFoundTracksDict = true;
            _streamReader.readNext();
            break;
        }


        _streamReader.readNext();

    }
    while (!fFinished);

    return fFoundTracksDict;

 }


bool ITunesReader::skipToPlistDict() {

    bool fFoundPList = false;
    bool fFoundPListDict = false;
    bool fFinished = false;

    do {

        if (_streamReader.atEnd()) {
            _isAtEnd = true;
            fFinished = true;
            break;
        }

        if (_streamReader.name() == "plist" && _streamReader.isEndElement()) {
            fFinished = true;
            _isAtEnd = true;
            _streamReader.readNext();
            break;
        }

        if (_streamReader.name() == "plist" && _streamReader.isStartElement()) {
            fFoundPList = true;
            _streamReader.readNext();
            continue;
        }

        if (fFoundPList && _streamReader.name() == "dict" && _streamReader.isEndElement()) {
            fFinished = true;
            _isAtEnd = true;
            break;
        }

        if (fFoundPList && _streamReader.name() == "dict" && _streamReader.isStartElement()) {
            fFinished = true;
            fFoundPListDict = true;
            _streamReader.readNext();
            break;
        }

        _streamReader.readNext();

    }
    while (!fFinished);

    return fFoundPListDict;
}

bool ITunesReader::skipToTracks() {
    bool fFound;

    fFound = skipToPlistDict();

    if (fFound) {
        fFound = skipToTracksDict();
    }
    return fFound;

}

int ITunesReader::percentageRatingToStars(int p) {
    return (floor(p) / 20.0f + 0.999999f);
}

int ITunesReader::percentageRatingToStars(float p) {

     int q = round(p);
    return percentageRatingToStars(q);
}



