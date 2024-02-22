#include<iostream>
#include"car.h"
#include"bike.h"
#include<cstring>

void getdetails(Vehicle v[],int n)
{
    int chassis;
    std::cout<<"\nEnter Chassis no::";
    std::cin>>chassis;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].getChassisNumber()==chassis)
        {
            v[i].display();
            flag=1;
            break;
        }
    }
    if(!flag)
    std::cout<<"Not found";
}

void carCategory(Car v[],int n)
{
    int count=0;
    std::cout<<"\nEnter category:0-SUV,1-HatchBack,2-Sedan";
    int cat;
    std::cin>>cat;
    for(int i=0;i<n;i++)
    {
        //Car *c=dynamic_cast<Car*>(v);
        if(v[i].getCategory()==cat)
            count++;      
    }
    switch(cat)
    {
        case 0:
            std::cout<<"\nTotal number of vehicles in SUV category:"<<count;
            break;
        case 1:
            std::cout<<"\nTotal number of vehicles in Hatchback category:"<<count;
            break;
        case 2:
            std::cout<<"\nTotal number of vehicles in Sedan category:"<<count;
            break;
    }  
}
void bikeCategory(Bike v[],int n)
{
    int count=0;
    std::cout<<"\nEnter category:0-Commute,1-Sports,2-Sedan";
    int cat;
    std::cin>>cat;
    for(int i=0;i<n;i++)
    {
        //Bike *b=dynamic_cast<Bike*>(v);
        if(v[i].getCategory()==cat)
            count++;      
    }
    switch(cat)
    {
        case 0:
            std::cout<<"\nTotal number of vehicles in Commute category:"<<count;
            break;
        case 1:
            std::cout<<"\nTotal number of vehicles in Sports category:"<<count;
            break;
        case 2:
            std::cout<<"\nTotal number of vehicles in Offroader category:"<<count;
            break;
    }   
}
void carcalavgprice(Car v[], int n)
{
    int count=0;
    std::cout<<"\nEnter category:0-SUV,1-HatchBack,2-Sedan";
    int cat;
    std::cin>>cat;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        // Car *c=dynamic_cast<Car*>(v);
        if(v[i].getCategory()==cat)
        {
            sum=sum+v[i].getexShowroomprice();
            count++;
        }             
    }
    switch(cat)
    {
        case 0:
            std::cout<<"\nTotal number of vehicles in SUV category:"<<(float)sum/count;
            break;
        case 1:
            std::cout<<"\nTotal number of vehicles in Hatchback category:"<<(float)sum/count;
            break;
        case 2:
            std::cout<<"\nTotal number of vehicles in Sedan category:"<<(float)sum/count;
            break;
    }  
}
void bikecalavgprice(Bike v[], int n)
{
    int count=0;
    std::cout<<"\nEnter category:0-Commute,1-Sports,2-Offroader";
    int cat;
    std::cin>>cat;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        //Bike *c=dynamic_cast<Bike*>(v);
        if(v[i].getCategory()==cat)
        {
            sum=sum+v[i].getexShowroomprice();
            count++;
        }             
    }
     switch(cat)
    {
        case 0:
            std::cout<<"\nTotal number of vehicles in Commute category:"<<(float)sum/count;
            break;
        case 1:
            std::cout<<"\nTotal number of vehicles in Sports category:"<<(float)sum/count;
            break;
        case 2:
            std::cout<<"\nTotal number of vehicles in Offroader category:"<<(float)sum/count;
            break;
    }  
   
}
int main()
{
    int n;
    std::cout<<"\nEnter  number of car objects to create:";
    std::cin>>n;
    Car *v=new Car[n];
    for(int i=0;i<n;i++)
    {
        v[i].accept();
    }
    getdetails(v,n);
    carCategory(v,n);
    carcalavgprice(v,n);

    int n1;
    std::cout<<"\nEnter  number of Bike objects to create:";
    std::cin>>n1;
    Bike *v1=new Bike[n1];
    for(int i=0;i<n;i++)
    {
        v1[i].accept();
    }
    getdetails(v1,n);
    bikeCategory(v1,n);
    bikecalavgprice(v1,n);
    delete []v;
    delete []v1;

    return 0;
}
