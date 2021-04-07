#ifndef HANDLER_H
#define HANDLER_H
#include <QMainWindow>
#include <fstream>
#include <QStandardItemModel>

class handler
{
private:
    QString** table;
    struct Record;

public:
    handler();
    static QStandardItemModel* loadData(std::string path, QString* region);
    static void splitString(std::string input, std::string output[]);
    static void setRecord(Record** records, std::string* arr);
};

#endif // HANDLER_H
