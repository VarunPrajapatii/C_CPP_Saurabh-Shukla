// Que3
// 3. Write a program to check whether a given number is there in the Fibonacci series or not.


#include<stdio.h>
int main()
{
    int x, fib=0, a=1, b=0;
    printf("This program check whether a given number is there in the Fibonacci series or not.\n");
    printf("Enter a number: ");
    scanf("%d", &x);

    while(fib<x)
    {
        fib=a+b;
        b=a;
        a=fib;
        if(x==fib)
        {
            printf("Number is in fibonacci series.");
            break;
        }

    }
}