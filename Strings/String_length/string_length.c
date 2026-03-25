
/*
#include<stdio.h>

int main()
{
    char string[] = "manojkumar";
    int length=0,i=0;

    while(string[i] != '\0')
    {
        length++;
        i++;
    }
    printf("length string :%d\n",length);

}

*/

/*============================================================================================================================================*/
/*caculate the string length using point */
/*
#include <stdio.h>

int main()
{
    char x[] = "manojkumar";
    char *s = x;
    int length = 0;

    while(*(s+length) != '\0')
    {
        length++;
    }

    printf("length of string %d",length);
}
*/


/* function using caculate the len of array */

#include<stdio.h>

int function(char *s)
{
    int length = 0;
    while(*(s+length) != '\0')
    {
        length++;
    }

    return length;
    
}
int main()
{
    char x[] = "manojkumar";
    char length = function(x);
    printf("length of string %d",length);
}