#include<iostream>
#include"vehicle.h"

Vehicle::Vehicle()
{
    chassisNumber=12675;
    strcpy(brand,"Honda");
    ex_showroomprice=200000;
    insurance_amount=50000;
}

Vehicle::Vehicle(int c, const char *b, double p, int t,double a):
chassisNumber(c),ex_showroomprice(p),tax(t),insurance_amount(a)
{
    strcpy(brand,b);
}

Vehicle::~Vehicle()
{
}

void Vehicle::accept()
{
    std::cout<<"\nEnter chassis Number:";
    std::cin>>chassisNumber;
    std::cout<<"\nEnter brand:";
    std::cin>>brand;
    std::cout<<"\nEnter ex showroom price:";
    std::cin>>ex_showroomprice;
    std::cout<<"\nEnter Insurance amount:";
    std::cin>>insurance_amount;
}

void Vehicle::display()
{
    std::cout<<"\nChassis Number:"<<chassisNumber<<" Brand:"<<brand<<" Ex showroom price:"<<ex_showroomprice<<" Insurance amount:"<<insurance_amount<<std::endl;  
}
