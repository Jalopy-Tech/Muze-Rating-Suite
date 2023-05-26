# Set the version

VERSION = 1.1
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

# Set the platform used by the build path

unix:PLATFORM = "Linux"
win32:PLATFORM = "Windows"
macx:PLATFORM = "macOS"


# Add QT modules

QT       += core gui widgets


win32:QMAKE_LFLAGS += -static-libgcc
win32:QMAKE_LFLAGS += -static-libstdc++


# Turn off console

CONFIG -= console


# Set compiler options

CONFIG += c++17
macx:CONFIG += app_bundle


# Set path variables

SOURCEDIR = .

unix:TARGET = "muze-rating-calculator"
win32:TARGET = "MuzeRatingCalculator"
macx:TARGET = "Muze Rating Calculator"

OBJECTS_DIR = .obj
MOC_DIR = .moc
RCC_DIR = .qrc
UI_DIR = .ui


# Set the application icon

linux:RC_ICONS = muze-rating-calculator.ico
win32:RC_ICONS = muze-rating-calculator.ico
macx:ICON = muze-rating-calculator.icns

# Resources

RESOURCES += $$SOURCEDIR/resources/muze-rating-calculator.qrc

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



FORMS       +=  $$SOURCEDIR/views/ui/calculatordialog.ui



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





