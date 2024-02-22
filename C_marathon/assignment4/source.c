#include<stdio.h>
#include"header.h"
int checknum1(int start,int end)
{
    if(start<0 || start>end|| start>999)
    {
        printf("Reeneter start value:");scanf("%d",&start);
        checknum1(start,end);
    }
    return start;
   
}
int checknum2(int start,int end)
{
    if(end<0 || end<start|| end>999)
    {
        printf("Reeneter end value:");scanf("%d",&end);
        checknum2(start,end);
    }
    return end;
   
}
int fndMaxFreqDigit(int start,int end)
{
    int i;
    int freq[10]={0};
    for(i=start;i<=end;i++)
    {
        int num=i;
        int rem;
        while(num!=0)
        {
            rem=num%10;
            freq[rem]++;
            num/=10;
        }
    }
    int max=freq[0];
    for(i=1;i<=10;i++)
    {
        if(max<freq[i])
        max=freq[i];
    }
    int occ;
    for(i=0;i<=10;i++)
    {
        if(max==freq[i])
        {
            occ=i;
            break;

        }  
    }
    return occ;
}