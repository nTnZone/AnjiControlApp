#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <iostream>
#include <mtool.h>
#include <QPainter>
//这个方法供js调用，发送一个““的信号
void PointXY::saveMapPoint(QString longti, QString lati)
{
    qDebug() << longti <<','<<lati << endl ;
    map_longtitude.push_back(longti.toDouble());
    map_latitude.push_back(lati.toDouble());

}

void PointXY::setMapCenter(double data1,double data2)
{

    emit mapCenterChanged(QString::number(data1, 10, accuracy),QString::number(data2, 10, accuracy));
}



void PointXY::showMapPoint()
{
    //qDebug()显示数据会截断，只显示6位数字
    //qDebug("%.10lf", 445.89099876);
    std::vector<double>::iterator it;
    qDebug()<<"longtitude:";
    for(it=map_longtitude.begin();it!=map_longtitude.end();it++)
    {
        qDebug()<<*it;
    }
    qDebug()<<"\nlatitude:";
    for(it=map_latitude.begin();it!=map_latitude.end();it++)
    {
        qDebug()<<*it;
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)//, map_view(new QWebEngineView(this))
{
    ui->setupUi(this);
    QStringList rspeedList={"1","2","3"};
    QStringList fspeedList={"1","2","3","4","5"};
    ui->rspeedBox->addItems(rspeedList);
    ui->fspeedBox->addItems(fspeedList);

    webchannel->registerObject("pointxy", pointxy);//注册对象
    ui->webView->page()->setWebChannel(webchannel);

    QIcon *icon=new QIcon("down.png");
    ui->downButton->setIcon(*icon);
    ui->downButton->setIconSize(QSize(50,50));
    QIcon *icon2=new QIcon("up.png");
    ui->upButton->setIcon(*icon2);
    ui->upButton->setIconSize(QSize(50,50));
    QIcon *icon3=new QIcon("right.png");
    ui->rightButton->setIcon(*icon3);
    ui->rightButton->setIconSize(QSize(50,50));
    QIcon *icon4=new QIcon("left.png");
    ui->leftButton->setIcon(*icon4);
    ui->leftButton->setIconSize(QSize(50,50));
    QIcon *starticon=new QIcon("start.png");
    ui->startButton->setIcon(*starticon);
    ui->startButton->setIconSize(QSize(50,50));
    ui->webView->load(QUrl(QDir::currentPath() + "/gaode.html"));//加载地图
    ui->webView->show();

    udpcomm = new UdpComm(QHostAddress("192.168.1.213"),3456);//绑定自己的IP和端口

    //qInstallMessageHandler(outputMessage);
    outputMessage(QtDebugMsg,"This is a debug message",UAVlog);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete webchannel;
    delete pointxy;
    delete boatspeed;
    delete udpcomm;
}

void MainWindow::on_showDataButton_clicked()
{
    this->pointxy->showMapPoint();
}

void MainWindow::on_autoButton_clicked()
{
//    QTime time;
//    double longi[5]={108.959096,108.973344,108.970082,108.953775,108.918241};
//    double lati[5]={34.25855,34.287205,34.304506,34.322371,34.348595};
//    for(int i=0;i<5;i++)
//    {


//        time.start();
//        while(time.elapsed() < 5000)             //等待时间流逝5秒钟
//            QCoreApplication::processEvents();   //处理事件
//        this->pointxy->setMapCenter(longi[i],lati[i]);
//    }
    for (unsigned int i = 0;i < pointxy->map_latitude.size();i++) {
        QByteArray msg("#RPC");//协议头
        QString str_lon = QString("%1").arg(pointxy->map_latitude.at(i),14,10,9,'0');//按要求填充经度
        msg.append(str_lon);
        msg.append(";");
        QString str_lat = QString("%1").arg(pointxy->map_longtitude.at(i),13,10,9,'0');//按要求填充纬度
        msg.append(str_lat);
        msg.append(QByteArray::fromHex("0d0a"));//协议尾
        //发送
//        udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);
//        qDebug() << msg <<endl;
//        qDebug() << msg.toHex() <<endl;
    }

}

void MainWindow::on_fspeedBox_currentTextChanged(const QString &fspeed)
{
    this->boatspeed->setFspeed(fspeed.toInt());
}


void MainWindow::on_rspeedBox_currentTextChanged(const QString &rspeed)
{

    this->boatspeed->setRspeed(rspeed.toInt());//ui->rspeedBox->currentText().toInt()
}

void MainWindow::on_remark_clicked()
{
    ui->webView->page()->runJavaScript("clearAll()");//调用JS函数清除所有标记
    pointxy->map_latitude.clear();
    pointxy->map_longtitude.clear();
    QByteArray *msg=new QByteArray("1234");
     //msg.append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);//测试udp
//    qDebug()<<QByteArray("1234");


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
