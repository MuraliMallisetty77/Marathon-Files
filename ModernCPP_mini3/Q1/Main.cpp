#include"DataHandler.h"
#include<thread>
#include<future>

int main()
{
    int data1[]={1,2,3,4,5};
    int data2[]={6,7,8,9,10};
    DataHandler obj1(data1,5);
    DataHandler obj2(data2,5);

    auto fn=[](int num){return num%3==0;};
    std::future<void> obj1res1=std::async(std::launch::async,&DataHandler::FilterData,&obj1,std::ref(fn));
    obj1res1.get();
    try
    {
        std::future<int> obj1res2=std::async(std::launch::async,&DataHandler::FindNthValue,&obj1,3);
        int n=obj1res2.get();
        std::cout<<"Value at position:"<<n<<"\n";
    }
    catch(OutOfBoundException& o)
    {
        std::cout<<o.what()<<"\n";
    }
    std::future<std::optional<int>> obj1res3=std::async(std::launch::async,&DataHandler::SumOfOdd,&obj1);
    std::optional<int> result1=obj1res3.get();
    if(result1.has_value())
    {
        std::cout<<"sum of odd numbers:"<<result1.value()<<"\n";
    }
    else
    {
        std::cout<<"No odd numbers exist"<<"\n";
    }
    std::cout<<"----------------------------------------"<<"\n";
    std::cout<<"Object2 details"<<"\n";
    std::future<void> obj2res1=std::async(std::launch::async,&DataHandler::FilterData,&obj2,std::ref(fn));
    obj2res1.get();
    try
    {
        std::future<int> obj2res2=std::async(std::launch::async,&DataHandler::FindNthValue,&obj2,2);
        int n=obj2res2.get();
        std::cout<<"Value at position:"<<n<<"\n";
    }
    catch(OutOfBoundException& o)
    {
        std::cout<<o.what()<<"\n";
    }
    std::future<std::optional<int>> obj2res3=std::async(std::launch::async,&DataHandler::SumOfOdd,&obj2);
    std::optional<int> result2=obj2res3.get();
    if(result2.has_value())
    {
        std::cout<<"sum of odd numbers:"<<result2.value()<<"\n";
    }
    else
    {
        std::cout<<"No odd numbers exist"<<"\n";
    }

std::cout<<"---------------------------------------"<<"\n";
    std::future<int> result=std::async(std::launch::async,&DataHandler::operator+,&obj1,obj2);
    int res=result.get();
    std::cout<<"Sum of numbers of two objects are:"<<res<<"\n";

    // int res=obj1+obj2;
    // std::cout<<res;
    return 0;
}