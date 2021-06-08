#include "Edge.h"

Edge::Edge(Vertex begin, Vertex end)
{
    this->_begin = begin;
    this->_end = end;
}

Vertex &Edge::getBegin()
{
    return _begin;
}

Vertex &Edge::getEnd()
{
    return _end;
}

