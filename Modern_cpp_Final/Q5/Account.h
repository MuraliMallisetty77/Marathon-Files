#ifndef ACCOUNT_H
#define ACCOUNT_H

#include"Unit.h"
#include<vector>
#include <ostream>

class Account
{
private:
    int accountNumber;
    std::vector<Unit> accountUnits;

public:
//special Member function
    Account()=delete;
    Account(const Account&)=delete;
    Account& operator=(const Account&)=delete;
    Account(Account&&)=delete;
    Account& operator=(Account&&)=delete;
    ~Account()=default;

//Getters and setters
    int getAccountNumber() const { return accountNumber; }
    std::vector<Unit> getAccountUnits() const { return accountUnits; }

//Parameterized Constructor
    Account(int accno,std::vector<Unit> units);

//Member function
    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
 
};

#endif // ACCOUNT_H
