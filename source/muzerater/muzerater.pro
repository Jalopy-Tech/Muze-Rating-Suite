# Set the version

VERSION = 1.1
DEFINES += APP_VERSION=\\\"$$VERSION\\\"


# Set the platform used by the build path

unix:PLATFORM = "Linux"
win32:PLATFORM = "Windows"
macx:PLATFORM = "macOS"


# Add QT modules

QT      += core gui widgets
QT      += xmlpatterns

win32:QMAKE_LFLAGS += -static-libgcc
win32:QMAKE_LFLAGS += -static-libstdc++


# Turn off console

CONFIG -= console


# Set compiler options

CONFIG += c++17
macx:CONFIG += app_bundle


# Set path variables

ROOTDIR = ..
SOURCEDIR = .


unix:TARGET = "muze-rater"
win32:TARGET = "MuzeRater"
macx:TARGET = "Muze Rater"


OBJECTS_DIR = .obj
MOC_DIR = .moc
RCC_DIR = .qrc
UI_DIR = .ui



# Set the application icon

linux:RC_ICONS = muze-rater.ico
win32:RC_ICONS = muze-rater.ico
macx:ICON = muze-rater.icns


# Resources

RESOURCES += $$SOURCEDIR/resources/muze-rater.qrc


# Main

SOURCES     +=  $$SOURCEDIR/main/main.cpp \


# Model

HEADERS     +=  $$SOURCEDIR/../muzeratingcalculator/models/muzeratingcalculator.h \
                $$SOURCEDIR/models/album.h \
                $$SOURCEDIR/models/albumextractor.h \
                $$SOURCEDIR/models/itunesalbumextractor.h \
                $$SOURCEDIR/models/foobar2000albumextractor.h \

SOURCES     +=  $$SOURCEDIR/../muzeratingcalculator/models/muzeratingcalculator.cpp \
                $$SOURCEDIR/models/album.cpp \
                $$SOURCEDIR/models/albumextractor.cpp \
                $$SOURCEDIR/models/itunesalbumextractor.cpp \
                $$SOURCEDIR/models/foobar2000albumextractor.cpp \


INCLUDEPATH +=  $$SOURCEDIR/models \
INCLUDEPATH +=  $$SOURCEDIR/../muzeratingcalculator/models \


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





