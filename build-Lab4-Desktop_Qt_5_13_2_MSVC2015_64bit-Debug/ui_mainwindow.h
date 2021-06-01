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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *draw_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *fileName_label;
    QHBoxLayout *horizontalLayout;
    QPushButton *fileDialog_bttn;
    QPushButton *fileLoad_bttn;
    QPushButton *draw_bttn;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QTextEdit *offset_x;
    QPushButton *offset_x_bttn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QTextEdit *offset_y;
    QPushButton *offset_y_bttn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QTextEdit *offset_z;
    QPushButton *offset_z_bttn;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QTextEdit *rotation_x;
    QPushButton *rotate_x_bttn;
    QPushButton *rotate_x_back_bttn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QTextEdit *rotation_y;
    QPushButton *rotate_y_bttn;
    QPushButton *rotate_y_back_bttn;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QTextEdit *rotation_z;
    QPushButton *rotate_z_bttn;
    QPushButton *rotate_z_back_bttn;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QPlainTextEdit *normalization_a;
    QLabel *label_11;
    QPlainTextEdit *normalization_b;
    QPushButton *normalization_bttn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1121, 596);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        draw_label = new QLabel(centralwidget);
        draw_label->setObjectName(QString::fromUtf8("draw_label"));
        draw_label->setGeometry(QRect(10, 20, 641, 521));
        draw_label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(750, 40, 281, 478));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fileName_label = new QLabel(verticalLayoutWidget);
        fileName_label->setObjectName(QString::fromUtf8("fileName_label"));
        fileName_label->setWordWrap(true);

        verticalLayout->addWidget(fileName_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileDialog_bttn = new QPushButton(verticalLayoutWidget);
        fileDialog_bttn->setObjectName(QString::fromUtf8("fileDialog_bttn"));
        fileDialog_bttn->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(fileDialog_bttn);

        fileLoad_bttn = new QPushButton(verticalLayoutWidget);
        fileLoad_bttn->setObjectName(QString::fromUtf8("fileLoad_bttn"));
        fileLoad_bttn->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(fileLoad_bttn);


        verticalLayout->addLayout(horizontalLayout);

        draw_bttn = new QPushButton(verticalLayoutWidget);
        draw_bttn->setObjectName(QString::fromUtf8("draw_bttn"));
        draw_bttn->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(draw_bttn);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(15, 0));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        offset_x = new QTextEdit(verticalLayoutWidget);
        offset_x->setObjectName(QString::fromUtf8("offset_x"));
        offset_x->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(offset_x);

        offset_x_bttn = new QPushButton(verticalLayoutWidget);
        offset_x_bttn->setObjectName(QString::fromUtf8("offset_x_bttn"));
        offset_x_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(offset_x_bttn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(15, 0));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        offset_y = new QTextEdit(verticalLayoutWidget);
        offset_y->setObjectName(QString::fromUtf8("offset_y"));
        offset_y->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(offset_y);

        offset_y_bttn = new QPushButton(verticalLayoutWidget);
        offset_y_bttn->setObjectName(QString::fromUtf8("offset_y_bttn"));
        offset_y_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(offset_y_bttn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(15, 0));
        label_6->setMaximumSize(QSize(16777215, 30));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        offset_z = new QTextEdit(verticalLayoutWidget);
        offset_z->setObjectName(QString::fromUtf8("offset_z"));
        offset_z->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(offset_z);

        offset_z_bttn = new QPushButton(verticalLayoutWidget);
        offset_z_bttn->setObjectName(QString::fromUtf8("offset_z_bttn"));
        offset_z_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(offset_z_bttn);


        verticalLayout->addLayout(horizontalLayout_4);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(15, 0));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_8);

        rotation_x = new QTextEdit(verticalLayoutWidget);
        rotation_x->setObjectName(QString::fromUtf8("rotation_x"));
        rotation_x->setMaximumSize(QSize(16777215, 30));
        rotation_x->setFrameShadow(QFrame::Plain);

        horizontalLayout_5->addWidget(rotation_x);

        rotate_x_bttn = new QPushButton(verticalLayoutWidget);
        rotate_x_bttn->setObjectName(QString::fromUtf8("rotate_x_bttn"));
        rotate_x_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(rotate_x_bttn);

        rotate_x_back_bttn = new QPushButton(verticalLayoutWidget);
        rotate_x_back_bttn->setObjectName(QString::fromUtf8("rotate_x_back_bttn"));
        rotate_x_back_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(rotate_x_back_bttn);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(15, 0));
        label_10->setMaximumSize(QSize(16777215, 30));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_10);

        rotation_y = new QTextEdit(verticalLayoutWidget);
        rotation_y->setObjectName(QString::fromUtf8("rotation_y"));
        rotation_y->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_7->addWidget(rotation_y);

        rotate_y_bttn = new QPushButton(verticalLayoutWidget);
        rotate_y_bttn->setObjectName(QString::fromUtf8("rotate_y_bttn"));
        rotate_y_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(rotate_y_bttn);

        rotate_y_back_bttn = new QPushButton(verticalLayoutWidget);
        rotate_y_back_bttn->setObjectName(QString::fromUtf8("rotate_y_back_bttn"));
        rotate_y_back_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(rotate_y_back_bttn);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(15, 0));
        label_9->setMaximumSize(QSize(16777215, 30));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_9);

        rotation_z = new QTextEdit(verticalLayoutWidget);
        rotation_z->setObjectName(QString::fromUtf8("rotation_z"));
        rotation_z->setMaximumSize(QSize(16777215, 30));
        rotation_z->setLayoutDirection(Qt::LeftToRight);
        rotation_z->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(rotation_z);

        rotate_z_bttn = new QPushButton(verticalLayoutWidget);
        rotate_z_bttn->setObjectName(QString::fromUtf8("rotate_z_bttn"));
        rotate_z_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(rotate_z_bttn);

        rotate_z_back_bttn = new QPushButton(verticalLayoutWidget);
        rotate_z_back_bttn->setObjectName(QString::fromUtf8("rotate_z_back_bttn"));
        rotate_z_back_bttn->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(rotate_z_back_bttn);


        verticalLayout->addLayout(horizontalLayout_6);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        normalization_a = new QPlainTextEdit(verticalLayoutWidget);
        normalization_a->setObjectName(QString::fromUtf8("normalization_a"));
        normalization_a->setMinimumSize(QSize(0, 30));
        normalization_a->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_8->addWidget(normalization_a);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        normalization_b = new QPlainTextEdit(verticalLayoutWidget);
        normalization_b->setObjectName(QString::fromUtf8("normalization_b"));
        normalization_b->setMinimumSize(QSize(0, 30));
        normalization_b->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_8->addWidget(normalization_b);


        verticalLayout->addLayout(horizontalLayout_8);

        normalization_bttn = new QPushButton(verticalLayoutWidget);
        normalization_bttn->setObjectName(QString::fromUtf8("normalization_bttn"));
        normalization_bttn->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(normalization_bttn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1121, 21));
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
        draw_label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\260 \320\276\321\202\321\200\320\270\321\201\320\276\320\262\320\272\320\270", nullptr));
        fileName_label->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275", nullptr));
        fileDialog_bttn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        fileLoad_bttn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        draw_bttn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        offset_x->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">10</p></body></html>", nullptr));
        offset_x_bttn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        offset_y->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">10</p></body></html>", nullptr));
        offset_y_bttn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        offset_z_bttn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        rotation_x->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.1</p></body></html>", nullptr));
        rotation_x->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        rotate_x_bttn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\211\320\260\321\202\321\214", nullptr));
        rotate_x_back_bttn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        rotation_y->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.1</p></body></html>", nullptr));
        rotate_y_bttn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\211\320\260\321\202\321\214", nullptr));
        rotate_y_back_bttn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        rotation_z->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.1</p></body></html>", nullptr));
        rotate_z_bttn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\211\320\260\321\202\321\214", nullptr));
        rotate_z_back_bttn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\275\320\276\321\200\320\274\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274:", nullptr));
        normalization_a->setPlainText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274:", nullptr));
        normalization_b->setPlainText(QCoreApplication::translate("MainWindow", "400", nullptr));
        normalization_bttn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\321\200\320\274\320\260\320\273\320\270\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
