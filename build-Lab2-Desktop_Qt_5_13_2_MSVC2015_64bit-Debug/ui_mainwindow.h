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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *fileName_label;
    QHBoxLayout *horizontalLayout;
    QPushButton *fileSelect_bttn;
    QVBoxLayout *verticalLayout;
    QPushButton *loadDataButton;
    QLabel *label_2;
    QTextEdit *regionTextInput;
    QLabel *label_5;
    QTextEdit *columnNumber_input;
    QPushButton *calcButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_max;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_min;
    QTableView *table;
    QCustomPlot *widget;
    QLabel *label_4;
    QLabel *label_avg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1037, 809);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(750, 20, 260, 408));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        fileName_label = new QLabel(verticalLayoutWidget_2);
        fileName_label->setObjectName(QString::fromUtf8("fileName_label"));
        fileName_label->setMinimumSize(QSize(0, 40));
        fileName_label->setWordWrap(true);

        verticalLayout_2->addWidget(fileName_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileSelect_bttn = new QPushButton(verticalLayoutWidget_2);
        fileSelect_bttn->setObjectName(QString::fromUtf8("fileSelect_bttn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileSelect_bttn->sizePolicy().hasHeightForWidth());
        fileSelect_bttn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(fileSelect_bttn);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadDataButton = new QPushButton(verticalLayoutWidget_2);
        loadDataButton->setObjectName(QString::fromUtf8("loadDataButton"));
        sizePolicy.setHeightForWidth(loadDataButton->sizePolicy().hasHeightForWidth());
        loadDataButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(loadDataButton);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(label_2);

        regionTextInput = new QTextEdit(verticalLayoutWidget_2);
        regionTextInput->setObjectName(QString::fromUtf8("regionTextInput"));
        regionTextInput->setMinimumSize(QSize(0, 50));
        regionTextInput->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(regionTextInput);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(label_5);

        columnNumber_input = new QTextEdit(verticalLayoutWidget_2);
        columnNumber_input->setObjectName(QString::fromUtf8("columnNumber_input"));
        columnNumber_input->setMinimumSize(QSize(0, 50));
        columnNumber_input->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(columnNumber_input);

        calcButton = new QPushButton(verticalLayoutWidget_2);
        calcButton->setObjectName(QString::fromUtf8("calcButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(17);
        sizePolicy1.setHeightForWidth(calcButton->sizePolicy().hasHeightForWidth());
        calcButton->setSizePolicy(sizePolicy1);
        calcButton->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(calcButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_max = new QLabel(verticalLayoutWidget_2);
        label_max->setObjectName(QString::fromUtf8("label_max"));

        horizontalLayout_2->addWidget(label_max);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_min = new QLabel(verticalLayoutWidget_2);
        label_min->setObjectName(QString::fromUtf8("label_min"));

        horizontalLayout_4->addWidget(label_min);


        verticalLayout_2->addLayout(horizontalLayout_4);

        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(30, 20, 711, 421));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 460, 971, 331));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(750, 440, 125, 14));
        label_avg = new QLabel(centralwidget);
        label_avg->setObjectName(QString::fromUtf8("label_avg"));
        label_avg->setGeometry(QRect(880, 440, 125, 14));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1037, 21));
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
        fileName_label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\221\320\236\320\221\320\220", nullptr));
        fileSelect_bttn->setText(QCoreApplication::translate("MainWindow", "Choose File", nullptr));
        loadDataButton->setText(QCoreApplication::translate("MainWindow", "Download File", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name of the region", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Column number", nullptr));
        calcButton->setText(QCoreApplication::translate("MainWindow", "Calculate metrics", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_max->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_min->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Average", nullptr));
        label_avg->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
