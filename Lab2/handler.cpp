#include "handler.h"
#include <QDebug>
#include <stdlib.h>

using namespace std;

ifstream file;

struct Record
{
    int year;
    string region;
    float npg;
    float birthRate;
    float deathRate;
    float gdw;
    float urbanization;
};

Record* records = (Record*)malloc(1 * sizeof(Record));

handler::handler() {}

QStandardItemModel* handler::loadData(std::string path, QString* region)
{
    file.open(path);

    QStandardItemModel* model = new QStandardItemModel(2379, 7);

    string str;

    if (!file) {}
    else
    {
        QModelIndex index = model->index(0, 0);
        int row = 0;

        string arr[7];
        string delimiter = ",";

        int i;
        getline(file,  str);

        while (getline(file,  str))
        {
            // Стар метода сплит стринг
            i = 0;

            size_t pos = 0;
            string part;

            while ((pos = str.find(delimiter)) != string::npos)
            {
                part = str.substr(0, pos);

                arr[i] = part;
                i++;

                str.erase(0, pos + delimiter.length());
            }

            arr[i] = str;
            // Конец метода сплит стринг

            if (true)//QString::fromStdString(arr[1]) == region)
            {


                for (int col = 0; col < 7; col++)
                {
                    index = model->index(row, col);
                    model->setData(index, QString::fromStdString(arr[col]));
                }

                row++;
            }
        }
    }



    file.close();

    model->setHeaderData(0, Qt::Horizontal, "Год");
    model->setHeaderData(1, Qt::Horizontal, "Регион");
    model->setHeaderData(2, Qt::Horizontal, "НПР");
    model->setHeaderData(3, Qt::Horizontal, "Рождаемость");
    model->setHeaderData(4, Qt::Horizontal, "Смертность");
    model->setHeaderData(5, Qt::Horizontal, "ГДВ");
    model->setHeaderData(6, Qt::Horizontal, "Урбанизация");

    return model;
}

void setTableRow(QStandardItemModel* model, Record* record, int row)
{
    QModelIndex index;

    for (int i = 0; i < 7; i++)
    {
        index = model->index(row, 0);
        //model->setData(index, record->)
    }


}

void splitString(string input, string output[7])
{
    string delimiter = ",";
    int i = 0;

    size_t pos = 0;
    string str;

    while ((pos = input.find(delimiter)) != string::npos)
    {
        str = input.substr(0, pos);

        output[i] = str;
        i++;

        input.erase(0, pos + delimiter.length());
    }

    output[i] = input;
}

void setRecord(Record **arr, Record* record, int count)
{
    realloc(*arr, (count + 1) * sizeof(Record));

    (*arr)[count] = *record;
}
