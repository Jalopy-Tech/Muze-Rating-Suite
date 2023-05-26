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


#include "foobar2000albumextractor.h"



Foobar2000AlbumExtractor::Foobar2000AlbumExtractor(QObject *parent)
    : AlbumExtractor(parent)
{

}

void Foobar2000AlbumExtractor::getXMLData(QIODevice* inDevice, QIODevice* outDevice)
{

    QBuffer buffer;

    int numberOfTracks = (float) inDevice->size() / 2000.0;
    setProgress("Reading iTunes: Read albums from iTunes Music Library into memory.",
        0, 70, numberOfTracks);

    copyAlbumsFromClipboardToXML(outDevice, minRatedTracksFilter, maxRatedTracksFilter);

    setProgress("Reading iTunes: Copy albums to XML file.",
        70, 30, 100);


    setProgress("Reading iTunes: Finished reading.",
        100, 0, 1);

    incrementProgress("");
}

void Foobar2000AlbumExtractor::setRatedTracksFilter(int minRatedTracks, int maxRatedTracks) {

    minRatedTracksFilter = minRatedTracks;
    maxRatedTracksFilter = maxRatedTracks;

}
void Foobar2000AlbumExtractor::incrementProgress(const QString& progressDescription) {

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

void Foobar2000AlbumExtractor::setProgress(const QString& stage, int base, int range, int incrementTotal) {
    progressStage = stage;
    progressPercentageBase = base;
    progressPercentageRange =range;
    progressIncrementTally = 0;
    progressIncrementTotal = incrementTotal;
}




void Foobar2000AlbumExtractor::copyAlbumsFromClipboardToXML(QIODevice *device, int minRatedTracks, int maxRatedTracks) {

    QXmlStreamWriter streamWriter;

    incrementProgress("Started copying albums.");
    device->open(QIODevice::ReadWrite);
    incrementProgress("Initializing copying albums...");
    streamWriter.setDevice(device);
    streamWriter.setCodec(QTextCodec::codecForName("UTF-16"));
    streamWriter.setAutoFormatting(true);

    streamWriter.writeStartDocument();
    streamWriter.writeStartElement("albums");

    QTextStream stream;
    QString line;
    QString clipboard = QGuiApplication::clipboard()->text();
    stream.setString(&clipboard);
    while (stream.readLineInto(&line)) {


        if (!line.startsWith("'") || !line.endsWith("'") || line.size() <= 0)
            break;

        line.remove(0,1);
        line.chop(1);


        QStringList fields = line.split("','");

        QString albumArtist = fields[1];
        QString albumTitle = fields[2];

        int numberOfTracks = fields[3].toInt();

        int stars[5];
        stars[0] = fields[4].toInt();
        stars[1] = fields[5].toInt();
        stars[2] = fields[6].toInt();
        stars[3] = fields[7].toInt();
        stars[4] = fields[8].toInt();

        int numberOfRatedTracks = 0;
        for (int i = 0; i < 5; i++)
            numberOfRatedTracks += stars[i];


        if (numberOfRatedTracks >= minRatedTracks &&
           (maxRatedTracks == -1 || numberOfRatedTracks <= maxRatedTracks)
                && albumTitle != "") {

            streamWriter.writeStartElement("album");

            streamWriter.writeTextElement("albumArtist",albumArtist);
            streamWriter.writeTextElement("albumTitle",albumTitle);

            if (numberOfRatedTracks > 0)
                streamWriter.writeTextElement("muzeRating", QString::fromStdString(MuzeRatingCalculator::muzeRatingString(stars)));
            else
                 streamWriter.writeEmptyElement("muzeRating");

            streamWriter.writeTextElement("numberOfRatedTracks",QString::number(numberOfRatedTracks));
            streamWriter.writeTextElement("numberOfTracks",QString::number(numberOfTracks));

            if (numberOfRatedTracks > 0)
                streamWriter.writeTextElement("starsPerRatedTrack",QString::fromStdString(MuzeRatingCalculator::starsPerRatedTrackString(stars)));
            else
                 streamWriter.writeEmptyElement("starsPerRatedTrack");

            for (int i = 0; i < 5; i++)
                 streamWriter.writeTextElement("numberOf" + QString::number(5 - i) + "StarRatings", QString::number(stars[5 - i - 1]));

            streamWriter.writeEndElement();


         }
     }
     incrementProgress("Copying albums...");


    incrementProgress("Finalizing copying albums...");
    streamWriter.writeEndElement();
    streamWriter.writeEndDocument();
    device->close();
    incrementProgress("Finished copying albums.");
}



