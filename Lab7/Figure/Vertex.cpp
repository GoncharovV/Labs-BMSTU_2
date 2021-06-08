#include "Vertex.h"

Vertex::Vertex(Point3D point)
{
    this->_position = point;
}

Point3D Vertex::getPosition()
{
    return _position;
}
