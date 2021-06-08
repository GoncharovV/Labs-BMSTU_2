#ifndef BASESCENEDRAWER_H
#define BASESCENEDRAWER_H

#include "Scene.h"

class BaseSceneDrawer
{
public:
    BaseSceneDrawer();

    virtual void DrawScene(Scene scene) = 0;
};

#endif // BASESCENEDRAWER_H
