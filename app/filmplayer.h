#ifndef FILMPLAYER_H
#define FILMPLAYER_H

#include <QObject>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <QTimer>
#include <QDebug>


class FilmPlayer : public QObject
{
    Q_OBJECT
public:
    explicit FilmPlayer(QObject *parent = nullptr);
    void setWindowName(QByteArray name);
signals:

public slots:
    void nextFile(char *prefix,int fileindex);
    void nextFrame();

public:
    QTimer *timer;
    cv::VideoCapture cap;
    cv::Mat frame;
    int index;
    int frameindex;
    QByteArray windowname;
};

#endif // FILMPLAYER_H
