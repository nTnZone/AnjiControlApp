#-------------------------------------------------
#
# Project created by QtCreator 2019-07-26T11:08:19
#
#-------------------------------------------------


QT       += core gui webenginewidgets webchannel network gamepad \
      multimedia \
      multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = app
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += QT_MESSAGELOGCONTEXT
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        filmplayer.cpp \
        gamepadoperator.cpp \
        keyoperator.cpp \
        main.cpp \
        mainwindow.cpp \
        mode.cpp \
        tcpclient.cpp \
        tcpserver.cpp \
        udpcomm.cpp \
        videowidget.cpp

HEADERS += \
        filmplayer.h \
        gamepadoperator.h \
        keyoperator.h \
        mainwindow.h \
        mode.h \
        mtool.h \
        tcpclient.h \
        tcpserver.h \
        udpcomm.h \
        videowidget.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    C:/Users/DELL/Desktop/UAVproject/gaode.html

RESOURCES += \
    resource.qrc

INCLUDEPATH += \
               E:\opencv\build\include \
               E:\opencv\build\include\opencv \
               E:\opencv\build\include\opencv2
#LIBS += E:\opencv\build\x64\vc15\lib\opencv_world411d.lib

CONFIG(debug, debug|release): {
LIBS += -LE:\opencv\build\x64\vc14\bin \
#-lopencv_world411
-lopencv_world411d
} else:CONFIG(release, debug|release): {
LIBS += -LE:\opencv\build\x64\vc14\bin \
#-lopencv_world411
-lopencv_world411d
}
