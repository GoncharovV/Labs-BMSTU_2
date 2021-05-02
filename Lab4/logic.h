#ifndef LOGIC_H
#define LOGIC_H

#include <vector>
#include <string>

using namespace std;

enum Operations
{
    LOAD_DATA,
    DRAW,
    ROTATE,
    OFFSET,
    NORMALIZE,
    FREE_MEMORY
};

enum Axis
{
    X,
    Y,
    Z
};

struct Point
{
    float x;
    float y;
    float z;
};

struct Request
{
    int operation;
    string fileName;
    Axis axis;
    float rotationAngle;
    float offsetValue;
    float normalization[2];
};

struct Response
{
    bool done = true;
    string message;
    int rows;
    int cols;

    Point** points;
};

Response* execute(Request* request);






#endif // LOGIC_H
