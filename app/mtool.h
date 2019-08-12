#ifndef MTOOL_H
#define MTOOL_H
#include <qapplication.h>
#include <stdlib.h>
#include <stdio.h>
#include <QMutex>
#include <QDateTime>
#include <QIODevice>
#include <QFile>
#include <QTextStream>
#include <qdebug.h>
enum LogFileType { UAVlog=100,Laserlog=101,Sonarlog=102 };
int outputMessage(QtMsgType type, const QString  &context,LogFileType logtype)//, const QString &msg
{

    static QMutex mutex;

    mutex.lock();

    QString text;
    QFile *file;
    switch (logtype)
    {
    case UAVlog:
    {
        file=new QFile("UAVlog.txt");
        file->open(QIODevice::WriteOnly | QIODevice::Append);
        break;
    }
    case Laserlog:
    {
        file=new QFile("Laserlog.txt");
        file->open(QIODevice::WriteOnly | QIODevice::Append);
        break;
    }
    case Sonarlog:
    {
        file=new QFile("Sonarlog.txt");
        file->open(QIODevice::WriteOnly | QIODevice::Append);
    }
    default:
        return -1;
    }
    switch(type)
    {

    case QtDebugMsg:
        text = QString("Debug:");
        break;
    case QtWarningMsg:
        text = QString("Warning:");
        break;
    case QtCriticalMsg:
        text = QString("Critical:");
        break;
    case QtFatalMsg:
        text = QString("Fatal:");

    }

//    QString context_info = QString("File:(%1) Line:(%2)").arg(QString(context.file)).arg(context.line);

    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");

    QString current_date = QString("(%1)").arg(current_date_time);
    qDebug()<<"1 :"<<file->exists();
    QString message = QString("%1 %2 %3").arg(text).arg(context).arg(current_date);

//    QFile file("log.txt");
//    file.open(QIODevice::WriteOnly | QIODevice::Append);

    QTextStream text_stream(file);

    text_stream << message << "\r\n";

    file->flush();
    file->close();
    mutex.unlock();


    return 0;
}



#endif // MTOOL_H
