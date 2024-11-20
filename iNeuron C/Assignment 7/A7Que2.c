// Que2
// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int i, n=1, fib=0, a=1, b=0;
    printf("This program prints the first N terms of Fibonacci series.\n");
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("1 ");
    while(n<i)
    {
        fib=a+b;
        b=a;
        a=fib;
        n++;
        printf(" %d ", fib);
    }
}