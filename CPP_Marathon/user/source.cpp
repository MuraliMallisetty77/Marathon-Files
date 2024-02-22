#include<iostream>
#include"head.h"
#include<string>
#include<cstring>
User::User()
{
    userId="19fg1";
    userName="Murali11";
    department="finanace";
}

User::User(std::string u, std::string un, std::string d):userId(u),userName(un),department(d)
{
}

void User::display()
{
    std::cout<<"\nUser id:"<<userId<<" Username:"<<userName<<" Deaprtment:"<<department<<std::endl;
}

std::istream &operator>>(std::istream &is, User &u)
{
    std::cout<<"\nEnter user id:";
    is>>u.userId;
    std::cout<<"\nEnter Username:";
    is>>u.userName;
    std::cout<<"\nEnter department:";
    is>>u.department;  
    return is; 
}

bool User::operator==(User &u)
{
   // bool flag=false;
    if(this->getDepartment()==u.department)
        return true;
    return false;
}
