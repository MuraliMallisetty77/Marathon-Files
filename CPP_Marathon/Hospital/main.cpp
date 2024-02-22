#include<iostream>
#include"doctor.h"
#include<string>

void searcHospital(Doctor d[],int n)
{
    std::cout<<"\nEnter doctor name to search:";
    std::string name;
    std::cin>>name;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(d[i].getDoctorName()==name)
        {
            std::cout<<"\nDoctor practices in:"<<d[i].getregisteredHospitalName();
            flag=1;
            break;
        }
    }
    if(!flag)
        std::cout<<"\nDoctor not found";
}
void findHospitalRating(Hospital h[],int n1)
{
    std::cout<<"\nEnter rating 0-Goog,1-Average,2-Poor:";
    int n;
    std::cin>>n;

    for(int i=0;i<n1;i++)
    {
        if(h[i].gethospitalRating()==n)
        {
            std::cout<<"\nHospital id:"<<h[i].gethospitalId()<<" Hospital name:"<<h[i].gethospitalName();
        }
    }
}
int main()
{
    int n;
    std::cout<<"\nEnter how many hospital details to accept:";
    std::cin>>n;
    Hospital *h=new Hospital[n];
    for(int i=0;i<n;i++)
    {
        h->accept();
    }

    Hospital hospital_arr[n];
    for(int i=0;i<n;i++)
    {
        hospital_arr[i]=h[i];
    }

    int n1;
    std::cout<<"\nEnter how many doctor details to accept:";
    std::cin>>n1;
    Doctor *d=new Doctor[n1];
    for(int i=0;i<n;i++)
    {
        d->accept();
    }

    d->calculateTax(d,n1);
    searcHospital(d,n1);
    findHospitalRating(h,n);

    delete []h;
    delete []d;
    return 0;
}