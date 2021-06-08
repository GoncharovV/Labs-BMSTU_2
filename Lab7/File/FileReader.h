#ifndef FILEREADER_H
#define FILEREADER_H
#include <vector>

#include "BaseFileReader.h"

using namespace std;

class FileReader : public BaseFileReader
{
public:
    FileReader();

    Scene ReadScene(std::string path, NormalizationParameters np) override;

private:
    void splitString(string str, string* output, string delimiter);

};

#endif // FILEREADER_H
