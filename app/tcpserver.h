#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>
#include <QDateTime>

class TcpServer : public QObject
{
    Q_OBJECT
public:
    explicit TcpServer(QObject *parent = nullptr);
    void listen(quint16 port);
    void setprefix(QByteArray prefix);

signals:
    void TransCompleted(char *str,int index);

public slots:
    void readFilm();
    void NewClient();
    void clientDis();
public:
    QTcpServer * m_server;
    QTcpSocket * m_client;
    QByteArray * vdata;
    bool flag;
    int pkg_size;//已经接收的大小
    int total_size;//文件表明的大小
    QByteArray prefix;
    int index;
};


#endif // TCPSERVER_H
