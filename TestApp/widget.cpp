#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //通过这个知道控件信息
    ui->setupUi(this);


}

Widget::~Widget()
{
    delete ui;
}
