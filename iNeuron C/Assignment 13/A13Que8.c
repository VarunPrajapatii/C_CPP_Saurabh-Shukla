// 8. Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>

int Fib(int);

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    printf("%d ", Fib(i));
    }
    return 0;
}

int Fib(int n)
{
    if(n==0 || n==1) return n;
    else return (Fib(n-1)+Fib(n-2));
}