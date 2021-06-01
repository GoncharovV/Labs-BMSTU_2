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
    static QStandardItemModel* loadData(std::string path, QString* region);
};

#endif // HANDLER_H
