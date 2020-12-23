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

#include "gui_view.h"



GuiView::GuiView(QObject *parent)
    : View(parent)
{
    init();
}

GuiView::GuiView(int stars[5], QObject *parent)
    : View(parent)
{



    init();

    // Set the incoming stars

    setStars(stars);
    emit starsChanged();

    // If the stars are not zeros, request a rating

    bool fStarsSet = false;
    for (int i = 0; i < 5; i++)
        if (stars[i] > 0)
            fStarsSet = true;

    if (fStarsSet)
        emit ratingRequested();

}

GuiView::~GuiView()
{
    delete presenter;
}

int GuiView::exec() {

    if (!executable())
        return 1;

    return qApp->exec();
}

void GuiView::init() {
    calculatorDialog.setupUi(&dialog);

    rateItButton = calculatorDialog.buttonBox->addButton("Rate it",QDialogButtonBox::ActionRole);
    rateItButton->setDefault(true);

    connect(rateItButton , &QPushButton::clicked, this, &View::ratingRequested);

    connect(calculatorDialog.star1SpinBox , QOverload<int>::of(&QSpinBox::valueChanged), this, &View::starsChanged);
    connect(calculatorDialog.star2SpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &View::starsChanged);
    connect(calculatorDialog.star3SpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &View::starsChanged);
    connect(calculatorDialog.star4SpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &View::starsChanged);
    connect(calculatorDialog.star5SpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &View::starsChanged);

    connect(calculatorDialog.buttonBox->button(QDialogButtonBox::Reset), &QPushButton::clicked, this, &View::resetRequested);

    connect(calculatorDialog.buttonBox, &QDialogButtonBox::helpRequested, this, &View::helpRequested);

    setForegroundToBackground(calculatorDialog.muzeRatingLineEdit);
    setForegroundToBackground(calculatorDialog.starsPerRatedTrackLineEdit);


    QString path =  QCoreApplication::applicationDirPath() + "/images/watermark.png";
    calculatorDialog.watermarkLabel->setPixmap(QPixmap(path));

    allowRating(false);

    dialog.show();
    presenter = new Presenter(this);
}


void GuiView::showError(const QString& msg)
{
    QMessageBox::warning(&dialog, "Error", msg);
}

void GuiView::showInformation(const QString& msg)
{
    QMessageBox::information(&dialog, "Information", msg);
}

void GuiView::setVersion(const QString& version) {
    calculatorDialog.versionLabel->setText(version);
}


void GuiView::setSpinBoxValue(QSpinBox *spinBox, int value) {
     spinBox->blockSignals(true);
     spinBox->setValue(value);
     spinBox->blockSignals(false);
}
void GuiView::setStars(int stars[5])
{
    setSpinBoxValue(calculatorDialog.star1SpinBox,stars[0]);
    setSpinBoxValue(calculatorDialog.star2SpinBox,stars[1]);
    setSpinBoxValue(calculatorDialog.star3SpinBox,stars[2]);
    setSpinBoxValue(calculatorDialog.star4SpinBox,stars[3]);
    setSpinBoxValue(calculatorDialog.star5SpinBox,stars[4]);

}

int GuiView::stars(int i)
{
    switch (i) {
        case 1:
            return calculatorDialog.star1SpinBox->value();

        case 2:
            return calculatorDialog.star2SpinBox->value();

        case 3:
            return calculatorDialog.star3SpinBox->value();

        case 4:
            return calculatorDialog.star4SpinBox->value();

        case 5:
            return calculatorDialog.star5SpinBox->value();


      }

    return 0;
}

void GuiView::setMuzeRating(float rating)
{
     calculatorDialog.muzeRatingLineEdit->setText(QString::number(rating,'f',1));
}

void GuiView::setMuzeRating()
{
     calculatorDialog.muzeRatingLineEdit->setText("");
}

void GuiView::setStarsPerRatedTrack(float starsPerRatedTrack)
{
     calculatorDialog.starsPerRatedTrackLineEdit->setText(QString::number(starsPerRatedTrack,'f',1));

}

void GuiView::setStarsPerRatedTrack()
{
     calculatorDialog.starsPerRatedTrackLineEdit->setText("");

}
void GuiView::setNumberOfRatedTracks(int n)
{ 
      calculatorDialog.numberOfRatedTracksLabel->setText(QString::number(n));

}

void GuiView::setNumberOfStars(int n)
{
      calculatorDialog.numberOfStarsLabel->setText(QString::number(n));

}



void GuiView::allowRating(bool isAllowed) {
    rateItButton->setEnabled(isAllowed);
}


void GuiView::setForegroundToBackground(QWidget *widget) {
    QPalette pal = widget->palette();
    pal.setColor(QPalette::Active, QPalette::Base, widget->palette().color(QPalette::Active, QPalette::Window));
    widget->setPalette(pal);
}




