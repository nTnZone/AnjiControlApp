#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication a(argc, argv);
    MainWindow m;
    //init
//    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    m.show();

    return a.exec();
}
