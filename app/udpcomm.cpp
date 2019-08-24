#include "udpcomm.h"

UdpComm::UdpComm(QObject *parent) : QObject(parent)
{
    mSocket = new QUdpSocket();
    connect(mSocket,SIGNAL(readyRead()),this,SLOT(RecvMsg()));
}

void UdpComm::SendMsg(QByteArray msg, QHostAddress addr, quint16 port)
{
    mSocket->writeDatagram(msg,addr,port);
}

void UdpComm::RecvMsg()
{
    QHostAddress address;
    quint16 port;
    msg.resize(mSocket->bytesAvailable());//根据可读数据来设置空间大小
    mSocket->readDatagram(msg.data(),msg.size(),&address,&port); //读取数据
//    qDebug() << msg <<endl;
}
