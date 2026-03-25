#include <stdio.h>

int main()
{
    int row,col;

    printf("Enter Row & Coloum\n");
    scanf(" %d",&row);
    // scanf(" %d",&col);

    for(int i =1;i<=row;i++)
    {
        for(int j =1;j<=row-i;j++)
        {
            printf(" * ");
        } 
        printf("\n");
    }
    return 0;
}



/*
OUTPUT:


*
* *
* * *
* * * *
* * * * *

==========================

* * * * *
* * * *
* * *
* *
*


*/ 

