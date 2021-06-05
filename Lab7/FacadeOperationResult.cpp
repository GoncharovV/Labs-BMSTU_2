#include "FacadeOperationResult.h"

FacadeOperationResult::FacadeOperationResult()
{

}

string FacadeOperationResult::GetErrorMessage()
{
    return _errorMessage;
}

bool FacadeOperationResult::IsSuccess()
{
    return _isSuccess;
}
