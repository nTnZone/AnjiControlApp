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

//实例化
    mode=new Mode(this);
    key=new KeyOperator(this);
    gpo = new GamePadOperator (this);
    webchannel =  new QWebChannel(this);
    serial = new SerialComm ();
//    udpcomm = new UdpComm (this);
//    server = new TcpServer (this);
//    mfplayer = new FilmPlayer(this);

//设置udpGPS
    //udpcomm->bind(QHostAddress("192.168.1.213"),1111);//绑定自己的IP和端口
    //udp

//serial port
    serial->connectPort(0);

//设置视频传输
//    server->listen(4567);
//    server->setprefix(QByteArray("f1"));

//设置下拉菜单
    QStringList rspeedList={"1","2","3"};
    QStringList fspeedList={"1","2","3","4","5"};
    ui->rspeedBox->addItems(rspeedList);
    ui->fspeedBox->addItems(fspeedList);

//设置按钮
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
    ui->switchButton->setIcon(*starticon);
    ui->switchButton->setIconSize(QSize(50,50));
    //ui->widget->setStyleSheet("background-image: url(:/direct/bg1.png)");

//    m_player = new QMediaPlayer(this);
//    m_videoWidget = new VideoWidget(this);
//    m_videoWidget2 = new VideoWidget(this);
//    m_player->setVideoOutput(m_videoWidget);

//    QBoxLayout *displayLayout = new QHBoxLayout;
//    displayLayout->addWidget(m_videoWidget);
//    displayLayout->addWidget(m_videoWidget2);
//    QBoxLayout *layout = new QVBoxLayout;
//    layout->addLayout(displayLayout);
//    ui->videowidget_1->setLayout(layout);

    infoset = new InfoSets(this);

//设置webchannel
    webchannel->registerObject("pointxy", pointxy);//注册对象
    webchannel->registerObject("infoset", infoset);
    //webchannel->registerObject("mode", mode);
    ui->webView->page()->setWebChannel(webchannel);
//加载地图
    QFile htmlf(QDir::currentPath() + "//gaode.html");
    if (!htmlf.exists())
    {
        qDebug("not exist");
    }
    ui->webView->load(QUrl(QString("file:///"+htmlf.fileName())));
    ui->webView->show();
//    qDebug() << QString("file:///"+htmlf.fileName());//the path of gaode.html

//连接信号
    connect(gpo->gamepad,&QGamepad::buttonUpChanged,this,&MainWindow::on_test_clicked);
    connect(mode,&Mode::modeChange,mode,&Mode::setMode);
    connect(infoset,&InfoSets::uavGps,this,&MainWindow::uav_gps_show);

//    mfplayer->setWindowName("F1");
//    connect(server,&TcpServer::TransCompleted,mfplayer,&FilmPlayer::nextFile);

    outputMessage(QtDebugMsg,"This is a debug message",UAVlog);

//弃用
    //    connect(key,&KeyOperator::directChanged,udpcomm,&UdpComm::sendDirection);
    //不注册是不会交给eventfilter处理的ui->textEdit->installEventFilter(key);
//    ui->manualButton_2->installEventFilter(key);
//    qDebug()<<ui->textEdit->metaObject()->className()<<"!!!";
    //qInstallMessageHandler(outputMessage);
//    qDebug()<<ui->manualButton->objectName();
//    AddTextToEditText(QString::fromLocal8Bit("hapo"));







}

MainWindow::~MainWindow()
{
    delete ui;
    delete mode;
    delete webchannel;
    delete pointxy;
    delete boatspeed;
    delete udpcomm;
    delete mode;
    delete key;
    delete m_player;
//    delete server1;
    delete gpo;
    delete m_videoWidget;
    delete m_videoWidget2;
    delete m_videoWidget3;
    delete m_videoWidget4;
}

void MainWindow::on_showDataButton_clicked()
{
    this->pointxy->showMapPoint();
}

void MainWindow::on_manualButton_clicked()
{
        isManualMode=true;
        QByteArray *msg=new QByteArray("#MOD01");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
        //to-do send
//        udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
        serial->sendData(*msg);
        emit mode->modeChange(ManualMode);
        emit infoset->modeChangeForMap(200);
    //    udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);//测试udp
}

void MainWindow::on_autoButton_clicked()
{
    //航点
    emit mode->modeChange(AutoMode);
    emit infoset->modeChangeForMap(201);
    QByteArray *msg=new QByteArray("#MOD03");
    msg->append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
    serial->sendData(*msg);
//    if(isAutoMode){
//        isAutoMode=false;
//        QByteArray *msg=new QByteArray("#RPGSTOP");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }
//    else {
//        isAutoMode=true;
//        QByteArray *msg=new QByteArray("#RPGSTART");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }


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
//    for (unsigned int i = 0;i < pointxy->map_latitude.size();i++) {
//      第一种拼接方法
//        QByteArray msg("#RPC");//协议头
//        QString str_lon = QString("%1").arg(pointxy->map_latitude.at(i),14,10,9,'0');//按要求填充经度
//        msg.append(str_lon);
//        msg.append(";");
//        QString str_lat = QString("%1").arg(pointxy->map_longtitude.at(i),13,10,9,'0');//按要求填充纬度
//        msg.append(str_lat);
//        msg.append(QByteArray::fromHex("0d0a"));//协议尾
//      第二种拼接方法
//        char str[100];
//        sprintf(str, "#RPG%014.9lf;%013.9lf\r\n", pointxy->map_longtitude.at(i), pointxy->map_latitude.at(i));
//        QByteArray msg(str);
        //发送
//        udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);
//        qDebug() << msg <<endl;
//        qDebug() << msg.toHex() <<endl;
//}

}

void MainWindow::on_disuButton_clicked()
{
//    if(isLowSpeedMode){
//        isLowSpeedMode=false;
//        QByteArray *msg=new QByteArray("#LPGSTOP");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }
//    else {
//        isLowSpeedMode=true;
//        QByteArray *msg=new QByteArray("#LPGSTART");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }
    QByteArray *msg=new QByteArray("#MOD04");
    msg->append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
    serial->sendData(*msg);
    emit mode->modeChange(LowSpeedMode);
    emit infoset->modeChangeForMap(202);
}

void MainWindow::on_stableButton_clicked()
{
//    if(isStableMode){
//        isStableMode=false;
//        QByteArray *msg=new QByteArray("#SPGSTOP");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }
//    else {
//        isStableMode=true;
//        QByteArray *msg=new QByteArray("#SPGSTART");
//        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        //to-do send
//    }
    QByteArray *msg=new QByteArray("#MOD02");
    msg->append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
    serial->sendData(*msg);
    emit mode->modeChange(StableMode);
    emit infoset->modeChangeForMap(203);
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

     //msg.append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);//测试udp
//    qDebug()<<QByteArray("1234");


}





void MainWindow::on_rightButton_clicked()
{
    qDebug()<<"right\n";
}


/*-----------------------方向按钮  目前定义有歧义，没有实现--------------------*/

void MainWindow::on_upButton_clicked()
{
    QByteArray *msg=new QByteArray("#RMT04");
    msg->append(QByteArray::fromHex("0d0a"));//协议尾
    //emit mode->modeChange(StableMode);
}

void MainWindow::on_startButton_clicked()
{
    switch (mode->getModeFlag())
    {
        case AutoMode:
        {

            //航点模式
            for (unsigned int i = 0;i < pointxy->map_latitude.size();i++) {
                char str[100];
                sprintf(str, "#RPG%014.9lf;%013.9lf\r\n", pointxy->map_longtitude.at(i), pointxy->map_latitude.at(i));
                QByteArray msg(str);
//                udpcomm->SendMsg(str,QHostAddress(rongIp),rongPort);
                serial->sendData(msg);
                sleep(500);
            }
            QByteArray msg1("#RPGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
            break;

        }
        case ManualMode:
        {
        break;
        }
        case LowSpeedMode:
        {
            //低速运动模式
            char str[100];
            double BowDirection = ui->boatDir->text().toDouble();//从linedit获取船首向
            sprintf(str, "#LPG%014.9lf;%013.9lf%010.5lf\r\n", pointxy->map_longtitude.at(0), pointxy->map_latitude.at(0),BowDirection);
            QByteArray msg(str);
//            udpcomm->SendMsg(str,QHostAddress(rongIp),rongPort);
            serial->sendData(msg);
            QByteArray msg1("#LPGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
            break;
        }
        case StableMode:
        {
        //定点模式
            char str[100];
            double BowDirection = ui->boatDir->text().toDouble();//从linedit获取船首向
            sprintf(str, "#PG%014.9lf;%013.9lf%010.5lf\r\n", pointxy->map_longtitude.at(0), pointxy->map_latitude.at(0),BowDirection);
            QByteArray msg(str);
//            udpcomm->SendMsg(str,QHostAddress(rongIp),rongPort);
            serial->sendData(msg);
            QByteArray msg1("#PGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
            break;
        }
        case ThrusterPower:
        {
            char str[100];
            sprintf(str, "#PG%04d%04d%04d%04d\r\n",ui->tp1->text().toInt(),ui->tp2->text().toInt(),ui->tp3->text().toInt(),ui->tp4->text().toInt());
            QByteArray msg(str);
            serial->sendData(msg);
            QByteArray msg1("#PGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
        }
    }
}

void MainWindow::sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
void MainWindow::on_test_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    QString str = QString::fromLocal8Bit("123a工");
    ui->textEdit->append(str);

//    //航点模式


//    QByteArray msg("RPGSTART");msg.append(QByteArray::fromHex("0d0a"));



//    QByteArray msg("LPGSTART");msg.append(QByteArray::fromHex("0d0a"));

//    //定点模式
//    char str[100];
//    double BowDirection = ui->XXX->text().toDouble();//从linedit获取船首向
//    sprintf(str, "#PG%014.9lf;%013.9lf%010.5lf\r\n", pointxy->map_longtitude.at(0), pointxy->map_latitude.at(0),BowDirection);
//    QByteArray msg(str);

//    QByteArray msg("PGSTART");msg.append(QByteArray::fromHex("0d0a"));

//    //发送数据
    //    udpcomm->SendMsg(msg,QHostAddress("192.168.1.226"),3456);
}

void MainWindow::uav_gps_show(double x,double y)
{
    QString str,str2;
    str = QString::number(x,'g',9);
    str2 = QString::number(y,'g',9);
    ui->labelUAV_xy->setText(str+','+str2);
}

void MainWindow::AddTextToEditText(QString str)
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->append(str);
}

void MainWindow::on_confirm_1_clicked()
{
    rongIp = ui->rongIp->text();
    rongPort = ui->rongPort->text().toUInt();
}

void MainWindow::on_stopButton_clicked()
{
    switch (mode->getModeFlag())
    {
        case AutoMode:
        {
        QByteArray *msg=new QByteArray("#RPGSTOP");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
        serial->sendData(*msg);
        break;

    }
    case ManualMode:
    {

        break;
    }
    case LowSpeedMode:
    {
        QByteArray *msg=new QByteArray("#LPGSTOP");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
        serial->sendData(*msg);
        break;
    }
    case StableMode:
    {
        QByteArray *msg=new QByteArray("#SPGSTOP");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
        serial->sendData(*msg);
        break;
    }
    case ThrusterPower:
    {
        QByteArray *msg=new QByteArray("#SPGSTOP");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
//        udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
        serial->sendData(*msg);
        break;
    }
    }

}

void MainWindow::on_thrusterpowerset_clicked()
{

}

void MainWindow::on_thrusterpower_clicked()
{
    QByteArray *msg=new QByteArray("#MOD05");
    msg->append(QByteArray::fromHex("0d0a"));//协议尾
//    udpcomm->SendMsg(*msg,QHostAddress(rongIp),rongPort);
    serial->sendData(*msg);
    emit mode->modeChange(ThrusterPower);
    emit infoset->modeChangeForMap(204);
}

