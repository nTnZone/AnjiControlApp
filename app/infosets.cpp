#include "infosets.h"
//信息集合，即界面上的各种需要回传显示的信息集合
InfoSets::InfoSets(QObject *parent) : QObject(parent)
{
//    udp_gps = new UdpComm();
//    udp_gps->bind(QHostAddress("192.168.1.206"),1111);
//    connect(udp_gps,&UdpComm::Roger,this,&InfoSets::sendGps);
}

void InfoSets::sendGps()
{
//    QList<QByteArray> gpsinfo = udp_gps->msg.split(',');
//    QByteArray a("197.734567,266.825460");
//    if(gpsinfo[0] == QByteArray("#BGPS"))
//    {
//        //船的GPS
//        emit boatGps(gpsinfo[1].toDouble(),gpsinfo[2].toDouble());
//    }
//    else if (gpsinfo[0] == QByteArray("#BSPD")) {
//        //船速
//        emit boatSpeed(gpsinfo[1].toDouble());
//    }
//    else if (gpsinfo[0] == QByteArray("#DGPS")) {
//        //无人机GPS
//        emit uavGps(gpsinfo[1].toDouble(),gpsinfo[2].toDouble());;
//    }
//    qDebug() << udp_gps->msg;

}

