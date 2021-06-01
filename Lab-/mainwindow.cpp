#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "handler.h"

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

    model = handler::loadData(fileName.toStdString(), &region);

    ui->table->setModel(model);
}
