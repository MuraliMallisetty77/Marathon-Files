#include"DataHandler.h"

std::ostream &operator<<(std::ostream &os, const DataHandler &rhs) {
    os << "_data: " << rhs._data
       << " _size: " << rhs._size;
    return os;
}

DataHandler::DataHandler(const int *data, int size):_size(size)
{
    _data=new int[size];
    for(int i=0;i<size;i++)
    {
        _data[i]=data[i];
    }
}

void DataHandler::FilterData(std::function<bool(int)> fn)
{
    std::cout<<"Numbers divisible by 3:";
    for(int i=0;i<_size;i++)
    {
        if(fn(_data[i]))
        {
            std::cout<<_data[i]<<" ";
        }
    }
    std::cout<<"\n";
}

int DataHandler::FindNthValue(int n)
{
    if(n<0 || n>5)
    {
        throw OutOfBoundException("N is out of range!!!");
    }
    
    return _data[n];
}

std::optional<int> DataHandler::SumOfOdd()
{
    int sum{0};
    for(int i=0;i<_size;i++)
    {
        if(_data[i]%2!=0)
        {
            sum+=_data[i];
        }
    }
    if(sum==0)
    {
        return std::nullopt;
    }
    return sum;
}

int DataHandler::operator+(const DataHandler &d)
{
    int sum{0};
    for(int i=0;i<_size;i++)
    {
        sum+=_data[i]+d._data[i];
    }
    return sum;
}
