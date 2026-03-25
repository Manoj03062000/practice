#include<stdio.h>


int main()
{
    char str[] ="maamk";

    int len=0,i=0,mismatch=0;

    while(str[i] != '\0')
    {
        len++;
        i++;
    }

    for(i=0;i<len/2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            mismatch++;
        }
    }
    if(mismatch == 0)
    {
        printf("string is a palindrome");
        
    }
    else
    {
        printf("string is not a palindrome it will become:%d",mismatch);
    }
}