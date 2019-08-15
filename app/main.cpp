#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    //init
//    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    m.show();

    return a.exec();
}
