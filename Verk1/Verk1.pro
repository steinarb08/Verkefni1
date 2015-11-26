QT += core
QT -= gui

TARGET = Verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    datalayer.cpp \
    domainlayer.cpp \
    replayer.cpp

HEADERS += \
    datalayer.h \
    domainlayer.h \
    replayer.h

