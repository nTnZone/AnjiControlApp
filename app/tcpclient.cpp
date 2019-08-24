#include "tcpclient.h"

TcpClient::TcpClient(QObject *parent) : QObject(parent)
{
    m_client = new QTcpSocket();
    vdata = new QByteArray();
    connect(m_client,&QTcpSocket::connected,this,&TcpClient::connectSuc);
    connect(m_client,&QTcpSocket::disconnected,this,&TcpClient::connectDis);
}

void TcpClient::ConnectServer(QHostAddress addr,quint16 port)
{
    m_client->connectToHost(addr,port);
}

void TcpClient::readData()
{
    *vdata = m_client->readAll();
}

void TcpClient::connectSuc()
{
    qDebug() << "connectSuc" << endl;
}

void TcpClient::connectDis()
{
    qDebug() << "connectDis" << endl;
}



