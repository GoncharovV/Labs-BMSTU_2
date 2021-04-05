#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_numBttn_0_clicked();

    void on_numBttn_1_clicked();

    void on_numBttn_2_clicked();

    void on_numBttn_3_clicked();

    void on_numBttn_4_clicked();

    void on_numBttn_5_clicked();

    void on_numBttn_6_clicked();

    void on_numBttn_7_clicked();

    void on_numBttn_8_clicked();

    void on_numBttn_9_clicked();

    void numBttnProcessor(double num);

    void operationBttn();

    void on_dotBttn_clicked();

    void on_operationBttn_plus_clicked();

    void on_operationBttn_subscract_clicked();

    void on_operationBttn_mul_clicked();

    void on_operationBttn_divide_clicked();

    void renderText();

    void on_calcBttn_clicked();

    void on_clearBttn_clicked();

    void on_removeBttn_clicked();

    void removeNum(int inx);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
