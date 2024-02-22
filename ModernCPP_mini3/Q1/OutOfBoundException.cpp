#include "OutOfBoundException.h"

OutOfBoundException::OutOfBoundException(const char *msg)
{
        _msg = new char[strlen(msg)+1];
        strcpy(_msg,msg);
}

const char *OutOfBoundException::what()
{
    return _msg;
}
