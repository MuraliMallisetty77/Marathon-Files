#ifndef EVENNUMBERNOTFOUND_H
#define EVENNUMBERNOTFOUND_H

#include<iostream>
#include<cstring>

class EvenNumberNotFound:public std::exception
{
private:
    char* _msg;
public:
EvenNumberNotFound()=delete;
EvenNumberNotFound(const EvenNumberNotFound& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
EvenNumberNotFound& operator=(const EvenNumberNotFound& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
    return *this;
}
EvenNumberNotFound(EvenNumberNotFound&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
EvenNumberNotFound& operator=(EvenNumberNotFound&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
     return *this;
}
~EvenNumberNotFound()
{
    delete _msg;
}

explicit EvenNumberNotFound(const char* msg)
{
    _msg=new char[strlen(msg)+1];
    strcpy(_msg,msg);
}

const char* what()
{
    return _msg;
}
};

#endif // EVENNUMBERNOTFOUND_H
