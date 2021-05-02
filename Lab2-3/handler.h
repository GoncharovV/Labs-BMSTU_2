#ifndef HANDLER_H
#define HANDLER_H
#include <QMainWindow>
#include <fstream>
#include <QStandardItemModel>

using namespace std;

class handler
{
public:
    handler();

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

    struct Request {
        int action;
        string path;
        string region;
        int metricColumn;
    };

    struct Response {
        int status;
        vector<Record>* records;
        float* metrics;
    };

    static Response* execute(Request* request);

    static void setGraphicVectors(QVector<double> *x, QVector<double> *y, int col);
};

#endif // HANDLER_H
