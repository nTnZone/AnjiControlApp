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
        infosets.cpp \
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
        infosets.h \
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


RESOURCES += \
    resource.qrc

INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv \
               /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so    \
        /usr/local/lib/libopencv_imgproc.so \
        /usr/local/lib/libopencv_imgcodecs.so\
        /usr/local/lib/libopencv_videoio.so

INCLUDEPATH += /opt/ros/kinetic/include

LIBS += -L/opt/ros/kinetic/lib -lroscpp -lroslib -lrosconsole -lroscpp_serialization -lrostime
