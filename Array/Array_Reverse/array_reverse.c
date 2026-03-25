#include<Stdio.h>
void function_reverse(int array[],int size)
{
    int i,temp;
    for(int i =0;i<size/2;i++)
    {
        temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
}

void print_array(int array[],int size)
{
    for(int i =0;i<size;i++)
    {
        printf(" %d",array[i]);
    }
}

int main()
{
    int array[] ={123,14,1,13,15};
    int size = sizeof(array)/sizeof(array[0]);

    function_reverse(array,size);

    print_array(array,size);
}