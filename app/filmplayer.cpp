#include "filmplayer.h"

FilmPlayer::FilmPlayer(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    timer->start(28);
    connect(timer,&QTimer::timeout,this,&FilmPlayer::nextFrame);
}

void FilmPlayer::setWindowName(QByteArray name)
{
    this->windowname = name;
}

void FilmPlayer::nextFile(char *prefix,int fileindex)
{
    qDebug() << this->frameindex;
    frameindex = 0;
    char str[50];
    sprintf(str,"G:\\QT\\video\\%s%d.avi",prefix,fileindex);
    cap.release();
    cap.open(str);
//    qDebug() << fileindex;
}

void FilmPlayer::nextFrame()
{
    if(cap.isOpened())
    {
        cap >> frame;
        if(!frame.empty())
        {
            cv::imshow(windowname.data(),frame);
            frameindex++;
        }
    }
    else
    {
//        qDebug() << "fail" << windowname;
    }
}
