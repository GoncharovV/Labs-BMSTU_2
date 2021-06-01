/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *textBox;
    QPushButton *numBttn_1;
    QPushButton *numBttn_2;
    QPushButton *numBttn_3;
    QPushButton *numBttn_4;
    QPushButton *numBttn_5;
    QPushButton *numBttn_6;
    QPushButton *numBttn_7;
    QPushButton *numBttn_8;
    QPushButton *numBttn_9;
    QPushButton *operationBttn_plus;
    QPushButton *operationBttn_subscract;
    QPushButton *operationBttn_mul;
    QPushButton *operationBttn_divide;
    QPushButton *calcBttn;
    QPushButton *dotBttn;
    QPushButton *numBttn_0;
    QPushButton *clearBttn;
    QPushButton *removeBttn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(490, 631);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBox = new QPlainTextEdit(centralwidget);
        textBox->setObjectName(QString::fromUtf8("textBox"));
        textBox->setGeometry(QRect(60, 60, 401, 81));
        numBttn_1 = new QPushButton(centralwidget);
        numBttn_1->setObjectName(QString::fromUtf8("numBttn_1"));
        numBttn_1->setGeometry(QRect(60, 180, 61, 61));
        numBttn_2 = new QPushButton(centralwidget);
        numBttn_2->setObjectName(QString::fromUtf8("numBttn_2"));
        numBttn_2->setGeometry(QRect(140, 180, 61, 61));
        numBttn_3 = new QPushButton(centralwidget);
        numBttn_3->setObjectName(QString::fromUtf8("numBttn_3"));
        numBttn_3->setGeometry(QRect(220, 180, 61, 61));
        numBttn_4 = new QPushButton(centralwidget);
        numBttn_4->setObjectName(QString::fromUtf8("numBttn_4"));
        numBttn_4->setGeometry(QRect(60, 260, 61, 61));
        numBttn_5 = new QPushButton(centralwidget);
        numBttn_5->setObjectName(QString::fromUtf8("numBttn_5"));
        numBttn_5->setGeometry(QRect(140, 260, 61, 61));
        numBttn_6 = new QPushButton(centralwidget);
        numBttn_6->setObjectName(QString::fromUtf8("numBttn_6"));
        numBttn_6->setGeometry(QRect(220, 260, 61, 61));
        numBttn_7 = new QPushButton(centralwidget);
        numBttn_7->setObjectName(QString::fromUtf8("numBttn_7"));
        numBttn_7->setGeometry(QRect(60, 340, 61, 61));
        numBttn_8 = new QPushButton(centralwidget);
        numBttn_8->setObjectName(QString::fromUtf8("numBttn_8"));
        numBttn_8->setGeometry(QRect(140, 340, 61, 61));
        numBttn_9 = new QPushButton(centralwidget);
        numBttn_9->setObjectName(QString::fromUtf8("numBttn_9"));
        numBttn_9->setGeometry(QRect(220, 340, 61, 61));
        operationBttn_plus = new QPushButton(centralwidget);
        operationBttn_plus->setObjectName(QString::fromUtf8("operationBttn_plus"));
        operationBttn_plus->setGeometry(QRect(310, 180, 51, 51));
        operationBttn_subscract = new QPushButton(centralwidget);
        operationBttn_subscract->setObjectName(QString::fromUtf8("operationBttn_subscract"));
        operationBttn_subscract->setGeometry(QRect(310, 240, 51, 51));
        operationBttn_mul = new QPushButton(centralwidget);
        operationBttn_mul->setObjectName(QString::fromUtf8("operationBttn_mul"));
        operationBttn_mul->setGeometry(QRect(310, 300, 51, 51));
        operationBttn_divide = new QPushButton(centralwidget);
        operationBttn_divide->setObjectName(QString::fromUtf8("operationBttn_divide"));
        operationBttn_divide->setGeometry(QRect(310, 360, 51, 41));
        calcBttn = new QPushButton(centralwidget);
        calcBttn->setObjectName(QString::fromUtf8("calcBttn"));
        calcBttn->setGeometry(QRect(210, 420, 151, 61));
        dotBttn = new QPushButton(centralwidget);
        dotBttn->setObjectName(QString::fromUtf8("dotBttn"));
        dotBttn->setGeometry(QRect(140, 420, 61, 61));
        numBttn_0 = new QPushButton(centralwidget);
        numBttn_0->setObjectName(QString::fromUtf8("numBttn_0"));
        numBttn_0->setGeometry(QRect(60, 420, 61, 61));
        clearBttn = new QPushButton(centralwidget);
        clearBttn->setObjectName(QString::fromUtf8("clearBttn"));
        clearBttn->setGeometry(QRect(370, 180, 71, 51));
        removeBttn = new QPushButton(centralwidget);
        removeBttn->setObjectName(QString::fromUtf8("removeBttn"));
        removeBttn->setGeometry(QRect(370, 240, 71, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        numBttn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        numBttn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        numBttn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        numBttn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        numBttn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        numBttn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        numBttn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        numBttn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        numBttn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        operationBttn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        operationBttn_subscract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        operationBttn_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        operationBttn_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        calcBttn->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        dotBttn->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        numBttn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clearBttn->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        removeBttn->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
