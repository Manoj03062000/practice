#include<stdio.h>

//Bubble Sort 
int main()
{
    int array[] = {22,4,55,3,89,0};
    int size = sizeof(array)/sizeof(array[0]);
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp; 
            }

        }
    }
    for(int j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }
}