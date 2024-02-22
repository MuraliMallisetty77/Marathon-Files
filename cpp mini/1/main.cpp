#include<iostream>
#include"header.h"
#include<cstring>
int main()
{
    int n=3;
    Book *b=new Book[n];
    for(int i=0;i<n;i++)//accepting book details;
    {
        b[i].accept();
    }

    for(int i=0;i<n;i++)//displaying book details;
    {
        b[i].display();
    }

    int fine[n];
    for(int i=0;i<n;i++)//Calculating fine of each book;
    {
        fine[i]=b[i].calculateFine();
    }

    for(int i=0;i<n;i++)//displayinf fine of each book;
    {
        std::cout<<"\nDisplaying fine of book"<<std::endl;
        std::cout<<"Fine for "<<b[i].getBookId()<<" is "<<fine[i]<<std::endl;
    }

    for(int i=0;i<n;i++)//displaying book details whose naem starts with A;
    {
        char bookn[100];
        strcpy(bookn,b[i].getBookName());
        if(bookn[0]=='A')
        {
            b[i].display();
            std::cout<<"\n----------------------------------------"<<std::endl;
        }
        
    }

    for(int i=0;i<n;i++)//displaying book details price less than 25000;
    {
        if(b[i].getPrice()<2500)
        {
            b[i].display();
            std::cout<<"\n----------------------------------------"<<std::endl;
        }
    }

    delete []b;

    return 0;
}