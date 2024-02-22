#include<iostream>
#include"bike.h"
Bike::Bike()
{
    category=Sports;
}

Bike::Bike(int c, const char * b, double p,int t, double a,enum BIKE_CATEGORY ch):Vehicle(c,b,p,t,a)
{
    category=ch;
}

Bike::~Bike()
{
}

void Bike::accept()
{
    Vehicle::accept();
    int n;
    std::cout<<"\nEnter 0-Commute,1-Sports,2-Offroader:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            category=Commute;
            break;
        case 1:
            category=Sports;
            break;
        case 2:
            category=Offroader;
            break;
        default:
            std::cout<<"\nInvalid input";
    }
}

void Bike::display()
{
    Vehicle::display();
    switch(category)
    {
        case 0:
            std::cout<<" category=Commute";
            break;
        case 1:
            std::cout<<" category=Sports";
            break;
        case 2:
            std::cout<<" category=Offroader";
            break;
    }

}

