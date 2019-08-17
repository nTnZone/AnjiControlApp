#include "gamepadoperator.h"

GamePadOperator::GamePadOperator(QObject *parent): QObject(parent)
{
    gamepad = new QGamepad (0,this);
}
