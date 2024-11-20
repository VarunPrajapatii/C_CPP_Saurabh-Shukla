// Que1
// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int i, n=1, fib=0, a=1, b=1;
    printf("This program finds the Nth term if the Fibonacci series.\n");
    printf("Enter a number: ");
    scanf("%d", &i);
    if(i==1||i==2)
    {
        printf("1");
    }
    else
        while(n<(i-1))
        {
            fib=a+b;
            b=a;
            a=fib;
            n++;
            
        }
    printf("%dth term of series is %d.", n+1, fib);
}