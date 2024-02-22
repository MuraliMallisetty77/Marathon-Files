#include<iostream>
#include"head.h"
#include<cstring>

Movie::Movie()
{
    movie_name="Salaar";
    movie_id=2343;
    movie_director="Neel";
    movie_rating='A';
    runtime=170;
    heroName="Prabhas";
    heroineName="Shruthi Hasan";
    seats=80;
}

Movie::Movie(std::string mn, int id, std::string md, char r, int t,std::string hn,std::string hna,int s):
movie_name(mn),movie_id(id),movie_director(md),movie_rating(r),runtime(t),heroName(hn),heroineName(hna),seats(s)
{
}

Movie::~Movie()
{
}

void Movie::accept()
{
    std::cout<<"\nEnter movie name:";
    std::cin>>movie_name;
    std::cout<<"\nEnter movie id:";
    std::cin>>movie_id;
    std::cout<<"\nEnter movie director name:";
    std::cin>>movie_director;
    std::cout<<"\nEnter movie rating 'U'/'R'/'A':";
    std::cin>>movie_rating;
    std::cout<<"\nEnter movie runtime:";
    std::cin>>runtime;
    std::cout<<"\nEnter hero name:";
    std::cin>>heroName;
    std::cout<<"\nEnter heroine name:";
    std::cin>>heroineName;
    std::cout<<"\nEnter no.of seats available:";
    std::cin>>seats;
}

int Movie::ticketPrice()
{
    int price;
    std::cout<<"\nEnter ticket price:";
    std::cin>>price;
    return price;
}

void Movie::display()
{
    std::cout<<"\nMovie name:"<<movie_name<<"\nMovie id:"<<movie_id<<"\nDirector name:"<<movie_director<<"\nRating:"<<movie_rating<<"\nRuntime:"<<runtime<<"\nHero name:"<<heroName<<"\nHeroine name:"<<heroineName<<"\nAvailable seats:"<<seats;
}

