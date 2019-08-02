#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include <QtWebEngineWidgets>
#include <QWebEngineView> // HTML页面
#include <QWebChannel>    // C++和JS/HTML双向通信，代替了已淘汰的QtWebFrame的功能
#define size 100
#define accuracy 6
namespace Ui {
class MainWindow;
}

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
    //向网页发送消息
    void sendMsg(QWebEnginePage* page,const QString& msg);
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
    ~MainWindow();

public:
    PointXY *pointxy=new PointXY();
public slots:
    void getCoordinates(QString lon,QString lat);

private slots:
    void on_showDataButton_clicked();

    void on_autoButton_clicked();

private:
    Ui::MainWindow *ui;

    QWebChannel *channel;

//    QWebEngineView *map_view;
};




#endif // MAINWINDOW_H
