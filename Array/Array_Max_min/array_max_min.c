#include<stdio.h>

int main()
{
    int array[] = {12,54,67,887,98};
    int size = sizeof(array)/sizeof(array[0]);
    int min = array[0];
    int max = array[0];
    for(int i=0;i<size;i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
        if(max < array[i])
        {
            max = array[i];
        }
    }
    printf("min: %d max: %d\n",min,max);
}