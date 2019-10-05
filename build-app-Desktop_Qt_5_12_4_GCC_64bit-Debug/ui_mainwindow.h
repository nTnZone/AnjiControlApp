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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *fspeedBox;
    QLabel *label_10;
    QLineEdit *boatDir;
    QWidget *widget;
    QLabel *label;
    QWidget *widget1;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLabel *labelUAV_xy;
    QLabel *label_4;
    QLabel *boat_v;
    QLabel *label_5;
    QLabel *boat_dir;
    QTextEdit *textEdit;
    QPushButton *test;
    QLineEdit *rongIp;
    QLineEdit *rongPort;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *confirm_1;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *switchButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *autoButton;
    QPushButton *manualButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *disuButton;
    QPushButton *stableButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *thrusterpower;
    QPushButton *remark;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *startButton;
    QPushButton *stopButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *auvautoButton;
    QPushButton *showDataButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget4;
    QFormLayout *formLayout;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *tp1;
    QLineEdit *tp2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *tp3;
    QLineEdit *tp4;
    QTextEdit *SerialSendBuf;
    QPushButton *SerialSend;
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
        webView->setGeometry(QRect(300, 0, 841, 721));
        webView->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 260, 231, 117));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(30);
        formLayout_2->setVerticalSpacing(20);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        fspeedBox = new QComboBox(layoutWidget);
        fspeedBox->setObjectName(QString::fromUtf8("fspeedBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fspeedBox);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        boatDir = new QLineEdit(layoutWidget);
        boatDir->setObjectName(QString::fromUtf8("boatDir"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, boatDir);

        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1160, 20, 481, 281));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/direct/bg2.png);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 81, 21));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 70, 361, 101));
        formLayout_3 = new QFormLayout(widget1);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(20);
        formLayout_3->setVerticalSpacing(15);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        labelUAV_xy = new QLabel(widget1);
        labelUAV_xy->setObjectName(QString::fromUtf8("labelUAV_xy"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, labelUAV_xy);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        boat_v = new QLabel(widget1);
        boat_v->setObjectName(QString::fromUtf8("boat_v"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, boat_v);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_5);

        boat_dir = new QLabel(widget1);
        boat_dir->setObjectName(QString::fromUtf8("boat_dir"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, boat_dir);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1160, 330, 461, 241));
        textEdit->setReadOnly(true);
        textEdit->setAcceptRichText(true);
        test = new QPushButton(tab_2);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(30, 780, 93, 28));
        rongIp = new QLineEdit(tab_2);
        rongIp->setObjectName(QString::fromUtf8("rongIp"));
        rongIp->setGeometry(QRect(670, 740, 113, 21));
        rongPort = new QLineEdit(tab_2);
        rongPort->setObjectName(QString::fromUtf8("rongPort"));
        rongPort->setGeometry(QRect(670, 780, 113, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(590, 740, 71, 20));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(590, 780, 71, 20));
        confirm_1 = new QPushButton(tab_2);
        confirm_1->setObjectName(QString::fromUtf8("confirm_1"));
        confirm_1->setEnabled(true);
        confirm_1->setGeometry(QRect(790, 780, 61, 28));
        confirm_1->setCheckable(false);
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 460, 156, 141));
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
        layoutWidget2->setGeometry(QRect(10, 40, 261, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        autoButton = new QPushButton(layoutWidget2);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));

        horizontalLayout_3->addWidget(autoButton);

        manualButton = new QPushButton(layoutWidget2);
        manualButton->setObjectName(QString::fromUtf8("manualButton"));

        horizontalLayout_3->addWidget(manualButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        disuButton = new QPushButton(layoutWidget2);
        disuButton->setObjectName(QString::fromUtf8("disuButton"));

        horizontalLayout_4->addWidget(disuButton);

        stableButton = new QPushButton(layoutWidget2);
        stableButton->setObjectName(QString::fromUtf8("stableButton"));

        horizontalLayout_4->addWidget(stableButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        thrusterpower = new QPushButton(layoutWidget2);
        thrusterpower->setObjectName(QString::fromUtf8("thrusterpower"));

        horizontalLayout_5->addWidget(thrusterpower);

        remark = new QPushButton(layoutWidget2);
        remark->setObjectName(QString::fromUtf8("remark"));

        horizontalLayout_5->addWidget(remark);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        startButton = new QPushButton(layoutWidget2);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_6->addWidget(startButton);

        stopButton = new QPushButton(layoutWidget2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout_6->addWidget(stopButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(20);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        auvautoButton = new QPushButton(layoutWidget2);
        auvautoButton->setObjectName(QString::fromUtf8("auvautoButton"));
        auvautoButton->setCheckable(true);
        auvautoButton->setFlat(false);

        horizontalLayout_7->addWidget(auvautoButton);

        showDataButton = new QPushButton(layoutWidget2);
        showDataButton->setObjectName(QString::fromUtf8("showDataButton"));

        horizontalLayout_7->addWidget(showDataButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 400, 231, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(20);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);

        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 620, 281, 64));
        formLayout = new QFormLayout(layoutWidget4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tp1 = new QLineEdit(layoutWidget4);
        tp1->setObjectName(QString::fromUtf8("tp1"));

        horizontalLayout->addWidget(tp1);

        tp2 = new QLineEdit(layoutWidget4);
        tp2->setObjectName(QString::fromUtf8("tp2"));

        horizontalLayout->addWidget(tp2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tp3 = new QLineEdit(layoutWidget4);
        tp3->setObjectName(QString::fromUtf8("tp3"));

        horizontalLayout_2->addWidget(tp3);

        tp4 = new QLineEdit(layoutWidget4);
        tp4->setObjectName(QString::fromUtf8("tp4"));

        horizontalLayout_2->addWidget(tp4);


        verticalLayout->addLayout(horizontalLayout_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);

        SerialSendBuf = new QTextEdit(tab_2);
        SerialSendBuf->setObjectName(QString::fromUtf8("SerialSendBuf"));
        SerialSendBuf->setGeometry(QRect(1160, 590, 331, 70));
        SerialSend = new QPushButton(tab_2);
        SerialSend->setObjectName(QString::fromUtf8("SerialSend"));
        SerialSend->setGeometry(QRect(1520, 610, 89, 25));
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
        fspeedBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\211\215\350\241\214\351\200\237\345\272\246", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\350\210\271\351\246\226\345\220\221", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\346\230\276\347\244\272", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\346\234\272\345\235\220\346\240\207", nullptr));
        labelUAV_xy->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\350\210\271\351\200\237\345\272\246", nullptr));
        boat_v->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\350\210\271\346\226\271\345\220\221", nullptr));
        boat_dir->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        test->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\214\211\351\222\256", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "  \344\270\273\346\216\247ip", nullptr));
        label_9->setText(QApplication::translate("MainWindow", " \344\270\273\346\216\247\347\253\257\345\217\243", nullptr));
        confirm_1->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        leftButton->setText(QString());
        rightButton->setText(QString());
        upButton->setText(QString());
        downButton->setText(QString());
        switchButton->setText(QString());
        autoButton->setText(QApplication::translate("MainWindow", "\350\210\252\347\202\271\346\250\241\345\274\217", nullptr));
        manualButton->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\346\250\241\345\274\217", nullptr));
        disuButton->setText(QApplication::translate("MainWindow", "\344\275\216\351\200\237\346\250\241\345\274\217", nullptr));
        stableButton->setText(QApplication::translate("MainWindow", "\347\250\263\345\256\232\346\250\241\345\274\217", nullptr));
        thrusterpower->setText(QApplication::translate("MainWindow", "\346\216\250\350\277\233\345\231\250\350\256\276\347\275\256\346\250\241\345\274\217", nullptr));
        remark->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\247\204\345\210\222", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", nullptr));
        auvautoButton->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\350\210\271\350\207\252\344\270\273\345\274\200\345\205\263", nullptr));
        showDataButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\346\234\272\350\265\267\351\231\215", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\344\274\270\347\274\251\346\236\266\346\224\266\346\224\276", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\346\216\250\350\277\233\345\231\250\345\212\237\347\216\207", nullptr));
        SerialSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\234\260\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\247\206\351\242\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
