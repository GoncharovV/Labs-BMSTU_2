#ifndef SCENE_H
#define SCENE_H
#include <vector>

#include "Figure/Figure.h"
#include "Transform/TransformMatrix.h"

using namespace std;

class Scene
{
public:
    Scene();

    void addFigure(Figure figure);

    vector<Figure> getFigures();

    void TransformFigures (TransformMatrix tm);

private:
    vector<Figure> _figures;
};

#endif // SCENE_H
