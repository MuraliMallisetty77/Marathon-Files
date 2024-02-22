#include"Functionalities.h"

FnType f1=[](std::vector<int> data)->int {
    if(data.empty())
    {
        throw EmptyContainerException("Vector is empty!!");
    }

    int sum=0;
    for(int val:data)
    {
        if(val%2!=0)
        {
            if(val%3==0)
            {
                sum+=val;
            }
        }
    }

    if(sum==0)
    {
        throw OddNumberNotFoundDivisibleBy3("odd numbers not found which are divisible by 3!!!");
    }

    return sum;
};

FnType f2=[](std::vector<int> data)->int {
    if(data.empty())
    {
        throw EmptyContainerException("Vector is empty!!");
    }

    int lowest_even{-1};
    for(int val:data)
    {
        if(val%2==0)
        {
            lowest_even=val;
            break;
        }
    }

    for(int val:data)
    {
        if(val%2==0)
        {
            if(val<lowest_even)
            {
                lowest_even=val;
            }
        }
    }
    if(lowest_even==-1)
    {
        throw EvenNumberNotFound("Even number not found!!!");
    }
    return lowest_even;
};

FnType f3=[](std::vector<int> data)->int {
    if(data.empty())
    {
        throw EmptyContainerException("Vector is empty!!");
    }

    int max=data[0];
    
    for(int i=1;i<3;i++)
    {
        if(data[i]>max)
        {
            max=data[i];
        }
    }

    return max;
    
};

void PerformOperation(Container &data, FnContainer &fns)
{
    if(data.empty())
    {
        throw EmptyContainerException("Vector is empty!!");
    }
    if(fns.empty())
    {
        throw FunctionContainerException("Empty function container!!");
    }

    for(FnType& fn:fns)
    {
        std::cout<<fn(data)<<"\n";
    }
}
