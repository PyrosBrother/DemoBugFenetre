#-------------------------------------------------
#
# Project created by QtCreator 2014-11-13T15:14:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DemoBugFenetre
TEMPLATE = app

QMAKE_MAC_SDK = macosx10.9

SOURCES += main.cpp\
        mainwindow.cpp \
    Dialog.cpp \
    dialogeditmedecin.cpp

HEADERS  += mainwindow.h \
    Dialog.h \
    dialogeditmedecin.h

FORMS    += mainwindow.ui \
    Dialog.ui \
    dialogeditmedecin.ui

CONFIG += mobility
MOBILITY = 

