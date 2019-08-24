#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>

class TcpClient : public QObject
{
    Q_OBJECT
public:
    explicit TcpClient(QObject *parent = nullptr);
    ~TcpClient(){delete m_client;delete vdata;}
    void ConnectServer(QHostAddress addr,quint16 port);


signals:

public slots:
    void connectSuc();
    void readData();
    void connectDis();

public:
    QTcpSocket * m_client;
    QByteArray * vdata;
};

#endif // TCPCLIENT_H
