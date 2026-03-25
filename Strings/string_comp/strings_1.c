/*
#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "manojkumar";
    char string2[] = "manojkumar";

    int strlength1 = strlen(string1);
    int strlength2 = strlen(string2);
    int same =1 ;

    if(strlength1 == strlength2)
    {
        for(int i=0;i<strlength1;i++)
        {
            if (string1[i] != string2[i])
            {
                same =0;
                break;
            }

        }
    }
    else 
    {
        printf("both string are not same\n");
    }
    if (same)
        printf("both string are  same\n");

    else
         printf("both string are not same\n");

}

*/

/*  String comp without using string.h */

#include <stdio.h>

int main()
{
    char string1[] = "manojkumar";
    char string2[] = "manojkumar";
    int i = 0,same =1;
    while(string1[i] != '\0' || string2[i] != '\0')
    {
        if(string1[i] != string2[i])
        {
             same = 0;
             break;
        }
        i++;
    }
    if (same)
    {
        printf("string are same ");
    }
    else 
    {
        printf("string are not same");
 }
}