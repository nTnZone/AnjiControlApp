#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)//, map_view(new QWebEngineView(this))
{
    ui->setupUi(this);
    channel = new QWebChannel();//QwebChannel
    channel->registerObject(QString("webobj"),this);
    ui->webView->page()->setWebChannel(channel);//将webchannel连接到webview
    ui->webView->load(QUrl(QDir::currentPath() + "/gaode.html"));//加载地图
    ui->webView->show();
//    ui->webView->page()->runJavaScript("clearAll()");//QT调用JS

}

MainWindow::~MainWindow()
{
    delete ui;
    delete channel;
}

void MainWindow::getCoordinates(QString lon,QString lat)
{
    qDebug() << lon <<','<<lat << endl ;
//    ui->webView->page()->runJavaScript("clearAll()");
}
