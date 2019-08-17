#ifndef GAMEPADOPERATOR_H
#define GAMEPADOPERATOR_H

#include <QtGamepad>
#include <QObject>

class GamePadOperator : public QObject
{
    Q_OBJECT
public:
    explicit GamePadOperator(QObject *parent = nullptr);
    virtual ~GamePadOperator() {}



public:
    QGamepad *gamepad;
};
#endif // GAMEPADOPERATOR_H
