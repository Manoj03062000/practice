#include<stdio.h>

int main()
{

    char str1[] = "manojkumar";
    int i =0,length=0;

    while(str1[i] != '\0')
    {
        length++;
    }
    printf("length %d\n",length);
    for(i=0;i<length/2;i++)
    {
        char temp;
        temp = str1[i];
        str1[length-i-1] = temp;
    }

    printf("reverse string %s",str1);

}
