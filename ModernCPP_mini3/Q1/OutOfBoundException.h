#ifndef OUTOFBOUNDEXCEPTION_H
#define OUTOFBOUNDEXCEPTION_H

#include<iostream>
#include<cstring>

class OutOfBoundException:public std::exception
{
private:
    char* _msg;
public:
   OutOfBoundException()=delete;
   OutOfBoundException(const OutOfBoundException& o)
   {
        _msg = new char[strlen(o._msg)+1];
        strcpy(_msg,o._msg);
   }
   OutOfBoundException& operator=(const OutOfBoundException& o)
   {
        _msg = new char[strlen(o._msg)+1];
        strcpy(_msg,o._msg);
        return *this;
   }
   OutOfBoundException(OutOfBoundException&& o)
   {
        _msg = new char[strlen(o._msg)+1];
        strcpy(_msg,o._msg);
   }
   OutOfBoundException& operator=(OutOfBoundException&& o)
   {
        _msg = new char[strlen(o._msg)+1];
        strcpy(_msg,o._msg);
        return *this;
   }
   ~OutOfBoundException()
   {
        delete _msg;
   }

   explicit OutOfBoundException(const char* msg);

   const char* what();
};

#endif // OUTOFBOUNDEXCEPTION_H
