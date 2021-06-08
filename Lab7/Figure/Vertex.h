#ifndef VERTEX_H
#define VERTEX_H

#include "SceneObject.h"
#include "Point3d.h"

class Vertex : public SceneObject
{
public:

    Vertex();

    Vertex(Point3D point);

    Point3D getPosition();

    virtual void Transform (TransformMatrix tm) override;

private:
    Point3D _position;
};

#endif // VERTEX_H
