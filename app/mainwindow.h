#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include <QtWebEngineWidgets>
#include <QWebEngineView> // HTML页面
#include <QWebChannel>    // C++和JS/HTML双向通信，代替了已淘汰的QtWebFrame的功能
#include <QStringList>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <udpcomm.h>
#include <mode.h>
#include <keyoperator.h>
#include <stdio.h>
#include <gamepadoperator.h>
#include <videowidget.h>
#include <tcpclient.h>
#include <infosets.h>
#include <tcpserver.h>
#include <filmplayer.h>
#include <serialcomm.h>
#include <opencv2/opencv.hpp>
#define mysize 100
#define accuracy 6

namespace Ui {
class MainWindow;
}






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
    void sleep(int n);
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

    void uav_gps_show(double x,double y);


    void on_confirm_1_clicked();

    void on_stopButton_clicked();

    void on_thrusterpowerset_clicked();

    void on_thrusterpower_clicked();


signals:

private:
    Ui::MainWindow *ui;
    int modeFlag=0;
    bool isAutoMode=false;
    bool isManualMode=false;
    bool isLowSpeedMode=false;
    bool isStableMode=false;
    Mode *mode;
    PointXY *pointxy=new PointXY();
    BoatSpeed *boatspeed=new BoatSpeed();
    UdpComm *udpcomm;
    QWebChannel *webchannel;
    QWebEngineView *web111;
    KeyOperator *key;
    GamePadOperator *gpo;
    QMediaPlayer *m_player;
    InfoSets *infoset;
    QVideoWidget *m_videoWidget;
    QVideoWidget *m_videoWidget2;
    QVideoWidget *m_videoWidget3;
    QVideoWidget *m_videoWidget4;
    TcpServer *server;
    QTimer *timer;
    cv::VideoCapture capture;
    cv::Mat frame;
    FilmPlayer *mfplayer;
    //主控ip端口
    QString rongIp;
    quint16 rongPort;
    //serial port
    SerialComm *serial;
//    int index;

};




#endif // MAINWINDOW_H
