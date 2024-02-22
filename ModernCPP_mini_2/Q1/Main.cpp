#include"Functionalities.h"

int main()
{
    FnContainer fns{f1,f2,f3};
    Container data{3,9,15,18,24};

    std::cout<<"The sum of odd numbers divisible by 3:"<<f1(data)<<"\n";
    std::cout<<"The lowest even number in conatiner:"<<f2(data)<<"\n";
    std::cout<<"The maximum number in the container:"<<f3(data)<<"\n";

    std::cout<<"perfotm operstions on data"<<"\n";
    PerformOperation(data,fns);
}