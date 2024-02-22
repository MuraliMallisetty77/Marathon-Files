#include<iostream>
#include"online.h"
#include"offline.h"

int main()
{
    //creating objects for online class;
    int n1;
    std::cout<<"\nEnter number of objects to create for Online class:";
    std::cin>>n1;
    Online *on=new Online[n1];
    for(int i=0;i<n1;i++)
    {
        on[i].accept();
    }

    //creating objects for offline class;
    int n2;
    std::cout<<"\nEnter number of objects to create for Offline class:";
    std::cin>>n2;
    Offline *of=new Offline[n1];
    for(int i=0;i<n2;i++)
    {
        of[i].accept();
    }

    Online onobj[n1];
    for(int i=0;i<n1;i++)
    {
        onobj[i]=on[i];
    }

    Offline offobj[n2];
    for(int i=0;i<n2;i++)
    {
        offobj[i]=of[i];
    }

    for(int i=0;i<n1;i++)//printing online data members 
    {
        onobj[i].display();
    }

    for(int i=0;i<n1;i++)//printing offline data members 
    {
        offobj[i].display();
    }

    //calculating Average marks
    int n;
    std::cout<<"\nEnter n for marks:";
    std::cin>>n;
    int *marks=new int[n];
    std::cout<<"\nEnter marks for "<< n<<":";
    for(int i=0;i<n;i++)
    {
        std::cin>>marks[i];
    }
    Online o;
    o.averageMarks(marks,n);

   
    std::string loc;
    std::cout<<"\nEnter location to change:";
    std::cin>>loc;
    Offline off;
    off.changelocation(loc);


    delete []on;
    delete []of;
    delete []marks;
    return 0;
}