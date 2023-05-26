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


    This namepace includes functions to calculate the Muze Rating
    given an array of star ratings. The nth element in the star array
    is the number of tracks with an n-1 star rating.

*/


#ifndef MUZERATINGCALCULATOR_H
#define MUZERATINGCALCULATOR_H
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>


namespace MuzeRatingCalculator {

    float muzeRating(int stars[5]);
    std::string muzeRatingString(int stars[5]);

    int starRating(int stars[5]);
    int oneToTenScore(int stars[5]);

    float starsPerRatedTrack(int stars[5]);
    std::string starsPerRatedTrackString(int stars[5]);

    int numberOfTracks(int stars[5]);
    int numberOfStars(int stars[5]);


    namespace
    {
        double rawRating(int stars[5]);
    }
};

#endif

