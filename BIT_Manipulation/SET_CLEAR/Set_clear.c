#include<stdio.h>
int function_set(int num,int k,int k1)
{
    num = num | ((1<<k-1)| (1<<k1-1));
    printf("set bit : %d\n",num);
    return num;
}
int main()
{
    int n =43;
    int k = 5,k1=3;

    int num = function_set(n,k,k1); 
    printf("num : %d\n",num);
// clear the 4, 5 ,1 bits
    int c1 = 5,c2 = 4,c3 = 1; 
    num = num & (~((1<<c1-1) | (1<<c2-1)| (1<<c3-1)));
    printf("clear bit : %d",num);
}