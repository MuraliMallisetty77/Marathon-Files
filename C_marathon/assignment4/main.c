#include<stdio.h>
#include"header.h"
int main()
{
    int start,end;
    printf("Enter start value:");scanf("%d",&start);
    printf("Enter end value:");scanf("%d",&end);
    int num1=checknum1(start,end);
    int num2=checknum2(start,end);
    int n=fndMaxFreqDigit(num1,num2);
    printf("the least occuring digit is:%d",n);

    return 0;
}