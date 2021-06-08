#ifndef EDGE_H
#define EDGE_H

#include "Vertex.h"

class Edge
{
public:
    Edge(Vertex begin, Vertex end);

    Vertex& getBegin();

    Vertex& getEnd();

private:
    Vertex _begin;
    Vertex _end;
};

#endif // EDGE_H
