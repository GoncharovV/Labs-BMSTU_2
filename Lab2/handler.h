#ifndef HANDLER_H
#define HANDLER_H
#include <QMainWindow>
#include <fstream>
#include <QStandardItemModel>

class handler
{
private:
    QString** table;

public:
    handler();
    static QStandardItemModel* loadData(std::string path, std::string region);
    static float* calcMatrics(int column);
    static void handler::setGraphicVectors(QVector<double> *x, QVector<double> *y, int col);
};

#endif // HANDLER_H
