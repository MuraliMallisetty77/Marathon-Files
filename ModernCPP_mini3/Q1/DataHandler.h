#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include<iostream>
#include<functional>
#include<optional>
#include"OutOfBoundException.h"

class DataHandler
{
private:
    int* _data;
    int _size;
public:
//specila Member functions
   DataHandler()=delete;
   DataHandler(const DataHandler& d)
   {
        _size=d._size;
        _data=new int[_size];
        for(int i=0;i<_size;i++)
        {
            _data[i]=d._data[i];
        }
   }
   DataHandler& operator=(const DataHandler& d)
   {
        _size=d._size;
        _data=new int[_size];
        for(int i=0;i<_size;i++)
        {
            _data[i]=d._data[i];
        }
        return *this;
   }
   DataHandler(DataHandler&& d)
   {
        _size=d._size;
       _data=new int[_size];
        for(int i=0;i<_size;i++)
        {
            _data[i]=d._data[i];
        }
   }
   DataHandler& operator=(DataHandler&& d)
   {
        _size=d._size;
        _data=new int[_size];
        for(int i=0;i<_size;i++)
        {
            _data[i]=d._data[i];
        }
        return *this;
   }
   ~DataHandler()
   {
        delete []_data;
   }

//getters and setters
   int size() const { return _size; }

//parameterized constructor
    DataHandler(const int* data,int size);

//Member functions
    void FilterData(std::function<bool(int)> fn);
    int FindNthValue(int n);
    std::optional<int> SumOfOdd();
    friend std::ostream &operator<<(std::ostream &os, const DataHandler &rhs);
    int operator+(const DataHandler& d);

   
};

#endif // DATAHANDLER_H
