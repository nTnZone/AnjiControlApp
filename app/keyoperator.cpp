#include "keyoperator.h"

KeyOperator::KeyOperator(QObject *parent) : QObject(parent)
{

}

void KeyOperator::keyPressEvent(QKeyEvent *event)
{
    //对于同时按下两个方向键，我的思路如下：
    //w按下后，没释放，同时d健按下，也没释放，此时同时发送两个指令
    //一旦一个释放后，立即释放停止信号
    if(event->key() == Qt::Key_Up)
    {
        qDebug("keyPressEvent func not eventfilter");
        QByteArray *msg=new QByteArray("#RMT10");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
        emit directChanged(*msg);
    }
}

//谁注册的filter谁就是target
bool KeyOperator::eventFilter(QObject *target, QEvent *event)
{
    //QWidget->metaObject()->className()判断获取到的是哪种类型的控件
    //QTextEdit *textedit=dynamic_cast<QTextEdit*>(target);textedit != NULL判断对象是否有此子类实例
    if (event->type() == QEvent::KeyPress) {
              QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
              //qDebug()<<"current button:"<<target->objectName();
              if(target->objectName()=="manualButton_2")
              {
                  if(keyEvent->key()==Qt::Key_Up)
                  {
                      qDebug("Ate key press %d", keyEvent->key());
                      return true;
                  }
                  else if (keyEvent->key()==Qt::Key_Down)
                  {
                      qDebug("Ate key press %d", keyEvent->key());
                      return true;
                  }
                  else if (keyEvent->key()==Qt::Key_Right)
                  {
                      qDebug("Ate key press %d", keyEvent->key());
                      return true;
                  }
                  else if (keyEvent->key()==Qt::Key_Left)
                  {
                      qDebug("Ate key press %d", keyEvent->key());
                      return true;
                  }

              }
              else
              {
                  qDebug("other keyop take it");
                  // standard event processing
                  return QObject::eventFilter(target, event);
              }
          }
    else {
              // standard event processing
              return QObject::eventFilter(target, event);
          }
}
