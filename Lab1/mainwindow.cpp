#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QPlainTextEdit>
#include <QDebug>

int getCountSignsAfter (double num);
QString removeLastSymb(double num);

double nums[2] = { NULL, NULL };
int currentNum = 0;
bool isInteger = true;
QString operationSign = "";
int countSignsAfterDot = 0;
bool zeroPressed = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numBttnProcessor(double num)
{
    if (nums[currentNum] == NULL)
    {
        nums[currentNum] = 0;
    }

    if (isInteger)
    {
        nums[currentNum] *= 10;
        nums[currentNum] += num;
    }
    else
    {
        countSignsAfterDot++;
        nums[currentNum] += num / pow(10, countSignsAfterDot);
    }

    zeroPressed = num == 0;

    if (currentNum == 0 && !isInteger && nums[0] == 0 && zeroPressed)
    {
        ui->textBox->clear();
        ui->textBox->setPlainText("0.");
        for (int i = 0; i < countSignsAfterDot; i++)
        {
            ui->textBox->moveCursor(QTextCursor::End);
            ui->textBox->insertPlainText("0");
        }
        return;
    }

    renderText();
}

void MainWindow::operationBttn()
{
    currentNum = (currentNum + 1) % 2;
    countSignsAfterDot = 0;
    isInteger = true;

    QPushButton *btn = (QPushButton *)sender();
    operationSign = btn->text();

    zeroPressed = false;

    renderText();
}

void btn_sqrt()
{
    nums[0] = sqrt(nums[0]);
}

void MainWindow::renderText()
{
    QString text = QString::number(nums[0], 'g', 15);

    qDebug() << nums[0];

    text += operationSign;

    if (currentNum == 1 && (nums[1] != NULL || zeroPressed))
        text += QString::number(nums[1], 'g', 15);

    if (nums[0] == NULL && !zeroPressed)
        ui->textBox->setPlainText("");
    else
        ui->textBox->setPlainText(text);
}

void MainWindow::on_calcBttn_clicked()
{
    if (operationSign == "+")
    {
        nums[0] = nums[0] + nums[1];
    }
    else if (operationSign == "-")
    {
        nums[0] = nums[0] - nums[1];
    }
    else if (operationSign == "*")
    {
        nums[0] = nums[0] * nums[1];
    }
    else if (operationSign == "/")
    {
        if (nums[1] == 0)
            nums[1] = 1;
        else
            nums[0] = nums[0] / nums[1];
    }

    operationSign = "";
    nums[1] = NULL;
    countSignsAfterDot = 0;
    currentNum = 0;

    renderText();
}

void MainWindow::on_clearBttn_clicked()
{
    nums[0] = NULL;
    nums[1] = NULL;
    operationSign = "";
    countSignsAfterDot = 0;
    isInteger = true;
    currentNum = 0;

    ui->textBox->setPlainText("");
}

void MainWindow::removeNum (int inx)
{
    zeroPressed = false;
    if (nums[inx] == trunc(nums[inx]))
    {
        isInteger = true;
        nums[inx] -= (int)nums[inx] % 10;
        nums[inx] /= 10;

        if (nums[inx] == 0) nums[inx] = NULL;
    }
    else
    {
        QString str = removeLastSymb(nums[inx]);
        nums[inx] = str.toDouble();
    }
}

void MainWindow::on_removeBttn_clicked()
{
    if (nums[1] != NULL || zeroPressed)
    {
        removeNum(1);
    }
    else if (operationSign != "")
    {
        operationSign = "";
    }
    else if (nums[0] != NULL || zeroPressed)
    {
        removeNum(0);
    }

    renderText();
}

int getCountSignsAfter (double num)
{
    int value = QString::number(num - trunc(num), 'g', 15).length() - 2;
    return value > 0? value : 0;
}

QString removeLastSymb(double num)
{
    QString res = "";
    QString val = QString::number(num);

    for (int i = 0; i < val.length() - 1; i++)
    {
        res += val[i];
    }

    return res;
}

void MainWindow::on_dotBttn_clicked()
{
    isInteger = false;
}

void MainWindow::on_numBttn_0_clicked()
{
    numBttnProcessor(0);
}

void MainWindow::on_numBttn_1_clicked()
{
    numBttnProcessor(1);
}

void MainWindow::on_numBttn_2_clicked()
{
    numBttnProcessor(2);
}

void MainWindow::on_numBttn_3_clicked()
{
    numBttnProcessor(3);
}

void MainWindow::on_numBttn_4_clicked()
{
    numBttnProcessor(4);
}

void MainWindow::on_numBttn_5_clicked()
{
    numBttnProcessor(5);
}

void MainWindow::on_numBttn_6_clicked()
{
    numBttnProcessor(6);
}

void MainWindow::on_numBttn_7_clicked()
{
    numBttnProcessor(7);
}

void MainWindow::on_numBttn_8_clicked()
{
    numBttnProcessor(8);
}

void MainWindow::on_numBttn_9_clicked()
{
    numBttnProcessor(9);
}

void MainWindow::on_operationBttn_plus_clicked()
{
    operationBttn();
}

void MainWindow::on_operationBttn_subscract_clicked()
{
    operationBttn();
}

void MainWindow::on_operationBttn_mul_clicked()
{
    operationBttn();
}

void MainWindow::on_operationBttn_divide_clicked()
{
    operationBttn();
}
