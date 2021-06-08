#include "Scene.h"

Scene::Scene()
{

}

void Scene::addFigure(Figure figure)
{
    this->_figures.push_back(figure);
}

vector<Figure> Scene::getFigures()
{
    return _figures;
}
