#-------------------------------------------------
#
# Project created by QtCreator 2017-03-18T14:29:13
#
#-------------------------------------------------

QT       += core gui printsupport multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Notatnik_v02
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    mainwindow2.cpp \
    musicplayer.cpp \
    simplecrypt.cpp

HEADERS  += mainwindow.h \
    secdialog.h \
    mainwindow2.h \
    simplecrypt.h \
    musicplayer.h

FORMS    += mainwindow.ui \
    secdialog.ui \
    mainwindow2.ui \
    musicplayer.ui

RESOURCES += \
    login.qrc

DISTFILES += \
    ../pong_/sansation.ttf \
    ../pong_/comic_sans.ttf \
    img/font-awesome_4-7-0_gamepad_256_0_32363b_none.png
