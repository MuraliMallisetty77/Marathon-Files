#include<iostream>
#include"header.h"
#include<cstring>
void displayMenu()
{
    std::cout<<"\n\t\tLoan Management System"<<std::endl;
    std::cout<<"-------------------------------------------"<<std::endl;
    std::cout<<"\n1.Add record";
    std::cout<<"\n2.Show all records";
    std::cout<<"\n3.Search record";
    std::cout<<"\n4.Count customers having highest loan interest amount";
}

void show(Loan l[],int n)
{
    if(n==0)
    {
        std::cout<<"No records to display"<<std::endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            l[i].printRecord();
        }
    }
}

void searchRecord(Loan l[],int n)
{
    std::cout<<"Enter loan number:";
    int ln;
    std::cin>>ln;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(l[i].getLoanNumber()==ln)
        {
            l[i].printRecord();
            flag=1;
            break;
        }
    }
    if(!flag)
        std::cout<<"Record not found";
}

int countCustomers(Loan l[],int n)
{
    float intamount[n];
    for(int i=0;i<n;i++)
    {
        intamount[i]=l[i].calculateInterest();
    }
    float max=intamount[0];
    for(int i=1;i<n;i++)
    {
        if(max<intamount[i])
            max=intamount[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(intamount[i]==max)
            count++;
    }

    return count;
}

int main()
{
    int n;
    std::cout<<"\nEnter number to allocate memmory for customers:";
    std::cin>>n;
    Loan *l=new Loan[n];
    int amt[n];
    int user=0;
    int maxusers=0;

    while(1)
    {
        displayMenu();
        int option;
        std::cout<<"\nEnter option:";
        std::cin>>option;
        switch(option)
        {
            case 1:
                if(maxusers<=n)
                {
                    l[user].insertRecord();
                    user++;
                    maxusers++;
                }
                else
                {
                    std::cout<<"There is no sufficient memory yo accept details";

                }
                break;
            case 2:
                show(l,user);
                break;
            case 3:
                searchRecord(l,user);
                break;
            case 4:
                std::cout<<"Customers having highest interest amount:"<<countCustomers(l,user);
                break;
            case 5:
                return 0;
        }
    }

    delete []l;
    return 0;
}