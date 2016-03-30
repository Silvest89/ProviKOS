#-------------------------------------------------
#
# Project created by QtCreator 2016-03-29T13:07:13
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProviKOS
TEMPLATE = app
win32:RC_FILE = ProviTel.rc

SOURCES += main.cpp\
        widget.cpp \
    clipboardlistener.cpp \
    kosimage.cpp \
    koslistwidget.cpp \
    cvaapi.cpp \
    koschecker.cpp \
    koslist.cpp \
    htmldelegate.cpp \
    cvakosresult.cpp

HEADERS  += widget.h \
    clipboardlistener.h \
    kosimage.h \
    koslistwidget.h \
    cvaapi.h \
    koschecker.h \
    koslist.h \
    htmldelegate.h \
    cvakosresult.h

FORMS    += widget.ui \
    koslistwidget.ui

RESOURCES += \
    resources.qrc
