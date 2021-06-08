#ifndef BASEFILEREADER_H
#define BASEFILEREADER_H
#include <iostream>

#include "Scene.h"
#include "NormalizationParameters.h"


class BaseFileReader
{
public:
    BaseFileReader();

    virtual Scene ReadScene(std::string path, NormalizationParameters np) = 0;
};

#endif // BASEFILEREADER_H
