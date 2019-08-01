#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebEngineWidgets>
#include <QWebEngineView> // HTML页面
#include <QWebChannel>          // C++和JS/HTML双向通信，代替了已淘汰的QtWebFrame的功能
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void getCoordinates(QString lon,QString lat);

private:
    Ui::MainWindow *ui;
<<<<<<< HEAD
=======
    QWebChannel *channel;
>>>>>>> 9eedb056dd29505a69eb03951bbaa5cf8dbfe995
//    QWebEngineView *map_view;
};

#endif // MAINWINDOW_H
