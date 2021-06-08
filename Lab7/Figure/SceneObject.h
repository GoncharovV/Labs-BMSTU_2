#ifndef SCENEOBJECT_H
#define SCENEOBJECT_H

#include "Transform/TransformMatrix.h"

class SceneObject
{
public:
    SceneObject();

    virtual void Transform (TransformMatrix tm) = 0;
};

#endif // SCENEOBJECT_H
