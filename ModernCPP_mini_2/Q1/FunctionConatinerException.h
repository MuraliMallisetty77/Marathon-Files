#ifndef FUNCTIONCONATINEREXCEPTION_H
#define FUNCTIONCONATINEREXCEPTION_H

#include<iostream>
#include<cstring>

class FunctionContainerException:public std::exception
{
private:
    char* _msg;
public:
FunctionContainerException()=delete;
FunctionContainerException(const FunctionContainerException& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
FunctionContainerException& operator=(const FunctionContainerException& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
    return *this;

}
FunctionContainerException(FunctionContainerException&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
FunctionContainerException& operator=(FunctionContainerException&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
    return *this;

}
~FunctionContainerException()
{
    delete _msg;
}

explicit FunctionContainerException(const char* msg)
{
    _msg=new char[strlen(msg)+1];
    strcpy(_msg,msg);
}

const char* what()
{
    return _msg;
}
};

#endif // FUNCTIONCONATINEREXCEPTION_H
