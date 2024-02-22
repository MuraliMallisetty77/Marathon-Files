#ifndef ODDNUMBERSNOTFOUNDDIVISIBLEBY3_H
#define ODDNUMBERSNOTFOUNDDIVISIBLEBY3_H

#include<iostream>
#include<cstring>

class OddNumberNotFoundDivisibleBy3:public std::exception
{
private:
    char* _msg;
public:
OddNumberNotFoundDivisibleBy3()=delete;
OddNumberNotFoundDivisibleBy3(const OddNumberNotFoundDivisibleBy3& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
OddNumberNotFoundDivisibleBy3& operator=(const OddNumberNotFoundDivisibleBy3& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
     return *this;

}
OddNumberNotFoundDivisibleBy3(OddNumberNotFoundDivisibleBy3&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
OddNumberNotFoundDivisibleBy3& operator=(OddNumberNotFoundDivisibleBy3&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
     return *this;

}
~OddNumberNotFoundDivisibleBy3()
{
    delete _msg;
}

explicit OddNumberNotFoundDivisibleBy3(const char* msg)
{
    _msg=new char[strlen(msg)+1];
    strcpy(_msg,msg);
}

const char* what()
{
    return _msg;
}
};

#endif // ODDNUMBERSNOTFOUNDDIVISIBLEBY3_H
