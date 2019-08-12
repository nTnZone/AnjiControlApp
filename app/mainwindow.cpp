#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <iostream>
#include <mtool.h>

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
    QWebChannel *webchannel=new QWebChannel();

    webchannel->registerObject("pointxy", pointxy);//注册对象
    ui->webView->page()->setWebChannel(webchannel);

    ui->webView->load(QUrl(QDir::currentPath() + "/gaode.html"));//加载地图
    ui->webView->show();

    //qInstallMessageHandler(outputMessage);
    outputMessage(QtDebugMsg,"This is a debug message",UAVlog);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete channel;
}

void MainWindow::on_showDataButton_clicked()
{
    this->pointxy->showMapPoint();
}

void MainWindow::on_autoButton_clicked()
{
    QTime time;
    double longi[5]={108.959096,108.973344,108.970082,108.953775,108.918241};
    double lati[5]={34.25855,34.287205,34.304506,34.322371,34.348595};
    for(int i=0;i<5;i++)
    {


        time.start();
        while(time.elapsed() < 5000)             //等待时间流逝5秒钟
            QCoreApplication::processEvents();   //处理事件
        this->pointxy->setMapCenter(longi[i],lati[i]);
    }
}

void MainWindow::on_fspeedBox_currentIndexChanged(int index)
{

    this->boatspeed->setFspeed(ui->fspeedBox->currentText().toInt());
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
}
