#include<stdio.h>

int main(){

    char string1[] = "manoj";
    char string2[100];
    int i =0;
    while(string1[i] != '\0')
    {
        string2[i] = string1[i];
        i++;
    }
    string2[i] = '\0';
    printf("%s",string2);
}
