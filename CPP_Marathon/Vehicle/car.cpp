#include<iostream>
#include"car.h"

Car::Car()
{
    category=Sedan;
}


Car::Car(int c, const char * b, double p,int t, double a,enum CAR_CATEGORY ch):Vehicle(c,b,p,t,a)
{
    category=ch;
}

Car::~Car()
{
}

void Car::accept()
{
    Vehicle::accept();
    int n;
    std::cout<<"\nEnter 0-SUV,1-HatchBack,2-Sedan:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            category=SUV;
            break;
        case 1:
            category=HatchBack;
            break;
        case 2:
            category=Sedan;
            break;
        default:
            std::cout<<"\nInvalid input";
    }
}

void Car::display()
{
    Vehicle::display();
    switch(category)
    {
        case 0:
            std::cout<<" category=SUV";
            break;
        case 1:
            std::cout<<" category=HatchBack";
            break;
        case 2:
            std::cout<<" category=Sedan";
            break;
    }

}
