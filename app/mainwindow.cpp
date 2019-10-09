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
    QStringList fspeedList={"0","1","2","3","4","5"};
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

    connect(mode,&Mode::modeChange,mode,&Mode::setMode);
    connect(infoset,&InfoSets::uavGps,this,&MainWindow::uav_gps_show);
    connect(serial,&SerialComm::Roger,infoset,&InfoSets::sendGps);
    connect(serial,&SerialComm::dataAccept,this,&MainWindow::DisplaySerialData);
    connect(serial,&SerialComm::dataAccept,this,&MainWindow::Handle_serialData);
    connect(gpo,&GamePadOperator::serialsend,this,&MainWindow::GampPadSerialSend);
    connect(gpo,&GamePadOperator::speedchanged,this,&MainWindow::changeSpeedIndex);
    connect(this,&MainWindow::IndexChanged,gpo,&GamePadOperator::fspededchanged);
//    mfplayer->setWindowName("F1");
//    connect(server,&TcpServer::TransCompleted,mfplayer,&FilmPlayer::nextFile);

//    outputMessage(QtDebugMsg,"This is a debug message",UAVlog);

//弃用
    //    connect(key,&KeyOperator::directChanged,udpcomm,&UdpComm::sendDirection);
    //不注册是不会交给eventfilter处理的ui->textEdit->installEventFilter(key);
//    ui->manualButton_2->installEventFilter(key);
//    qDebug()<<ui->textEdit->metaObject()->className()<<"!!!";
    //qInstallMessageHandler(outputMessage);
//    qDebug()<<ui->manualButton->objectName();
//    AddTextToEditText(QString::fromLocal8Bit("hapo"));

//    emit pointxy->BoatGPSChanged(QString::number(116.35158741563555, 10, accuracy),QString::number(39.9148875039067, 10, accuracy));
//    emit pointxy->BoatGPSChanged(QString::number(39.9148875039067, 10, accuracy),QString::number(116.35158741563555, 10, accuracy));
//    emit pointxy->BoatGPSChanged(116,39);
//    emit pointxy->BoatGPSChanged(116.35158741563555,39.9148875039067);
//    emit pointxy->mapCenterChanged("11","9");
//    ui->webView->page()->runJavaScript("addBoatMarker(39.9148875039067,116.35158741563555)");


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
    emit IndexChanged(fspeed.toInt());
}




void MainWindow::on_remark_clicked()
{
    ui->webView->page()->runJavaScript("clearTarget()");//调用JS函数清除所有标记
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

}

void MainWindow::on_startButton_clicked()
{
    if(pointxy->map_latitude.size() == 0 && mode->getModeFlag() != ThrusterPower)
    {
        QMessageBox::information(NULL,"Note","No point on map",QMessageBox::Yes);
    }
    else
    switch (mode->getModeFlag())
    {
        case AutoMode:
        {

            //航点模式
            for (unsigned int i = 0;i < pointxy->map_latitude.size();i++) {
//                char str[100];
//                sprintf(str, "#RPG%014.9lf;%013.9lf\r\n", pointxy->map_longtitude.at(i), pointxy->map_latitude.at(i));
//                QByteArray msg(str);
                QByteArray msg("#RPG");
                msg.append(SynLonLat(pointxy->map_longtitude.at(i),pointxy->map_latitude.at(i)));
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
//            char str[100];
            double BowDirection = ui->boatDir->text().toDouble();//从linedit获取船首向
//            sprintf(str, "#LPG%014.9lf;%013.9lf%010.5lf\r\n", pointxy->map_longtitude.at(0), pointxy->map_latitude.at(0),BowDirection);
//            QByteArray msg(str);
            QByteArray msg("#LPG");
            msg.append(SynLonLatDir(pointxy->map_longtitude.at(0),pointxy->map_latitude.at(0),BowDirection));
            serial->sendData(msg);
            QByteArray msg1("#LPGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
            break;
        }
        case StableMode:
        {
        //定点模式
//            char str[100];
            double BowDirection = ui->boatDir->text().toDouble();//从linedit获取船首向
//            sprintf(str, "#PG%014.9lf;%013.9lf%010.5lf\r\n", pointxy->map_longtitude.at(0), pointxy->map_latitude.at(0),BowDirection);
//            QByteArray msg(str);
            QByteArray msg("#SPG");
            msg.append(SynLonLatDir(pointxy->map_longtitude.at(0),pointxy->map_latitude.at(0),BowDirection));
            serial->sendData(msg);
            QByteArray msg1("#SPGSTART");msg1.append(QByteArray::fromHex("0d0a"));//start
            serial->sendData(msg1);
            break;
        }
        case ThrusterPower:
        {
            char str[100]={0};
            sprintf(str, "#PWM%04d%04d%04d%04d\r\n",ui->tp1->text().toInt(),ui->tp2->text().toInt(),ui->tp3->text().toInt(),ui->tp4->text().toInt());
            QByteArray msg(str);
            serial->sendData(msg);
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
//    ui->textEdit->moveCursor(QTextCursor::End);
//    QString str = QString::fromLocal8Bit("123a工");
//    ui->textEdit->append(str);
    emit pointxy->BoatGPSChanged(116,39);
    emit pointxy->BoatGPSChanged(116.35158741563555,39.9148875039067);
    emit pointxy->AddObstacle(116.35158741563555,39.9148875039067);
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

        serial->sendData(*msg);
        break;
    }
    case StableMode:
    {
        QByteArray *msg=new QByteArray("#SPGSTOP");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾

        serial->sendData(*msg);
        break;
    }
    case ThrusterPower:
    {

        break;
    }
    }

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

void MainWindow::DisplaySerialData(QByteArray data)
{
    ui->textEdit->moveCursor(QTextCursor::End);
//    QString str = QString(data);
//    data.append("sss");
    ui->textEdit->append(data.toHex());
}

void MainWindow::Handle_serialData(QByteArray data)
{
    if(data.left(8) == "#AUVINFO")
    {
        data.remove(0,8);
        Decode_AUVinfo(data.data());
    }
}


void MainWindow::on_SerialSend_clicked()
{
//    QString dataStr = ui->SerialSendBuf->toPlainText();
//    QByteArray dataByte(dataStr);
    serial->sendData(ui->SerialSendBuf->toPlainText().toLatin1().append(QByteArray::fromHex("0d0a")));
}

void MainWindow::GampPadSerialSend(QByteArray data)
{
    serial->sendData(data);
}

QByteArray MainWindow::SynLonLat(double lon,double lat)
{
    char str[100]={0};

    char sgn = 0;

    if(lon>0)
    {

    }
    else
    {
        lon = -lon;
        sgn |= 0x80;
    }
    if(lat>0)
    {

    }
    else
    {
        lat = -lat;
        sgn |= 0x40;
    }

    unsigned char lon_int = (unsigned char)lon;
    unsigned int lon_dec = (unsigned int)((lon - lon_int)*1e7);
    unsigned char lat_int = (unsigned char)lat;
    unsigned int lat_dec = (unsigned int)((lat - lat_int)*1e7);

    str[0] = sgn;
    *(int*)(&str[1]) = lon_int;
    *(int*)(&str[2]) = lon_dec;
    *(int*)(&str[6]) = lat_int;
    *(int*)(&str[7]) = lat_dec;
    QByteArray msg(str,11);
    msg.append(QByteArray::fromHex("0d0a"));

//    qDebug() << lon_int << lon_dec;
//    qDebug() << lat_int << lat_dec;
//    qDebug() << msg.toHex();

    return msg;
}

QByteArray MainWindow::SynLonLatDir(double lon, double lat,double dir)
{
    char str[100]={0};

    char sgn = 0;

    if(lon>0)
    {

    }
    else
    {
        lon = -lon;
        sgn |= 0x80;
    }
    if(lat>0)
    {

    }
    else
    {
        lat = -lat;
        sgn |= 0x40;
    }

    if(dir>0)
    {

    }
    else
    {
        dir = -dir;
        sgn |= 0x20;
    }

    unsigned char lon_int = (unsigned char)lon;
    unsigned int lon_dec = (unsigned int)((lon - lon_int)*1e7);
    unsigned char lat_int = (unsigned char)lat;
    unsigned int lat_dec = (unsigned int)((lat - lat_int)*1e7);
    unsigned char dir_int = (unsigned char)dir;
    unsigned int dir_dec = (unsigned int)((dir - dir_int)*1e7);

    str[0] = sgn;
    *(int*)(&str[1]) = lon_int;
    *(int*)(&str[2]) = lon_dec;
    *(int*)(&str[6]) = lat_int;
    *(int*)(&str[7]) = lat_dec;
    *(int*)(&str[11]) = dir_int;
    *(int*)(&str[12]) = dir_dec;
    QByteArray msg(str,16);
    msg.append(QByteArray::fromHex("0d0a"));

//    qDebug() << lon_int << lon_dec;
//    qDebug() << lat_int << lat_dec;
//    qDebug() << dir_int << dir_dec;
//    qDebug() << msg.toHex();

    return msg;
}

void MainWindow::Decode_AUVinfo(char *data)
{
    unsigned char lon_int;
    int lon_dec;
    unsigned char lat_int;
    int lat_dec;
    unsigned char v_int;
    unsigned char v_dec;
    unsigned char dir_int;
    int dir_dec;
    double lon,lat,v,dir;
    lon_int = *(int*)(&data[1]);
    lon_dec = *(int*)(&data[2]);
    lat_int = *(int*)(&data[6]);
    lat_dec = *(int*)(&data[7]);
    v_int = *(int*)(&data[11]);
    v_dec = *(int*)(&data[12]);
    dir_int = *(int*)(&data[13]);
    dir_dec = *(int*)(&data[14]);

    lon = lon_int + lon_dec/10000000.0;
    lat = lat_int + lat_dec/10000000.0;
    v = v_int + v_dec/100.0;
    dir = dir_int + dir_dec/10000000.0;

    if(data[0] & 0x80)
    {
        lon = -lon;
    }
    if(data[0] & 0x40)
    {
        lat = -lat;
    }
    if(data[0] & 0x20)
    {
        v = -v;
    }
    if(data[0] & 0x10)
    {
        dir = -dir;
    }
    emit infoset->boatGps(lon,lat);
    emit pointxy->BoatGPSChanged(lon,lat);
    ui->boat_dir->setNum(dir);
    ui->boat_v->setNum(v);


}

void MainWindow::changeSpeedIndex(int a)
{
    ui->fspeedBox->setCurrentIndex(a);
}


void MainWindow::on_auvautoButton_toggled(bool checked)
{
    if(checked)
    {
        serial->sendData("MANUALOFF");
    }
    else
    {
        serial->sendData(("MANUALON"));
    }
}
