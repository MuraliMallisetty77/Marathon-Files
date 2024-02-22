#include<stdio.h>
#include"header.h"
int checksize(int n)//checking the size
{
    if(n>50)
    {
        printf("enter size again:");scanf("%d",&n);
        checksize(n);
    }
    return n;
}
int checknum(int n)//checking the array element positive or negative
{
    if(n<=0)
    {
        printf("enter number again:");scanf("%d",&n);
        checknum(n);
    }
    return n;
}
void arraySorting(int arr[],int n)
{
    int even[20],odd[20];
    int c1=0,c2=0;
    int i,j=0,k=0;
    int temp;
    int sort[n];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];//even numbers storing in to even array
            j++;
            c1++;
        }
        else
        {
            odd[k]=arr[i];//odd numbers storing in to odd array
            k++;
            c2++;
        }
    }

    for(i=0;i<=c1-2;i++)//sorting of even array elements
    {
        for(j=i+1;j<=c1-1;j++)
        {
            if(even[i]>even[j])
            {
                temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }

    for(i=0;i<=c2-2;i++)//sorting of odd array elements
    {
        for(j=i+1;j<=c2-1;j++)
        {
            if(odd[i]<odd[j])
            {
                temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }
    }
    //merging in to one array
    for(i=0;i<c1;i++)
    {
        sort[i]=even[i];
    }
    for(j=0;j<c2;j++)
    {
        sort[i++]=odd[j];
    }
    for(i=0;i<c1+c2;i++)
    {
        printf("%d ",sort[i]);
    }
}

