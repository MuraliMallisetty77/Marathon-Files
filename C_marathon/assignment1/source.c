#include<stdio.h>
#include"header.h"
void checknum(int n)//this function is used to check num is positive or negative
{
    if(n>0 && n<=30)
    genNumSeq(n);
    else
    {
        printf("enter num again:");scanf("%d",&n);
        checknum(n);
    }
}
void genNumSeq(int n)//this unction is used to print the sequence
{
    int num=3;
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",num);
        num=num*2-1;
    }
}