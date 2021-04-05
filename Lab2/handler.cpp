#include "handler.h"

using namespace std;

ifstream file;

handler::handler() {}

QStandardItemModel* handler::loadData(std::string path, QString* region)
{
    file.open(path);

    QModelIndex index;

    QStandardItemModel* model = new QStandardItemModel(1, 7);
    string s;

    if (!file) {}
    else
    {
        index = model->index(0, 0);
        getline(file,  s);
        model->setData(index, QString::fromStdString(s));
    }


    file.close();

    return model;
}
