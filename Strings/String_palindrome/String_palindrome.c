#include<stdio.h>
int main()
{
    int palindrome = 1,i=0,length =0;
    char str1[] = "manam";
    //length 
    while(str1[i] != '\0')
    {
        length++;
        i++;
    }
    printf("length :%d \n",length);

    for(i=0;i<length/2;i++)
    {
        if(str1[i] != str1[length-i-1])
        {
            palindrome =0;
        }
    }
    if(palindrome == 1)
    {
        printf("sting is palindrom");
    }
    else 
    {
        printf("sting is Not palindrom");
    }                  
}