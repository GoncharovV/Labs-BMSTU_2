#include "Figure.h"

Figure::Figure() { }

void Figure::addVertex(Vertex vertex)
{
    this->_vertices.push_back(vertex);
}

void Figure::addEdge(Edge edge)
{
    this->_edges.push_back(edge);
}

vector<Vertex> Figure::getVertices()
{
    return _vertices;
}

vector<Edge> Figure::getEdges()
{
    return _edges;
}
