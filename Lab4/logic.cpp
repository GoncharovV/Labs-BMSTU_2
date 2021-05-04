#include "logic.h"
#include "filehandler.h"
#include "metrichandler.h"
#include <math.h>

#include <QDebug>

#define SIZE 20

void splitString(string input, string* output);

Point** createMatrix(int rows, int cols);
void freeMatrix(Point** matrix, int rows);

void setPoint(Point* point, float x, float y, float z);
void setPoints(Point** points, int rows, int cols);

void normalize(Point** points, int rows, int cols, float* normalization);
void rotate(Point** points, int rows, int cols, Request* request);
void offset(Point** points, int rows, int cols, Request* request);

void getValues(Point** points, float* x, float* y, float* z, int rows, int cols);


vector<string> *loadedData;

bool loaded = false, drawed = false;
bool matrixCreated = false;

Point** points;

float normalization[2] = {50, 400};

Response* execute(Request* request)
{
    Response* response = new Response;

    switch (request->operation)
    {
        case Operations::LOAD_DATA:
            if (loaded)
            {
                loadedData->clear();
            }

            loadedData = loadData(request->fileName);

            loaded = loadedData->size() != 0;

            if (!loaded)
            {
                response->done = false;
                response->message = "Не удалось загрузить данные";
            }
            break;

        case Operations::FREE_MEMORY:
            freeMatrix(points, SIZE);
            break;

        case Operations::DRAW:
            if (loaded)
            {
                if (matrixCreated)
                    freeMatrix(points, SIZE);

                points = createMatrix(SIZE, SIZE);
                matrixCreated = true;

                setPoints(points, SIZE, SIZE);

                normalize(points, SIZE, SIZE, normalization);

                response->points = points;
            }
            else
            {
                response->done = false;
                response->message = "Данные не загружены";
            }
            break;

        case Operations::ROTATE:
            if (loaded)
            {
                rotate(points, SIZE, SIZE, request);
                normalize(points, SIZE, SIZE, normalization);
                response->points = points;
            }
            else
            {
                response->done = false;
                response->message = "Данные не загружены";
            }
            break;

        case Operations::OFFSET:
            if (loaded)
            {
                offset(points, SIZE, SIZE, request);
                response->points = points;
            }
            else
            {
                response->done = false;
                response->message = "Данные не загружены";
            }
            break;

        case Operations::NORMALIZE:
            normalization[0] = request->normalization[0];
            normalization[1] = request->normalization[1];

            if (loaded)
            {
                normalize(points, SIZE, SIZE, normalization);
                response->points = points;
            }
            else
            {
                response->done = false;
                response->message = "Значения нормализации установлены. Данные не загружены";
            }
            break;
    }

    response->rows = SIZE;
    response->cols = SIZE;

    return response;
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

Point** createMatrix(int rows, int cols)
{
    Point** matrix = new Point* [rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new Point[cols];
    }

    return matrix;
}

void freeMatrix(Point** matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }

    delete matrix;
}

void setPoints(Point** points, int rows, int cols)
{
    string arr[SIZE];

    for (int i = 0; i < rows; i++)
    {
        splitString((*loadedData)[i], arr);

        for (int j = 0; j < cols; j++)
        {
            Point point;
            setPoint(&point, (float)i, (float)j, (float)atof(arr[j].c_str()));

            points[i][j] = point;
        }
    }
}

void setPoint(Point* point, float x, float y, float z)
{
    point->x = x;
    point->y = y;
    point->z = z;
}

void normalize(Point** points, int rows, int cols, float* normalization)
{
    int size = rows * cols;
    float *valuesX = new float[size];
    float *valuesY = new float[size];
    float *valuesZ = new float[size];

    getValues(points, valuesX, valuesY, valuesZ, rows, cols);

    float minX = findMin(valuesX, size), maxX = findMax(valuesX, size);
    float minY = findMin(valuesY, size), maxY = findMax(valuesY, size);
    float minZ = findMin(valuesZ, size), maxZ = findMax(valuesZ, size);

    float a = normalization[0];
    float b = normalization[1];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            points[i][j].x = a + ((points[i][j].x - minX) * (b - a) / (maxX - minX));
            points[i][j].y = a + ((points[i][j].y - minY) * (b - a) / (maxY - minY));
            points[i][j].z = a + ((points[i][j].z - minZ) * (b - a) / (maxZ - minZ));
        }
    }

    delete [] valuesX;
    delete [] valuesY;
    delete [] valuesZ;
}

void rotate(Point** points, int rows, int cols, Request* request)
{
    float angle = request->rotationAngle;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            switch (request->axis)
            {
                case Axis::X:
                    points[i][j].y = points[i][j].y * cos(angle) - points[i][j].z * sin(angle);
                    points[i][j].z = points[i][j].z * cos(angle) + points[i][j].y * sin(angle);
                    break;

                case Axis::Y:
                    points[i][j].x = points[i][j].x * cos(angle) + points[i][j].z * sin(angle);
                    points[i][j].z = points[i][j].z * cos(angle) - points[i][j].x * sin(angle);
                    break;

                case Axis::Z:
                    points[i][j].x = points[i][j].x * cos(angle) - points[i][j].y * sin(angle);
                    points[i][j].y = points[i][j].y * cos(angle) + points[i][j].x * sin(angle);
                    break;
            }
        }
    }
}

void offset(Point** points, int rows, int cols, Request* request)
{
    float offset = request->offsetValue;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            switch (request->axis)
            {
                case Axis::X:
                    points[i][j].x += offset;
                    break;

                case Axis::Y:
                    points[i][j].y += offset;
                    break;

                case Axis::Z:
                    points[i][j].z += offset;
                    break;
            }
        }
    }
}

void getValues(Point** points, float* x, float* y, float* z, int rows, int cols)
{
    int inx = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            x[inx] = points[i][j].x;
            y[inx] = points[i][j].y;
            z[inx] = points[i][j].z;
            inx++;
        }
    }
}
