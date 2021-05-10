#include "logic.h"
#include "filehandler.h"
#include "drawhandler.h"
#include "metrichandler.h"

#include <QDebug>

#define SIZE 20

void splitString(string input, string* output);
void setPoints(Point** points, int rows, int cols);

vector<string> *loadedData;

bool loaded = false, drawed = false;
bool matrixCreated = false;

Point** points;
Line* lines = new Line[(SIZE - 1) * SIZE * 2];

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
            freePointMatrix(points, SIZE);
            delete [] lines;
            break;

        case Operations::DRAW:
            if (loaded)
            {
                if (matrixCreated)
                    freePointMatrix(points, SIZE);

                points = createPointMatrix(SIZE, SIZE);
                matrixCreated = true;

                setPoints(points, SIZE, SIZE);

                normalize(points, SIZE, SIZE, normalization);

                setLines(points, lines, SIZE, SIZE);

                response->lines = lines;
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
                rotate(points, SIZE, SIZE, request->axis, request->rotationAngle);
                normalize(points, SIZE, SIZE, normalization);
                setLines(points, lines, SIZE, SIZE);

                response->lines = lines;
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
                offset(points, SIZE, SIZE, request->axis, request->offsetValue);
                setLines(points, lines, SIZE, SIZE);

                response->lines = lines;
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
                setLines(points, lines, SIZE, SIZE);

                response->lines = lines;
            }
            else
            {
                response->done = false;
                response->message = "Значения нормализации установлены. Данные не загружены";
            }
            break;
    }

    response->lineCount = (SIZE - 1) * SIZE * 2;

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
