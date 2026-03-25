#include <stdio.h>
int fact(int);
int main()
{
    int n = 5;
   int x = fact(n);
   printf("%d",x);
}


int fact(int n )
{
    if (n == 0 || n == 1)
    {
        return 1 ;
    }
    else
    {
        return n *fact(n-1);
    }
}