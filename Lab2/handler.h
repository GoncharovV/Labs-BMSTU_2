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
};

#endif // HANDLER_H
