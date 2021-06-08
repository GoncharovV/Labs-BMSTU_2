#include "FileReader.h"

#include <fstream>

#define SIZE 20

FileReader::FileReader()
{

}

Scene FileReader::ReadScene(string path, NormalizationParameters np)
{
    Scene scene;
    Figure figure;

    ifstream file;
    file.open(path);

    string str;

    if (file)
    {
        int i = 0;

        while (getline(file,  str))
        {
            string arr[SIZE];
            splitString(str, arr, ",");

            for (int j = 0; j < SIZE; j++)
            {
                Vertex vertex ( Point3D(i, j, atoi(arr[j].c_str())) );
                figure.addVertex(vertex);
            }

            i++;
        }

        for (int row = 0; row < SIZE; row++)
        {
            for (int col = 0; col < SIZE - 1; col++)
            {
                Edge edge(
                        figure.getVertices()[row * SIZE + col],
                        figure.getVertices()[row * SIZE + col + 1]
                        );
                figure.addEdge(edge);
            }
        }

        for (int row = 0; row < SIZE - 1; row++)
        {
            for (int col = 0; col < SIZE; col++)
            {
                Edge edge(
                        figure.getVertices()[row * SIZE + col],
                        figure.getVertices()[row * (SIZE + 1) + col]
                        );
                figure.addEdge(edge);
            }
        }

        scene.addFigure(figure);
    }
    else
    {

    }

    file.close();

    return scene;
}

void FileReader::splitString(string input, string *output, string delimiter)
{
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
