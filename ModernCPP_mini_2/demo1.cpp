#include<iostream>
#include<functional>

int magic(int a,std::string x,int b)
{
    std::cout<<x<<"\n";
    return a+b;
}

int main()
{
    auto f1=std::bind(magic,std::placeholders::_1,"xy",std::placeholders::_2);
    std::cout<<f1(10,20,"by");

}