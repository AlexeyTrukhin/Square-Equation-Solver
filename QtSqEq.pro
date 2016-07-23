QT += core
QT -= gui

CONFIG += c++11

TARGET = QtSqEq
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    GetFileText.cpp \
    IsZero.cpp \
    SqEquation.cpp \
    ResultToText.cpp \
    WriteStringToFile.cpp \
    StringToList.cpp

HEADERS += \
    GetFileText.h \
    IsZero.h \
    SqEquation.h \
    ResultToText.h \
    WriteStringToFile.h \
    StringToList.h
