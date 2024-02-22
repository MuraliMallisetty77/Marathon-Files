#include<iostream>
#include"header.h"
#include<cstring>

Player::Player()
{
    playerid=1;
    pname=new char[20];
    strcpy(pname,"Murali");
    int n[3]={10,30,40};
    for(int i=0;i<3;i++)
    {
        score[i]=n[i];
    }
}

Player::Player(int id, const char *n, int s[]):playerid(id)
{
    pname=new char[strlen(n)+1];
    strcpy(pname,n);
    for(int i=0;i<3;i++)
    {
        score[i]=s[i];
    }
}

Player::~Player()
{
    delete pname;
}

Player::Player(Player &p)
{
    playerid=p.playerid;
    pname=new char[strlen(p.pname)+1];
    strcpy(pname,p.pname);
}

void Player::accept()
{
    std::cout<<"Enter player id:";
    std::cin>>playerid;
    std::cout<<"Enter player name:";
    char temp[100];
    std::cin>>temp;
    pname=new char[strlen(temp)+1];
    strcpy(pname,temp);
}

void Player::display()
{
    std::cout<<"\nPlayer id:"<<playerid;
    std::cout<<"\nPlayer name:"<<pname;
    std::cout<<"\nscores:";
    for(int i=0;i<3;i++)
    {
        std::cout<<score[i]<<" ";
    }
}

float Player::calaculateAverageScore()
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum=sum+score[i];
    }
    return sum/3.0f;
}

bool Player::operator==(Player &p)//== operator overlaoding
{
    bool flag=false;
    if(strcmp(pname,p.pname)==0)
        flag=true;
    return flag;
}

char& Player::operator[](int n)//[] operator overloading
{
    return pname[n];   
}

bool Player::operator<(Player &p)
{
    bool flag=false;
    if(calaculateAverageScore()<p.calaculateAverageScore())
        flag=true;

    return flag;    
}

std::ostream& operator<< (std::ostream &os,Player &p)//<< operator overlaoding
{
    p.display();
    return os;

}
