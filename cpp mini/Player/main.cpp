#include<iostream>
#include"header.h"
#include<cstring>

int main()
{
    int n[3]={10,20,30};
    int n1[3]={20,50,40};
    Player p(1,"Murali",n);
    Player p1(2,"Ravi",n1);

    bool f=p==p1;//== operator
    if(f)
    {
        std::cout<<"equal";
    }
    else
    std::cout<<"not equal";

    char ch=p[0];//[]operator
    std::cout<<"\ncharacter at index:"<<ch<<std::endl;
    p[0]='V';//changing the character at o index;
    std::cout<<p.getName()<<std::endl;


    bool flag=p<p1;
    if(flag)
        std::cout<<"\np object has lowest scores";
    else
        std::cout<<"\np1 object has lowest scores";

    std::cout<<p1;//<< operator

    return 0;
}