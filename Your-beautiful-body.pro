#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T16:27:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Your-beautiful-body
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        menuwindow.cpp \
    my_data.cpp \
    my_workout.cpp \
    deyx.cpp \
    my_achievements.cpp \
    my_help.cpp \
    download.cpp \
    qcustomplot.cpp \
    login.cpp \
    my_mas.cpp

HEADERS += \
        menuwindow.h \
    my_data.h \
    my_workout.h \
    deyx.h \
    my_achievements.h \
    my_help.h \
    download.h \
    qcustomplot.h \
    login.h \
    my_mas.h

FORMS += \
        menuwindow.ui \
    my_data.ui \
    my_workout.ui \
    deyx.ui \
    my_achievements.ui \
    my_help.ui \
    download.ui \
    login.ui \
    my_mas.ui

RESOURCES += \
    ressurse.qrc
