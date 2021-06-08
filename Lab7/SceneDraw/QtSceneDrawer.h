#ifndef QTSCENEDRAWER_H
#define QTSCENEDRAWER_H

#include "BaseSceneDrawer.h"

class QtSceneDrawer : public BaseSceneDrawer
{
public:
    QtSceneDrawer();

    void DrawScene(Scene scene) override;
};

#endif // QTSCENEDRAWER_H
