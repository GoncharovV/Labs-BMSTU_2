#ifndef FACADEOPERATIONRESULT_H
#define FACADEOPERATIONRESULT_H
#include <iostream>

using namespace std;


class FacadeOperationResult
{
private:

    string _errorMessage;

    bool _isSuccess;

public:
    FacadeOperationResult();

    string GetErrorMessage();

    bool IsSuccess();

};

#endif // FACADEOPERATIONRESULT_H
