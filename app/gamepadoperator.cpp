#include "gamepadoperator.h"

GamePadOperator::GamePadOperator(QObject *parent): QObject(parent)
{
    gamepad = new QGamepad (QGamepadManager::instance()->connectedGamepads().at(0),this);

    connect(gamepad,&QGamepad::buttonUpChanged,this,&GamePadOperator::UpButtonClicked);
    connect(gamepad,&QGamepad::buttonDownChanged,this,&GamePadOperator::DownButtonClicked);
    connect(gamepad,&QGamepad::buttonXChanged,this,&GamePadOperator::LeftButtonClicked);
    connect(gamepad,&QGamepad::buttonBChanged,this,&GamePadOperator::RightButtonClicked);
    connect(gamepad,&QGamepad::buttonR1Changed,this,&GamePadOperator::LevelUpButtonClicked);
    connect(gamepad,&QGamepad::buttonL1Changed,this,&GamePadOperator::LevelDownButtonClicked);
}

void GamePadOperator::UpButtonClicked(bool value)
{

    this->UpDownflag=(int)value;
    char str[30]={0};

    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug(str);
    emit serialsend(str);

    //this->udp->SendMsg(QByteArray(str));
}

void GamePadOperator::DownButtonClicked(bool value)
{
    if(value)
        this->UpDownflag=2;
    else {
        this->UpDownflag=0;
    }
    char str[30]={0};
    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug("%s", str);
    emit serialsend(str);
}

void GamePadOperator::LeftButtonClicked(bool value)
{
    this->XBflag=(int)value;
    char str[30]={0};

    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug(str);
    emit serialsend(str);
}

void GamePadOperator::RightButtonClicked(bool value)
{
    if(value)
        this->XBflag=2;
    else {
        this->XBflag=0;
    }
    char str[30]={0};
    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug(str);
    emit serialsend(str);
}

void GamePadOperator::LevelUpButtonClicked(bool value)
{
    if(value)
        level++;
    if(level>5)
        level=5;
    char str[30]={0};
    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug(str);
    emit serialsend(str);
    emit speedchanged(level);
}

void GamePadOperator::LevelDownButtonClicked(bool value)
{
    if(value)
        level--;
    if(level<0)
        level=0;
    char str[30]={0};
    sprintf(str, "#RMT%d%d%d%02d\r\n",UpDownflag,XBflag,0,level);
//    qDebug(str);
    emit serialsend(str);
    emit speedchanged(level);
}

