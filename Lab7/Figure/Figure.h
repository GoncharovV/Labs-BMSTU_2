#ifndef FIGURE_H
#define FIGURE_H
#include <vector>

#include "SceneObject.h"
#include "Vertex.h"
#include "Edge.h"

using namespace std;

class Figure : public SceneObject
{
public:
    Figure();

    void addVertex(Vertex vertex);

    void addEdge(Edge edge);

    vector<Vertex> getVertices();

    vector<Edge> getEdges();

    virtual void Transform(TransformMatrix tm);

private:
    vector<Vertex> _vertices;

    vector<Edge> _edges;

};

#endif // FIGURE_H
