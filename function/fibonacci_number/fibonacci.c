// #include <stdio.h>

// int main()
// {
//     int x =0; 
//     int a =0,b=1,temp =0;
//    // printf("%d %d ",a,b);
//     for(int i = 0;i<=5;i++)
//     {
//         printf("%d ",a);
//         temp = a+b;
//         a = b;
//         b =temp;
//        // printf("%d ",temp);

//     }

// }
/*

Q1. Write a function isEven(int n) that returns 1 if n is even, else 0.
Q2. Write a function reverseNumber(int n) that returns the reverse of a number. (e.g., 1234 → 4321)
Q3. Write a function isPrime(int n) that returns 1 if n is prime.
Q4. Write a function sumOfDigits(int n) that returns the sum of all digits.
Q5. Write a function power(int base, int exp) that returns base^exp without using

*/

// Q1. Write a function isEven(int n) that returns 1 if n is even, else 0.
// #include <stdio.h>

// int isEven(int n) {
//     // return (n % 2 == 0) ? 1 : 0;
//     if(n%2 ==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main() {
//     printf("%d\n", isEven(4));   // 1
//     printf("%d\n", isEven(7));   // 0
//     return 0;
// }




/*

Q2. Write a function reverseNumber(int n) 
that returns the reverse of a number. (e.g., 1234 → 4321)


#include <stdio.h>

int isnum_reverse(int n)
{
    int x =0;
    while (n!=0)
    {
        x = n%10 + x*10;
        n = n/10;
    }
   return x;

}
int main()
{
    int x = 7895;
   printf("%d",isnum_reverse(x));
    return 0;
}

*/

/*
Q4. Write a function sumOfDigits(int n) that returns the sum of all digits.



#include <stdio.h>

int sumOfDigits(int n)
{
    int x =0;
    while (n!=0)
    {
        x += n%10;
        n = n/10;
    }
   return x;

}

int main()
{

    int x = 1234;
    printf("%d",sumOfDigits(x));
    return 0;
}

*/

/*
Q3. Write a function isPrime(int n) that returns 1 if n is prime.
*/


#include <stdio.h>

int isprime(int n)
{
    if(n == 0 || n == 1)
    {
      return 0;   
    }
    for(int i =2 ;i<n;i++)
    if(i%2 ==0)
    {
        return 1; 
    }
    else{
       return 0;  
    }

}


int main()
{

   
    printf("%s",(isprime(5)) ? "Prime\n" : "Not Prime\n");
    printf("%s",(isprime(2)) ? "Prime\n" : "Not Prime\n");
    printf("%s",(isprime(0)) ? "Prime\n" : "Not Prime\n");
    return 0;
}
