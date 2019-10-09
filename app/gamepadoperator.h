#ifndef GAMEPADOPERATOR_H
#define GAMEPADOPERATOR_H
#include <udpcomm.h>
#include <QtGamepad>
#include <QObject>
#include <stdio.h>

class GamePadOperator : public QObject
{
    Q_OBJECT
public:
    explicit GamePadOperator(QObject *parent = nullptr);
    virtual ~GamePadOperator() {
//        delete gamepad;
//        delete udp;
    }

private:
    //left

    int Yflag=0;
    int Aflag=0;
    //left&right
    int XBflag=0;
    int UpDownflag=0;
    int Leftflag=0;
    int level=0;

signals:
    void serialsend(QByteArray data);
    void speedchanged(int a);
public    slots:
    void UpButtonClicked(bool value);
    void DownButtonClicked(bool value);
    void LeftButtonClicked(bool value);
    void RightButtonClicked(bool value);
    void LevelUpButtonClicked(bool value);
    void LevelDownButtonClicked(bool value);
    void fspededchanged(int i);
public:
    QGamepad *gamepad;
//    UdpComm *udp;
};
#endif // GAMEPADOPERATOR_H
