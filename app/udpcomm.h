#ifndef UDPCOMM_H
#define UDPCOMM_H

#include <QObject>
#include <QUdpSocket>

class UdpComm : public QObject
{
    Q_OBJECT
public:
    explicit UdpComm(QObject *parent = nullptr);
    void bind(QHostAddress addr,quint16 port)
    {
        mSocket->bind(addr,port);
        connect(mSocket,SIGNAL(readyRead()),this,SLOT(RecvMsg()));
    }
    void SendMsg(QByteArray msg,QHostAddress addr,quint16 port);
    void Getmsg(QByteArray &msg)
    {
        msg = this->msg;
    }
signals:

public slots:
    void RecvMsg();
public:
    QByteArray msg;
    QUdpSocket *mSocket;
};

#endif // UDPCOMM_H
