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
    This program uses a MVP (Model-View-Presenter) architecture using a passive view.

    There is one view: Gui. The View instantiates a Presenter to carry
    out the view logic. The Presenter uses view independent logic.

    The View passes all user interaction to the Presenter passively
    and the Presenter calls View methods to carry out the tasks needed.

    Any further views needed can use th same presenter as it's logic is
    independant of the view implementation.

    The controller reads in the command arguments and then instatiates the view
    acting as a view factory (although in this case, there is only one type of view).

    The Model provides application logic for the Presenter.
*/

#include "presenter.h"
#include "controller.h"
#include "view.h"

#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("Muze Rating");
    QCoreApplication::setApplicationName("Muze Rater");



    Controller controller;
    View *view;
    view = controller.view();

    int returnCode = view->exec();

    return returnCode;

}

