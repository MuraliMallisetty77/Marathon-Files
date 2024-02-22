#include<iostream>
#include"head.h"
#include<string>
#include<cstring>
int compare(User u[])//comapring the department names
{
    int count=0;
    std::cout<<"Enter department name to search:";
    std::string dept;
    std::cin>>dept;
    for(int i=0;i<3;i++)
    {
        if(u[i].getDepartment()==dept)
        {
            u[i].display();
            count++;
        }
    }
    if(count==0)
        throw "No user found";
    return count;

}
int main()
{
    User *u=new User[3];
    for(int i=0;i<3;i++)
    {
        std::cin>>u[i];
    }
    
    try
    {
        int count=compare(u);
        std::cout<<"Total no of people with same department:"<<count;
    }
    catch(const char *msg)
    {
        std::cout<<msg;
    }

    User u1("1hff","Varma","business");
    User u2("24hg","Ravi","business");
    std::cin>>u1;
    std::cin>>u2;
    bool flag=u1==u2;
    if(flag)
        std::cout<<"\nboth objects department are same";
    else
        std::cout<<"\nboth objects department are not same";

    delete []u;

    return 0;
}