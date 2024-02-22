#include<iostream>
#include"doctor.h"

Doctor::Doctor()
{
}

Doctor::Doctor(std::string id, std::string n, Rating r, std::string di, std::string dn, std::string ds, std::string rh, float f):
Hospital(id,n,r),doctor_id(di),doctor_name(dn),doctor_specality(ds),registered_hospital_name(rh),doctor_fees(f)
{
}

Doctor::~Doctor()
{
}

void Doctor::accept()
{
    //Hospital::accept();
    std::cout<<"\nEnter doctor id:";
    std::cin>>doctor_id;
    std::cout<<"\nEnter doctor name:";
    std::cin>>doctor_name;
    std::cout<<"\nEnter doctor specality:";
    std::cin>>doctor_specality;
     std::cout<<"\nEnter registered hospital name:";
    std::cin>>registered_hospital_name;
    std::cout<<"\nEnter doctor fee:";
    std::cin>>doctor_fees;
}

void Doctor::calculateTax(Doctor d[],int n)
{
    float max=d[0].getDoctorFees();
    for(int i=1;i<n;i++)
    {
        if(max<d[i].getDoctorFees())
        {
            max=d[i].getDoctorFees();
        }
    }
    float tax=max*(20/100); 
    std::cout<<"\nTax of highest fee doctor is:"<<tax;
}

std::ostream &operator<<(std::ostream &os, Doctor &d)
{
    Hospital h=d;
    os<<d<<"\nDoctor id:"<<d.doctor_id<<" Doctor name:"<<d.doctor_name<<" Doctor specality:"<<d.doctor_specality<<" Registered hospital name:"<<d.registered_hospital_name<<" Doctor fee:"<<d.doctor_fees<<std::endl;
    return os;
    
}
