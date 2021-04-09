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

    model = new QStandardItemModel(0, 7, this);

    ui->table->setModel(model);

    ui->widget->xAxis->setRange(1990, 2020);
    ui->widget->yAxis->setRange(0, 50);

    ui->widget->xAxis->setLabel("Год");
    ui->widget->yAxis->setLabel("Значение");

    xLine.push_back(1990);
    xLine.push_back(2019);
    xLine.shrink_to_fit();
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
    on_loadDataButton_clicked();

    int column = atoi(ui->columnNumber_input->toPlainText().toStdString().c_str()) - 1;

    if (column > 1 && column < 7)
    {
       float* metrics = handler::calcMatrics(column);

       if (metrics[3] == 0)
       {
           QMessageBox::about(this, "Ошибка", "Невозможно построить метрику при пустых строках");
           return;
       }

       ui->label_min->setText(QString::number(metrics[0], 'g', 5));
       ui->label_max->setText(QString::number(metrics[1], 'g', 5));
       ui->label_avg->setText(QString::number(metrics[2], 'g', 5));

       drawGaphic(metrics, column);

       free(metrics);
    }
    else
    {
        QMessageBox::about(this, "Ошибка", "Невозможно построить метрику по этой колонке");
        return;
    }
}

void MainWindow::drawGaphic(float* metrics, int col)
{
    xBegin = 1990;
    xEnd = 2020;
    xStep = 1;

    yBegin = metrics[0] * (metrics[0] > 0 ? 0.75 : 1.5);
    yEnd = metrics[1] * (metrics[1] > 0 ? 1.5 : 0.55);

    redPen = new QPen(Qt::red);
    greenPen = new QPen(Qt::green);
    orangePen = new QPen(QColor("orange"));

    ui->widget->clearGraphs();
    ui->widget->clearItems();
    x.clear();
    y.clear();

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);

    handler::setGraphicVectors(&x, &y, col);

    ui->widget->addGraph()->addData(x, y);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 5));

    drawLine(metrics[0], 1, redPen, "Минимум");
    drawLine(metrics[1], 2, greenPen, "Максимум");
    drawLine(metrics[2], 3, orangePen, "Медиана");
}

void MainWindow::drawLine(double yValue, int inx, QPen* pen, QString name)
{
    QVector<double> yLine;

    yLine.push_back(yValue);
    yLine.push_back(yValue);

    ui->widget->addGraph()->setData(xLine, yLine);

    ui->widget->graph(inx)->setPen(*pen);

    QCPItemText *wavePacketText = new QCPItemText(ui->widget);
    wavePacketText->position->setCoords(2018, yValue);
    wavePacketText->setPositionAlignment(Qt::AlignBottom|Qt::AlignHCenter);
    wavePacketText->setText(name);
    wavePacketText->setFont(QFont(font().family(), 8));

    ui->widget->replot();
}


