#ifndef KEYOPERATOR_H
#define KEYOPERATOR_H
//#include <QTextEdit>
#include <QObject>
#include <QKeyEvent>
#include <qdebug.h>
#define TEXTEDIT_ISFOCUS 0
class KeyOperator : public QObject
{
    Q_OBJECT
public:
    explicit KeyOperator(QObject *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *);
    void keyReleasedEvent(QKeyEvent *);
protected:
      bool eventFilter(QObject *target, QEvent *event) override;
private:

signals:
    void directChanged(QByteArray qba);
public slots:
};

#endif // KEYOPERATOR_H
