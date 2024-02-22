#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
    int *p,n,i,num,size;
    int a;
    printf("Enter array size:");scanf("%d",&n);
    size=checksize(n);
    p=(int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        printf("Enter elements:");
        scanf("%d",&num);
        int a=checknum(num);
        p[i]=a;
    }
    arraySorting(p,size);
    return 0;
}