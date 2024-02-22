#include<iostream>
#include"head.h"
void display()
{
    std::cout<<"\n-------------------Menu----------------";
    std::cout<<"\n0.Movie registration";
    std::cout<<"\n1.Movie details";
    std::cout<<"\n2.Book ticket";
    std::cout<<"\n3.Average Price";
    std::cout<<"\n4.Exit";
}
void displayMovieDetails(Movie m[],int n,int id)
{
    int flag=0;
    if(n==0)
    {
        std::cout<<"\nNo movies registered";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(m[i].getmovieId()==id)
            {
                m[i].display();
                flag=1;
                break;
            }
        }
        if(!flag)
            std::cout<<"\nMovie id not found";
    }
}
void bookTickets(Movie m[],int n,int slot,int tickets)
{
    std::string mn;
    std::cout<<"\nEnter movie name to book ticket:";
    std::cin>>mn;
    int slot_seats[n];
    for(int i=0;i<n;i++)
    {
        slot_seats[i]=m[i].getSeats();
    }

    for(int i=0;i<n;i++)
    {
        if((m[i].getmovieName()==mn) && slot==1)
        {
            std::cout<<"\nTickets booked successfully for "<<mn;
            slot_seats[i]=slot_seats[i]-tickets;
        }
        else if((m[i].getmovieName()==mn) && slot==2)
        {
            std::cout<<"\nTickets booked successfully for "<<mn;
            slot_seats[i]=slot_seats[i]-tickets;
        }
        else
        {
            std::cout<<"\nplease check the timings and movie name";
        }
    }
}
void averageTicketPrice(Movie m[],int n,int price[])
{
    std::string mn;
    std::cout<<"\nEnter movie name to check price:";
    std::cin>>mn;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(m[i].getmovieName()==mn)
        {
            std::cout<<price[i];
            flag=1;
            break;
        }
    }
    if(!flag)
        std::cout<<"\nMovie not found";
}

int main()
{
    int n;
    std::cout<<"\nEnter no.of movies:";
    std::cin>>n;
    Movie *m=new Movie[n];
    int movie_count=0;
    while(1)
    {
        display();
        int option;
        std::cout<<"\nEnter option:";
        std::cin>>option;
        switch(option)
        {
            case 0:
                m[movie_count].accept();
                movie_count++;
                break;
            case 1:
                int id;
                std::cout<<"\nEnter movie id to display:";
                std::cin>>id;
                displayMovieDetails(m,movie_count,id);
                break;
            case 2:
                int slot;
                std::cout<<"\nEnter movie slot to book ticket:";
                std::cin>>slot;
                int tickets;
                std::cout<<"\nEnter no.of tickets to book:";
                std::cin>>tickets;
                bookTickets(m,movie_count,slot,tickets);
                break;
            case 3:
                int price[10];
                for(int i=0;i<n;i++)
                {
                    price[i]=m[i].ticketPrice();
                }
                averageTicketPrice(m,movie_count,price);
                break;
            case 4:
                return 0;
                break;
            default:
                std::cout<<"\nInvalid input";

        }
    }


    return 0;
}
