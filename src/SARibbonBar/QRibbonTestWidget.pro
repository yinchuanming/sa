#-------------------------------------------------
#
# Project created by QtCreator 2017-09-21T14:04:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QRibbonTestWidget
TEMPLATE = app


SOURCES += main.cpp\
    SARibbonBar.cpp \
    SARibbonMainWindow.cpp \
    FramelessHelper.cpp \
    SAWindowButtonGroup.cpp \
    SARibbonApplicationButton.cpp \
    SARibbonTabBar.cpp \
    SARibbonCategory.cpp \
    mainwindow.cpp \
    SARibbonContextCategory.cpp \
    SARibbonPannel.cpp \
    SARibbonToolButton.cpp \
    SARibbonMenu.cpp \
    SARibbonStyle.cpp

HEADERS  += \
    SARibbonBar.h \
    SARibbonMainWindow.h \
    FramelessHelper.h \
    SAWindowButtonGroup.h \
    SARibbonApplicationButton.h \
    SARibbonTabBar.h \
    SARibbonCategory.h \
    mainwindow.h \
    SARibbonContextCategory.h \
    SARibbonPannel.h \
    SARibbonToolButton.h \
    SARibbonMenu.h \
    SARibbonStyle.h \
    SARibbonGlobal.h

RESOURCES += \
    saribbonresouce.qrc

DEFINES += SA_NO_EXPORT