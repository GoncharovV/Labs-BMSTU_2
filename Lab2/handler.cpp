#include "handler.h"
#include <QDebug>
#include <vector>
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

    float arr[7];
};

void splitString(string input, string* output);
void setRecord(Record* record, string* arr);

vector<Record> records;

handler::handler() {}

QStandardItemModel* handler::loadData(string path, string region)
{
    file.open(path);

    QStandardItemModel* model = new QStandardItemModel(0, 7);

    string str;

    if (!file) {}
    else
    {
        QModelIndex index = model->index(0, 0);
        int row = 0;
        records.reserve(30);

        string arr[7];

        getline(file,  str); // Dropping table headers

        while (getline(file,  str))
        {
            splitString(str, arr);

            if (arr[1] == region || region == "")
            {
                Record record;
                setRecord(&record, arr);
                records.push_back(record);

                model->appendRow(new QStandardItem(0));

                for (int col = 0; col < 7; col++)
                {
                    index = model->index(row, col);
                    model->setData(index, QString::fromStdString(arr[col]));
                }

                row++;
            }
        }
        records.shrink_to_fit();
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

void setRecord(Record* record, string* arr)
{
    record->year = atoi(arr[0].c_str());
    record->region = arr[1];
    record->npg = atof(arr[2].c_str());
    record->birthRate = atof(arr[3].c_str());
    record->deathRate = atof(arr[4].c_str());
    record->gdw = atof(arr[5].c_str());
    record->urbanization = atof(arr[6].c_str());

    record->arr[0] = atoi(arr[0].c_str());
    record->arr[1] = 0;
    record->arr[2] = atof(arr[2].c_str());
    record->arr[3] = atof(arr[3].c_str());
    record->arr[4] = atof(arr[4].c_str());
    record->arr[5] = atof(arr[5].c_str());
    record->arr[6] = atof(arr[6].c_str());
}


void splitString(string input, string* output)
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

float* handler::calcMatrics(int column)
{
    float* metrics = (float*)malloc(3 * sizeof(float));
    if (records.size() == 0)
    {
        metrics[0] = 0;
        return metrics;
    }
    metrics[0] = records[0].arr[column];
    metrics[1] = records[0].arr[column];
    metrics[2] = records[0].arr[column];
    if (column == 1 || records.size() == 0) return metrics;


    for (int i = 0; i < (int)records.size(); i++)
    {
        metrics[0] = records[i].arr[column] < metrics[0] ? records[i].arr[column] : metrics[0];
        metrics[1] = records[i].arr[column] > metrics[1] ? records[i].arr[column] : metrics[1];
        metrics[2] += records[i].arr[column];
    }

    metrics[2] /= records.size();

    return metrics;
}
