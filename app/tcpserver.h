#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>

class TcpServer : public QObject
{
    Q_OBJECT
public:
    explicit TcpServer(QObject *parent = nullptr);
    void listen(quint16 port);
    void setFileName(QString filename);
    ~TcpServer(){delete m_server;delete m_client;delete vdata;}

signals:
    void TransCompleted(QString str,int index);

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
    QString filename;
    int index;
};


#endif // TCPSERVER_H
