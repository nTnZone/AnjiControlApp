#ifndef SERIALCOMM_H
#define SERIALCOMM_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

class SerialComm : public QObject
{
    Q_OBJECT
public:
    explicit SerialComm(QObject *parent = nullptr);
    void connectPort(int index);
    void sendData(QByteArray buf);

signals:

public slots:
    void readData();
public:
    QSerialPort *serial;
    QStringList serNamelist;
    QByteArray data;
};

#endif // SERIALCOMM_H
