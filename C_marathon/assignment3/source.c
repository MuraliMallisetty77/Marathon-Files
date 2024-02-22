#include<stdio.h>
#include"header.h"
void accept(struct candidate c[],int n)//accepting data from user
{
    int i,j;
    for(i=0;i<n;i++)
    {
        getchar();
        printf("Enter Candidate id:");
        scanf("%d",&c[i].id);
        printf("Scores for candidate %d:",c[i].id);
        for(j=0;j<3;j++)
        scanf("%d",&c[i].scores[j]);
    }

}
int average(struct candidate c1[],int n)//calculating average of each batsmen
{
    int temp=n;
    float avg[temp];
    int i,j;
    int sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+c1[i].scores[j];
        }
        avg[i]=(float)sum/3;
    }
    float max=avg[0];
    for(i=1;i<n;i++)
    {
        if(max<avg[i])
        {
            max=avg[i];
        }
        
    }
   
   for(i=0;i<n;i++)
   {
        if(max==avg[i])
        return i;
   }
   
}