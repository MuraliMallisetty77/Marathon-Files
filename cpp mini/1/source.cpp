#include<iostream>
#include"header.h"
#include<cstring>
Book::Book()
{
    bookId=1;
    strcpy(bookName,"afraid");
    strcpy(authorName,"biswal");
    price=2000;
    numberOfDaysUsed=10;
}

Book::Book(int id, const char *bn, const char *an, int p, int n):
    bookId(id),price(p),numberOfDaysUsed(n)
{
    strcpy(bookName,bn);
    strcpy(authorName,an);
}

Book::~Book()
{
}

int Book::calculateFine()
{
    int fine;
    if(numberOfDaysUsed<10)
    {
        fine=0;
    }
    else if(numberOfDaysUsed>10 && numberOfDaysUsed<=20 )
    {
        fine=100;
    }
    else if(numberOfDaysUsed>20 && numberOfDaysUsed<=30 )
    {
        fine=200;
    }
    else if(numberOfDaysUsed>30 && numberOfDaysUsed<=40 )
    {
        fine=300;
    }
    else
    {
        fine=400;
    }
    return fine;
}

void Book::accept()
{
    std::cout<<"\t\tAccepting details"<<std::endl;
    std::cout<<"Enter Book id:";
    std::cin>>bookId;
    std::cout<<"Enter Book name:";
    std::cin>>bookName;
    std::cout<<"Enter Author name:";
    std::cin>>authorName;
    std::cout<<"Enter price:";
    std::cin>>price;
    std::cout<<"Enter number of days used:";
    std::cin>>numberOfDaysUsed;
    std::cout<<"-----------------------------------------"<<std::endl;
   
}

void Book::display()
{
    std::cout<<"\n-----------------------------------------"<<std::endl;
    std::cout<<"\t\tDisplaying"<<std::endl;
    std::cout<<"\nBook id:"<<bookId;
    std::cout<<"\nBook Name:"<<bookName;
    std::cout<<"\nAuthor Name:"<<authorName;
    std::cout<<"\nPrice:"<<price;
    std::cout<<"\nNumber of days used:"<<numberOfDaysUsed;
    
}