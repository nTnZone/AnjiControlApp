#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWebEngineView *web=new QWebEngineView();

//    web->setUrl(QUrl("http://www.baidu.com"));
//    web->show();

    return a.exec();
}
