

#include<stdio.h>

int main()
{
    char s1[100] = "m,anojkumar";
    char s2[] = "manikala family ";

    int len=0,j=0;

    while(s1[len] != '\0')
    {
        len++;
    }

    while(s2[j] != '\0')
    {
        s1[len] = s2[j];
        j++;
        len++;
    }
    s1[len] = '\0';

    printf("concatenate string :  %s",s1);

}