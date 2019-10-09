#include "mode.h"
#include <QDebug>
Mode::Mode(QObject *parent) : QObject(parent)
{

}

void Mode::setMode(NaviMode navimode)
{
    modeFlag=navimode;

//    if (navimode==200)
//    {
//        qDebug()<<"手动模式"<<200;
//    }
//    else if(navimode==201)
//    {
//        qDebug()<<"auto201";
//    }
//    else if (navimode==202) {
//        qDebug()<<"disu202";
//    }
//    else {
//        qDebug()<<"stable203";
//    }


}
