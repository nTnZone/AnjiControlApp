/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWebEngineView *webView;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *autoButton;
    QPushButton *manualButton;
    QPushButton *disuButton;
    QPushButton *stableButton;
    QPushButton *showDataButton;
    QPushButton *remark;
    QPushButton *startButton;
    QPushButton *manualButton_2;
    QPushButton *stopButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *switchButton;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *fspeedBox;
    QLabel *label_7;
    QComboBox *rspeedBox;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelUAV_xy;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *test;
    QLineEdit *rongIp;
    QLineEdit *rongPort;
    QLineEdit *boatDir;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *confirm_1;
    QLabel *label_10;
    QWidget *tab;
    QWidget *videowidget_1;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1679, 918);
        MainWindow->setMinimumSize(QSize(1679, 918));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1661, 871));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        webView = new QWebEngineView(tab_2);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(290, 0, 851, 681));
        webView->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 224, 233));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(30);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(0, 0, 0, 0);
        autoButton = new QPushButton(layoutWidget);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, autoButton);

        manualButton = new QPushButton(layoutWidget);
        manualButton->setObjectName(QString::fromUtf8("manualButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, manualButton);

        disuButton = new QPushButton(layoutWidget);
        disuButton->setObjectName(QString::fromUtf8("disuButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, disuButton);

        stableButton = new QPushButton(layoutWidget);
        stableButton->setObjectName(QString::fromUtf8("stableButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, stableButton);

        showDataButton = new QPushButton(layoutWidget);
        showDataButton->setObjectName(QString::fromUtf8("showDataButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, showDataButton);

        remark = new QPushButton(layoutWidget);
        remark->setObjectName(QString::fromUtf8("remark"));

        formLayout->setWidget(2, QFormLayout::FieldRole, remark);

        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, startButton);

        manualButton_2 = new QPushButton(layoutWidget);
        manualButton_2->setObjectName(QString::fromUtf8("manualButton_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, manualButton_2);

        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, stopButton);

        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 350, 156, 141));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leftButton = new QPushButton(layoutWidget1);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 171, 247);"));

        gridLayout->addWidget(leftButton, 1, 0, 1, 1);

        rightButton = new QPushButton(layoutWidget1);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 171, 247);"));

        gridLayout->addWidget(rightButton, 1, 2, 1, 1);

        upButton = new QPushButton(layoutWidget1);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 171, 247);"));

        gridLayout->addWidget(upButton, 0, 1, 1, 1);

        downButton = new QPushButton(layoutWidget1);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 171, 247);"));

        gridLayout->addWidget(downButton, 2, 1, 1, 1);

        switchButton = new QPushButton(layoutWidget1);
        switchButton->setObjectName(QString::fromUtf8("switchButton"));
        switchButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 171, 247);"));

        gridLayout->addWidget(switchButton, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 260, 179, 74));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(30);
        formLayout_2->setVerticalSpacing(20);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        fspeedBox = new QComboBox(layoutWidget2);
        fspeedBox->setObjectName(QString::fromUtf8("fspeedBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fspeedBox);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        rspeedBox = new QComboBox(layoutWidget2);
        rspeedBox->setObjectName(QString::fromUtf8("rspeedBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, rspeedBox);

        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1160, 20, 481, 281));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/direct/bg2.png);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 81, 21));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 81, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 72, 15));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 150, 72, 15));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 190, 121, 16));
        labelUAV_xy = new QLabel(widget);
        labelUAV_xy->setObjectName(QString::fromUtf8("labelUAV_xy"));
        labelUAV_xy->setGeometry(QRect(180, 70, 251, 21));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 520, 93, 28));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 520, 93, 28));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1170, 410, 461, 241));
        textEdit->setReadOnly(true);
        textEdit->setAcceptRichText(true);
        test = new QPushButton(tab_2);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(170, 670, 93, 28));
        rongIp = new QLineEdit(tab_2);
        rongIp->setObjectName(QString::fromUtf8("rongIp"));
        rongIp->setGeometry(QRect(100, 560, 113, 21));
        rongPort = new QLineEdit(tab_2);
        rongPort->setObjectName(QString::fromUtf8("rongPort"));
        rongPort->setGeometry(QRect(100, 600, 113, 21));
        boatDir = new QLineEdit(tab_2);
        boatDir->setObjectName(QString::fromUtf8("boatDir"));
        boatDir->setGeometry(QRect(100, 630, 113, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 560, 71, 20));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 600, 71, 20));
        confirm_1 = new QPushButton(tab_2);
        confirm_1->setObjectName(QString::fromUtf8("confirm_1"));
        confirm_1->setGeometry(QRect(220, 600, 61, 28));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 630, 61, 20));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        videowidget_1 = new QWidget(tab);
        videowidget_1->setObjectName(QString::fromUtf8("videowidget_1"));
        videowidget_1->setGeometry(QRect(30, 50, 1111, 581));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1679, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        autoButton->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\210\252\350\241\214", nullptr));
        manualButton->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\350\210\252\350\241\214", nullptr));
        disuButton->setText(QApplication::translate("MainWindow", "\344\275\216\351\200\237\346\250\241\345\274\217", nullptr));
        stableButton->setText(QApplication::translate("MainWindow", "\347\250\263\345\256\232\346\250\241\345\274\217", nullptr));
        showDataButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256", nullptr));
        remark->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\247\204\345\210\222", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "start", nullptr));
        manualButton_2->setText(QApplication::translate("MainWindow", "\345\215\225\345\207\273\351\224\256\347\233\230\346\223\215\344\275\234", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", " stop", nullptr));
        leftButton->setText(QString());
        rightButton->setText(QString());
        upButton->setText(QString());
        downButton->setText(QString());
        switchButton->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\345\211\215\350\241\214\351\200\237\345\272\246", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\350\275\254\345\220\221\351\200\237\345\272\246", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\346\230\276\347\244\272", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\346\234\272\345\235\220\346\240\207", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\243\260\345\221\220", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\350\210\271\345\235\220\346\240\207", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "ROV\345\235\220\346\240\207\357\274\210\344\270\215\351\234\200\350\246\201\357\274\211", nullptr));
        labelUAV_xy->setText(QApplication::translate("MainWindow", "x,y", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\346\234\272\350\265\267\351\231\215", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\344\274\270\347\274\251\346\236\266\346\224\266\346\224\276", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        test->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\214\211\351\222\256", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "  \344\270\273\346\216\247ip", nullptr));
        label_9->setText(QApplication::translate("MainWindow", " \344\270\273\346\216\247\347\253\257\345\217\243", nullptr));
        confirm_1->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\350\210\271\351\246\226\345\220\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\234\260\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\247\206\351\242\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
