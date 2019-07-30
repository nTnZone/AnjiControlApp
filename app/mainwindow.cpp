#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)//, map_view(new QWebEngineView(this))
{
    ui->setupUi(this);
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
}

MainWindow::~MainWindow()
{
    delete ui;
}
