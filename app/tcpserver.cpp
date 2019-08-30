#include "tcpserver.h"

TcpServer::TcpServer(QObject *parent) : QObject(parent)
{
    m_server = new QTcpServer();
    vdata = new QByteArray();
    qDebug() <<vdata->toHex();
    connect(m_server,&QTcpServer::newConnection,this,&TcpServer::NewClient);
    flag = true;
    pkg_size = 0;
    total_size = 0;
    index=0;
}

void TcpServer::listen(quint16 port)
{
    m_server->listen(QHostAddress::Any,port);
}

void TcpServer::setprefix(QByteArray prefix)
{
    this->prefix = prefix;
}

void TcpServer::NewClient()
{
    m_client = m_server->nextPendingConnection();
    connect(m_client,&QTcpSocket::readyRead,this,&TcpServer::readFilm);
    connect(m_client,&QTcpSocket::disconnected,this,&TcpServer::clientDis);
}

void TcpServer::clientDis()
{
    qDebug()<< "disconnect";
}

void TcpServer::readFilm()
{
    QByteArray barray = m_client->readAll();
//    qDebug() << barray.size();
    if(flag)
    {
        qDebug() <<QDateTime::currentDateTime().toMSecsSinceEpoch();
        QByteArray sizestr = barray.mid(4,4);//端序不对
        total_size = *(int*)(sizestr.data());//读取文件大小
        total_size = total_size + 8;//补齐文件大小
//        qDebug() << this->total_size;
        qDebug() << barray.left(12).toHex();
//        qDebug() <<sizestr.toHex();
        flag = false;
    }
    else
    {
        ;
    }
    pkg_size = pkg_size + barray.size();//计算当前接收到的大小
    vdata->append(barray);//数据接起来
    if (pkg_size >= total_size)
    {
        flag = true;
        pkg_size = 0;
        total_size = 0;
        //存储视频
        QFile *file;
        QString str = QString("%1%2%3%4").arg("G:\\QT\\video\\").arg(prefix.data()).arg(index).arg(".avi");
        file=new QFile(str);
        file->open(QIODevice::WriteOnly);
        file->write(vdata->data(),vdata->size());
        file->close();
        vdata->clear();
        //发射信号，标志一段视频传输完成
        emit TransCompleted(prefix.data(),index);
        index++;
    }


//    qDebug() << this->pkg_size << "  " << this->total_size;

//    m_client->write(QByteArray("HAPE"));
//    qDebug() << barray << endl;
//    qDebug() << vdata->data() << endl;
//    qDebug() << barray.toInt() << endl;

//    vdata->append(barray);
//    QByteArray a = barray.right(17);
//    qDebug() << a;
}
