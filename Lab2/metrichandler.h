#ifndef METRICHANDLER_H
#define METRICHANDLER_H
#include "handler.h"
#include <vector>


class MetricHandler
{
public:
    MetricHandler();

    static float* calcMatrics(std::vector<handler::Record> *data, int column)
    {
        float* metrics = (float*)malloc(4 * sizeof(float));

        if (data->size() == 0)
        {
            metrics[3] = 0;
            return metrics;
        }

        metrics[0] = (*data)[0].arr[column];
        metrics[1] = (*data)[0].arr[column];
        metrics[2] = (*data)[0].arr[column];
        metrics[3] = 1; // Отвечает за корректность рассчетовов

        for (int i = 0; i < (int)data->size(); i++)
        {
            if ((*data)[i].arr[column] == 0) {
                metrics[3] = 0;
                return metrics;
            }

            metrics[0] = (*data)[i].arr[column] < metrics[0] ? (*data)[i].arr[column] : metrics[0];
            metrics[1] = (*data)[i].arr[column] > metrics[1] ? (*data)[i].arr[column] : metrics[1];
            metrics[2] += (*data)[i].arr[column];
        }

        metrics[2] /= data->size();

        return metrics;
    }
};

#endif // METRICHANDLER_H
