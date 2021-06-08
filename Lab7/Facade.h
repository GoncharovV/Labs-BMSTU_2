#ifndef FACADE_H
#define FACADE_H

#include "File/FileReader.h"
#include "SceneDraw/QtSceneDrawer.h"
#include "Scene.h"
#include "FacadeOperationResult.h"
#include "Transform/TransformMatrix.h"
#include "Transform/TransformMatrixBuilder.h"

class Facade
{
private:
    BaseFileReader* _fileReader = new FileReader();
    BaseSceneDrawer* _sceneDrawer = new QtSceneDrawer();
    Scene _scene;

public:
    Facade();

    FacadeOperationResult DrawScene();

    FacadeOperationResult LoadScene(string path, NormalizationParameters np);

    FacadeOperationResult MoveScene(float x, float y, float z);

    FacadeOperationResult RotateScene(float x, float y, float z);

    FacadeOperationResult ScaleScene(float x, float y, float z);
};

#endif // FACADE_H
