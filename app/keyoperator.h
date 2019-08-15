#ifndef KEYOPERATOR_H
#define KEYOPERATOR_H

#include <QObject>
#include <QKeyEvent>
class KeyOperator : public QObject
{
    Q_OBJECT
public:
    explicit KeyOperator(QObject *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *);
    void keyReleasedEvent(QKeyEvent *);
protected:
      bool eventFilter(QObject *obj, QEvent *event) override;
private:

signals:
    void directChanged(QByteArray qba);
public slots:
};

#endif // KEYOPERATOR_H
