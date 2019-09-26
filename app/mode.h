#ifndef MODE_H
#define MODE_H

#include <QObject>

enum NaviMode{ManualMode=200,AutoMode=201,LowSpeedMode=202,StableMode=203,ThrusterPower=204};

class Mode : public QObject
{
    Q_OBJECT
public:
    explicit Mode(QObject *parent = nullptr);
    NaviMode getModeFlag()
    {
        return modeFlag;
    }

signals:
    void modeChange(NaviMode navimode);

public slots:
    void setMode(NaviMode navimode);

private:
    NaviMode modeFlag;
};

#endif // MODE_H
