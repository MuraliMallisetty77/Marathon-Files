#include<iostream>
#include"header.h"
#include<cstring>
int Loan::num=1213;
Loan::Loan()
{
    loanNumber=num;
    amount=10000;
    strcpy(name,"Murali");
    interestAmount=2;
}

Loan::Loan(float a, const char *n, float i):amount(a),interestAmount(i)
{
    loanNumber=num;
    num++;
    strcpy(name,n);
}

Loan::~Loan()
{
}

float Loan::calculateInterest()
{
    if(amount<=100000)
    {
        interestAmount=amount*(2/100);
    }
    else if(amount>100000 && amount<=500000)
    {
        interestAmount=amount*(5/100);
    }
    else if(amount>500000 && amount<=1500000)
    {
        interestAmount=amount*(10/100);
    }

    return interestAmount;
}

void Loan::insertRecord()
{
    loanNumber=num;
    num++;
    std::cout<<"Enter amount:";
    std::cin>>amount;
    std::cout<<"Enter name:";
    std::cin>>name;
}

void Loan::printRecord()
{
    std::cout<<"\t\tDisplaying"<<std::endl;
    std::cout<<"\n-----------------------------------------------"<<std::endl;
    std::cout<<"\nLoan Number:"<<loanNumber;
    std::cout<<"\nAmount:"<<amount;
    std::cout<<"\nName:"<<name;
    std::cout<<"\nInterest amount:"<<interestAmount;
}
