#include "EmptyContainerException.h"

EmptyContainerException::EmptyContainerException(const char *msg)
{
    _msg = new char[strlen(msg)+1];
        strcpy(_msg,msg);
}

const char *EmptyContainerException::what()
{
    return _msg;
}
