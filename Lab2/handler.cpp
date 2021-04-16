#include "handler.h"
#include "filehandler.h"
#include "metrichandler.h"

#include <QDebug>
#include <vector>
#include <stdlib.h>
#include <QVector>

#define LOAD_DATA 0
#define CALC_METRICS 1

using namespace std;

vector<string>* loadedData;
vector<handler::Record>* records = new vector<handler::Record>;

void splitString(string input, string* output);
void setRecord(handler::Record* record, string* arr);
void setRecords(string region);

handler::handler() {}

handler::Response* handler::execute(handler::Request* request)
{
    handler::Response* response = new handler::Response;
    response->status = 1;

    switch (request->action)
    {
        case LOAD_DATA:
            loadedData = FileHandler::loadData(request->path);

            setRecords(request->region);

            response->records = records;
            break;

        case CALC_METRICS:
            response->metrics = MetricHandler::calcMatrics(records, request->metricColumn);

            if (response->metrics[3] == 0)
                response->status = 0;
            break;
    }

    return response;
}

void setRecord(handler::Record* record, string* arr)
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

void setRecords(string region)
{
    string arr[7];

    for (int i = 0; i < loadedData->size(); i++)
    {
        splitString((*loadedData)[i], arr);

        if (arr[1] == region || region == "")
        {
            handler::Record record;
            setRecord(&record, arr);
            records->push_back(record);
        }
    }
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

void handler::setGraphicVectors(QVector<double> *x, QVector<double> *y, int col)
{
    for (int i = 0; i < records->size(); i++)
    {
        (*x).push_back((*records)[i].year);
        (*y).push_back((*records)[i].arr[col]);
    }
}
