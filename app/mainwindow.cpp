#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)//, map_view(new QWebEngineView(this))
{
    ui->setupUi(this);
<<<<<<< HEAD
    //ui->webView->setUrl(QString("C:\\Users\\DELL\\Desktop\\UAVproject\\gaode.html"));
    ui->webView->load(QUrl(QDir::currentPath() + "/gaode.html"));
    qDebug()<<QDir::currentPath() + "gaode.html";
//    connect(page,&QWebEnginePage::featurePermissionRequested(),[this,page](const QUrl &securityOrigin,QWebEnginePage::Feature feature){
//        if (feature != QWebEnginePage::Geolocation)
//            return;
//        QMessageBox msgBox(this);
//        msgBox.setText(tr("%1 wants to know your location").arg(securityOrigin.host()));
//        msgBox.setInformativeText(tr("Do you want to send your current location to this website?"));
//        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
//        msgBox.setDefaultButton(QMessageBox::Yes);

//        if (msgBox.exec() == QMessageBox::Yes) {
//            page->setFeaturePermission(
//                        securityOrigin, feature, QWebEnginePage::PermissionGrantedByUser);
//        } else {
//            page->setFeaturePermission(
//                        securityOrigin, feature, QWebEnginePage::PermissionDeniedByUser);
//        }
//    });
    ui->webView->show();
=======
    channel = new QWebChannel();//QwebChannel
    channel->registerObject(QString("webobj"),this);
    ui->webView->page()->setWebChannel(channel);//将webchannel连接到webview
    ui->webView->load(QUrl(QDir::currentPath() + "/gaode.html"));//加载地图
    ui->webView->show();
//    ui->webView->page()->runJavaScript("clearAll()");//QT调用JS

>>>>>>> 9eedb056dd29505a69eb03951bbaa5cf8dbfe995
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
