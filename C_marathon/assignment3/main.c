#include<stdio.h>
#include"header.h"
int main()
{
    int n,i,j;
    printf("enter no of candidates:");scanf("%d",&n);
    struct candidate c[n];
    accept(c,n);
    int number=average(c,n);
    int sum=0;
    for(j=0;j<3;j++)
    {
        sum=sum+c[number].scores[j];
    }
    sum=sum/3;
    printf("\nThe selected candidate with the highest average score is candidate %d with an average score of %d",number+1,sum);
    return 0;
}