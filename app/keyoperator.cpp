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
        QByteArray *msg=new QByteArray("#RMT10");
        msg->append(QByteArray::fromHex("0d0a"));//协议尾
        emit directChanged(*msg);
    }
}

bool KeyOperator::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
              QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
              if(keyEvent->key()==Qt::Key_Up)
              {
                  qDebug("Ate key press %d", keyEvent->key());
                  return true;
              }else
              {
                  qDebug("other keyop take it");
                  // standard event processing
                  return QObject::eventFilter(obj, event);
              }
          } else {
              // standard event processing
              return QObject::eventFilter(obj, event);
          }
}
