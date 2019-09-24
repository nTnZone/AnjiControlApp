#include "serialcomm.h"

SerialComm::SerialComm(QObject *parent) : QObject(parent)
{

    serial = new QSerialPort();

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serNamelist << info.portName();
        qDebug() << info.portName();
    }

//    if(serial->isOpen())
//    {
//        serial->clear();
//        serial->close();
//    }


}

void SerialComm::connectPort(int index)
{
    if (serial->isOpen()) {
        qDebug() << "port open";
    }
    serial->setPortName(serNamelist[index]);
    serial->setBaudRate(QSerialPort::Baud9600,QSerialPort::AllDirections);
    serial->open(QIODevice::ReadWrite);
    if (serial->isOpen()) {
        qDebug() << "port open";
    }
    connect(serial,&QSerialPort::readyRead,this,&SerialComm::readData);
}

void SerialComm::sendData(QByteArray buf)
{
    serial->write(buf);

}

void SerialComm::readData()
{
    if(serial->canReadLine())
    {
        data = serial->readLine();
        qDebug() << data;
    }
    else
    {

    }

}
