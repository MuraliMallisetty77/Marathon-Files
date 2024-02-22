#ifndef HEAD_H
#define HEAD_H

#include<iostream>
#include<string>
class User
{
    std::string userId;
    std::string userName;
    std::string department;
    public:
        User();
        User(std::string,std::string,std::string);
        void display();
        friend std::istream& operator>>(std::istream&,User&);
        bool operator==(User&);

        std::string getUserId()  { return userId; }
        void setUserId(const std::string &userId_) { userId = userId_; }

        std::string getUserName()  { return userName; }
        void setUserName(const std::string &userName_) { userName = userName_; }

        std::string getDepartment()  { return department; }
        void setDepartment(const std::string &department_) { department = department_; }
};

#endif // HEAD_H
