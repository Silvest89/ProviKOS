#-------------------------------------------------
#
# Project created by QtCreator 2016-03-29T13:07:13
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProviKOS
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    clipboardlistener.cpp

HEADERS  += widget.h \
    clipboardlistener.h

FORMS    += widget.ui