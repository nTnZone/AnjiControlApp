#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include <QtWebEngineWidgets>
#include <QWebEngineView> // HTML页面
#include <QWebChannel>    // C++和JS/HTML双向通信，代替了已淘汰的QtWebFrame的功能
#include <QStringList>
#include <QUdpSocket>
#include <mode.h>
#include <keyoperator.h>
#include <stdio.h>
#define mysize 100
#define accuracy 6

namespace Ui {
class MainWindow;
}



class UdpComm : public QObject
{
    Q_OBJECT
public slots:
    void sendDirection(QByteArray qba)
    {
        this->SendMsg(qba,QHostAddress("192.168.1.226"),3456);//测试udp
        qDebug()<<"sending direction through udp";
    }
public:
    UdpComm()
    {
        mSocket = new QUdpSocket();
        mSocket->bind(QHostAddress::LocalHost,3456);//127.0.0.1:3456
        connect(mSocket,SIGNAL(readyRead()),this,SLOT(RecvMsg()));
    }

    UdpComm(QHostAddress addr,quint16 port)
    {
        mSocket = new QUdpSocket();
        mSocket->bind(addr,port);
        connect(mSocket,SIGNAL(readyRead()),this,SLOT(RecvMsg()));
    }

    virtual ~UdpComm() {delete mSocket;}

    void SendMsg(QByteArray msg,QHostAddress addr,quint16 port);
    void Getmsg(QByteArray &msg)
    {
        msg = this->msg;
    }

public slots:
    void RecvMsg();

public:
    QByteArray msg;
    QUdpSocket *mSocket;
};


//包含船的转向速度和前行速度设置
class BoatSpeed : public QObject
{
    Q_OBJECT
private:
    //前行速度
    int fspeed;
    //转向速度
    int rspeed;
public:
    void setFspeed(int speed)
    {
        this->fspeed=speed;
    }
    void setRspeed(int speed)
    {
        this->rspeed=speed;
    }
    int  getFspeed()
    {
        return  this->fspeed;
    }
    int getRspeed()
    {
        return this->rspeed;
    }

    BoatSpeed()
    {
        this->fspeed=1;
        this->rspeed=1;
    }
};

//WebClass 供JS调用的类，c与js沟通交互的基础
//PointXY存储船的坐标经纬度
class  PointXY : public QObject
{
    Q_OBJECT
//public:
//    explicit PointXY(QObject *parent = nullptr);
public:
    //boat_存储卫星定位的经纬度坐标
    float boat_longtitude;//之后可能为了实际需要修改为vector存储,动态存储
    float boat_latitude;
    //map_存储来自地图传来的经纬度坐标
    std::vector<double> map_longtitude;
    std::vector<double> map_latitude;
public:
    //显示地图传来的坐标点
    void showMapPoint();

signals:
    void mapCenterChanged(QString longi,QString lati);
public slots:
    //接收网页发来的
    void saveMapPoint(QString longti, QString lati);
    void setMapCenter(double data1,double data2);
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void AddTextToEditText(QString str);
    ~MainWindow();

private slots:
    void on_showDataButton_clicked();

    void on_autoButton_clicked();

    void on_rspeedBox_currentTextChanged(const QString &arg1);

    void on_remark_clicked();

    void on_fspeedBox_currentTextChanged(const QString &arg1);

    void on_manualButton_clicked();

    void on_rightButton_clicked();


    void on_disuButton_clicked();

    void on_stableButton_clicked();

    void on_upButton_clicked();

    void on_startButton_clicked();

    void on_test_clicked();


signals:

private:
    Ui::MainWindow *ui;
    int modeFlag=0;
    Mode *mode;
    PointXY *pointxy=new PointXY();
    BoatSpeed *boatspeed=new BoatSpeed();
    UdpComm *udpcomm;
    QWebChannel *webchannel=new QWebChannel();
    KeyOperator *key;
};




#endif // MAINWINDOW_H
