#include<stdio.h>
#include<string.h>
#include"header.h"
void findlongestpalindrome(char s[])
{
    int len=strlen(s);
    int i;
    int start=0,end=1;
    char substr[len];
    a:
    for(i=start;i<=end;i++)
    {
        substr[i]=s[i];
    }
    int substr_len=0;
    if(palindrome(substr))
    {
        substr_len=strlen(substr);
        printf("%s",substr);
        start++;
        end++;
    }
    else
    {
        end++;
        goto a;
    }
    if(!substr_len)
    printf("no palindromes found");
}
int palindrome(char s[])
{
    int len=strlen(s);
    int i;
    int f=1;
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            f=0;
            break;
        }
        
    }
    if(f)
    return 1;
    else
    return 0;
}
