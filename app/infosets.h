#ifndef INFOSETS_H
#define INFOSETS_H
#include <udpcomm.h>
#include <QObject>
//信息集合，即界面上的各种需要回传显示的信息集合
class InfoSets : public QObject
{
    Q_OBJECT
public:
    explicit InfoSets(QObject *parent = nullptr);
    double gps_x;
    double gps_y;
    double speed;
//    UdpComm *udp_gps;
public:
    ~InfoSets()
    {
//        delete udp_gps;
    }
signals:
    void uavGps(double gps_x,double gps_y);
    void boatGps(double gps_x,double gps_y);
    void boatSpeed(double s);
    void modeChangeForMap(int mode);
public slots:
    //一旦udp收到会发送roger信号，然后把新的gps通过槽函数发到webchannel
    void sendGps();
};

#endif // INFOSETS_H
