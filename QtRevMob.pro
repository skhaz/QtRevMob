
QT += core gui widgets androidextras

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

TARGET = QtRevMob
TEMPLATE = app

SOURCES += main.cpp\
        MainWindow.cpp \
    RevMob.cpp

HEADERS  += MainWindow.h \
    RevMob.h

FORMS    += MainWindow.ui

CONFIG += mobility
MOBILITY =

