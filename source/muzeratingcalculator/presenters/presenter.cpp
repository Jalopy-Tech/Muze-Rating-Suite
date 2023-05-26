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

/*
    The presenter provides the view logic to a view.
    It is instantiated by the View and contains abstract view logic.
*/

#include "presenter.h"

Presenter::Presenter(View *view, QObject *parent)
    : QObject(parent)
{
    this->view = view;

    connect(view, &View::starsChanged, this, &Presenter::handleStarsChanged);
    connect(view, &View::ratingRequested, this,&Presenter::calculateRating);
    connect(view, &View::resetRequested, this, &Presenter::reset);
    connect(view, &View::helpRequested, this, &Presenter::help);

    setVersion();
    //reset();
}

void Presenter::calculateRating() {

    int n = MuzeRatingCalculator::numberOfTracks(_stars);

    if (n > 0) {
        view->setMuzeRating(MuzeRatingCalculator::muzeRating(_stars));
        view->setStarsPerRatedTrack(MuzeRatingCalculator::starsPerRatedTrack(_stars));
    } else {
        view->setMuzeRating();
        view->setStarsPerRatedTrack();
    }
}


void Presenter::handleStarsChanged() {
    for (int i = 0; i < 5; i++)
        _stars[i] = view->stars(i + 1);

    int n = MuzeRatingCalculator::numberOfTracks(_stars);
    int s = MuzeRatingCalculator::numberOfStars(_stars);

    view->setNumberOfRatedTracks(n);
    view->setNumberOfStars(s);

    view->allowRating(n > 0);

    view->setMuzeRating();
    view->setStarsPerRatedTrack();
}


void Presenter::reset() {
    for (int i = 0; i < 5; i++)
        _stars[i] = 0;

    view->setStars(_stars);

    view->allowRating(false);

    view->setNumberOfRatedTracks(0);
    view->setNumberOfStars(0);

    view->setMuzeRating();
    view->setStarsPerRatedTrack();
}

void Presenter::setVersion() {
    view->setVersion("Version " + QCoreApplication::applicationVersion());
}

void Presenter::help() {

        QString link = "https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/Muze-Rating-Calculator.md";
        QDesktopServices::openUrl(QUrl(link));

}

