#include<iostream>
#include"hospital.h"

Hospital::Hospital()
{
    hospital_id="455gf";
    hospital_name="Yashoda";
    hospital_rating=Good;
}
Hospital::Hospital(std::string id,std::string n,enum Rating r):hospital_id(id),hospital_name(n)
{
    hospital_rating=r;
}

Hospital::~Hospital()
{
}

void Hospital::accept()
{
    std::cout<<"\nEnter hospital id:";
    std::cin>>hospital_id;
    std::cout<<"\nEnter hospital name:";
    std::cin>>hospital_name;
    int n;
    std::cout<<"\nEnter 0-Good,1-Average,2-Poor:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            hospital_rating=Good;
            break;
        case 1:
            hospital_rating=Average;
            break;
        case 2:
            hospital_rating=Poor;
            break;
        default:
            std::cout<<"\nInavlid input";
    }
}

std::ostream &operator<<(std::ostream &os, Hospital &h)
{
   os<<"\nHospital id:"<<h.hospital_id<<" Hospital name:"<<h.hospital_name;
   switch(h.hospital_rating)
   {
        case 0:
            std::cout<<" Hospital rating:Good"; 
            break;
        case 1:
            std::cout<<" Hospital rating:Average"; 
            break;
        case 2:
            std::cout<<" Hospital rating:Poor"; 
            break;
   }
   return os;
}
