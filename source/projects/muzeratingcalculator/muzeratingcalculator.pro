# Set the application version

VERSION = 1.0.0.0


# Set the application icon

RC_ICONS = muzeratingcalculator.ico


# Set the variables used in paths

unix:PLATFORM = "linux"
win32:PLATFORM = "windows"
win64:PLATFORM = "windows"
ROOTDIR = ../..
SOURCEDIR = ./source


# Set the build path

CONFIG(debug, debug|release) {
    DESTDIR = $$ROOTDIR/../builds/$$PLATFORM/debug/$$TARGET
}
CONFIG(release, debug|release) {
    DESTDIR = $$ROOTDIR/../builds/$$PLATFORM/release/$$TARGET
}


# Turn off console

CONFIG -= console

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui


# Add QT modules

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += xmlpatterns



# Set compiler options

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11
CONFIG += qt warn_on depend_includepath


# Default rules for deployment

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


# Main

SOURCES     +=  $$SOURCEDIR/main/main.cpp \


# Model

HEADERS     +=  $$SOURCEDIR/models/muzeratingcalculator.h \

SOURCES     +=  $$SOURCEDIR/models/muzeratingcalculator.cpp \

INCLUDEPATH +=  $$SOURCEDIR/models \


# View

HEADERS     +=  $$SOURCEDIR/views/view.h \
                $$SOURCEDIR/views/gui_view.h \
                $$SOURCEDIR/views/console_view.h \
                $$SOURCEDIR/views/windows_console_fix.h \



SOURCES     +=  $$SOURCEDIR/views/view.cpp \
                $$SOURCEDIR/views/gui_view.cpp \
                $$SOURCEDIR/views/console_view.cpp \
                $$SOURCEDIR/views/windows_console_fix.cpp \



FORMS       +=  $$SOURCEDIR/views/ui/calculatordialog.ui \



INCLUDEPATH +=  $$SOURCEDIR/views \
INCLUDEPATH +=  $$SOURCEDIR/views/calculatordialog \


# Presenters

HEADERS     +=  $$SOURCEDIR/presenters/presenter.h \


SOURCES     +=  $$SOURCEDIR/presenters/presenter.cpp \


INCLUDEPATH +=  $$SOURCEDIR/presenters \


# Controllers

HEADERS     +=  $$SOURCEDIR/controllers/controller.h \


SOURCES     +=  $$SOURCEDIR/controllers/controller.cpp \


INCLUDEPATH +=  $$SOURCEDIR/controllers \





