#include<stdio.h>
#include<string.h>
#include"header.h"
int main()
{
    char string[100];
    printf("enter string:");fgets(string,100,stdin);
    findlongestpalindrome(string);
    return 0;
}