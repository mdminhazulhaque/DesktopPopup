QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopPopup
TEMPLATE = app


SOURCES += main.cpp\
        popup.cpp \
    mainwindow.cpp

HEADERS  += popup.h \
    mainwindow.h

FORMS    += popup.ui \
    mainwindow.ui
