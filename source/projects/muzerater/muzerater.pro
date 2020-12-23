# Set the application version

VERSION = 1.0.0.0


# Set the application icon

RC_ICONS = muzerater.ico


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

QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += xmlpatterns


# Set compiler options

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11
CONFIG += qt warn_on depend_includepath


# Set default rules for deployment

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


# Main

SOURCES     +=  $$SOURCEDIR/main/main.cpp \


# Model

HEADERS     +=  ../muzeratingcalculator/source/models/muzeratingcalculator.h \
                $$SOURCEDIR/models/album.h \
                $$SOURCEDIR/models/albumextractor.h \
                $$SOURCEDIR/models/itunesalbumextractor.h \
                $$SOURCEDIR/models/foobar2000albumextractor.h \

SOURCES     +=  ../muzeratingcalculator/source/models/muzeratingcalculator.cpp \
                $$SOURCEDIR/models/album.cpp \
                $$SOURCEDIR/models/albumextractor.cpp \
                $$SOURCEDIR/models/itunesalbumextractor.cpp \
                $$SOURCEDIR/models/foobar2000albumextractor.cpp \


INCLUDEPATH +=  $$SOURCEDIR/models \
INCLUDEPATH +=  ../muzeratingcalculator/source/models \


# View

HEADERS     +=  $$SOURCEDIR/views/view.h \
                $$SOURCEDIR/views/gui_view.h \
                $$SOURCEDIR/views/muzeraterwizard.h \


SOURCES     +=  $$SOURCEDIR/views/view.cpp \
                $$SOURCEDIR/views/gui_view.cpp \
                $$SOURCEDIR/views/muzeraterwizard.cpp \


FORMS       +=  $$SOURCEDIR/views/ui/muzeraterwizard.ui \
                $$SOURCEDIR/views/ui/muzeraterwelcomewizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterdatabasewizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterfoobar2000wizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterituneswizardpage.ui \
                $$SOURCEDIR/views/ui/muzerateroutputwizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterfilterbyratedwizardpage.ui \
                $$SOURCEDIR/views/ui/muzeratersummarywizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterprocesswizardpage.ui \
                $$SOURCEDIR/views/ui/muzeraterresultwizardpage.ui \


INCLUDEPATH +=  $$SOURCEDIR/views \
INCLUDEPATH +=  $$SOURCEDIR/views/ui \


# Presenters

HEADERS     +=  $$SOURCEDIR/presenters/presenter.h \


SOURCES     +=  $$SOURCEDIR/presenters/presenter.cpp \


INCLUDEPATH +=  $$SOURCEDIR/presenters \


# Controllers

HEADERS     +=  $$SOURCEDIR/controllers/controller.h \


SOURCES     +=  $$SOURCEDIR/controllers/controller.cpp \


INCLUDEPATH +=  $$SOURCEDIR/controllers \





