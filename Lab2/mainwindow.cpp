#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "handler.h"
#include <stdlib.h>
#include <qDebug>
#include <QMessageBox>

QString fileName;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel(10, 7, this);

    ui->table->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_fileSelect_bttn_clicked()
{
    fileName = QFileDialog::getOpenFileName(this, "Выберите файл", QDir::currentPath());

    ui->fileName_label->setText(fileName);
}

void MainWindow::on_loadDataButton_clicked()
{
    QString region = ui->regionTextInput->toPlainText();

    if (fileName == "")
    {
        QMessageBox::about(this, "Ошибка", "Файл не выбран!");
        return;
    }

    model = handler::loadData(fileName.toStdString(), region.toStdString());

    ui->table->setModel(model);
}

void MainWindow::on_calcButton_clicked()
{
    int column = atoi(ui->columnNumber_input->toPlainText().toStdString().c_str()) - 1;

    if (column > 0 && column < 8)
    {
       float* metrics = handler::calcMatrics(column);

       ui->label_min->setText(QString::number(metrics[0], 'g', 5));
       ui->label_max->setText(QString::number(metrics[1], 'g', 5));
       ui->label_avg->setText(QString::number(metrics[2], 'g', 5));

       free(metrics);
    }
}
