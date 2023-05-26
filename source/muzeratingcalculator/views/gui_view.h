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

   --------------------------------------------------------------------------------

    The View for a GUI interface.

*/


#ifndef GUI_VIEW_H
#define GUI_VIEW_H

#include "view.h"
#include "presenter.h"
#include "ui_calculatordialog.h"

#include <QDebug>
#include <QPushButton>
#include <QMessageBox>

class Presenter;

class GuiView : public View
{
    Q_OBJECT

public:
    explicit GuiView(QObject *parent = nullptr);
    explicit GuiView(int stars[5], QObject *parent = nullptr);
    ~GuiView();
    int exec() override;

    void showError(const QString& msg) override;
    void showInformation(const QString& msg) override;

    void setVersion(const QString& version) override;
    void setStars(int stars[5]) override;
    int stars(int i) override;
    void setNumberOfRatedTracks(int n) override;
    void setNumberOfStars(int n)  override;
    void setMuzeRating(float rating) override;
    void setMuzeRating() override;
    void setStarsPerRatedTrack(float starsPerRatedTrack) override;
    void setStarsPerRatedTrack() override;
    void allowRating(bool isAllowed) override;

private:
    void init();
    void setForegroundToBackground(QWidget *widget);
    void setSpinBoxValue(QSpinBox *spinBox, int value);

    QPushButton *rateItButton;

    Ui::CalculatorDialog calculatorDialog;
    QDialog dialog;

};

#endif

