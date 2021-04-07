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
    static void splitString(std::string input, std::string output[]);
};

#endif // HANDLER_H
