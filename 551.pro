#-------------------------------------------------
#
# Project created by QtCreator 2014-11-17T20:31:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 551
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mydialog.cpp \
    searchdialog.cpp \
    configure.cpp \
    intro.cpp

HEADERS  += mainwindow.h \
    mydialog.h \
    searchdialog.h \
    Node.h \
    configure.h \
    Node2.h \
    intro.h

FORMS    += mainwindow.ui \
    mydialog.ui \
    searchdialog.ui \
    configure.ui \
    intro.ui

RESOURCES += \
    MyResource.qrc
