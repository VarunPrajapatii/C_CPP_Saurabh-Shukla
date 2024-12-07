// Que1
// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
    int i, n, fib = 0, a = 0, b = 1;
    printf("This program finds the Nth term of the Fibonacci series.\n");
    printf("Enter a number (N): ");
    scanf("%d", &n);
    
    if(n == 1) {
        printf("The %dth term of the Fibonacci series is 0.\n", n);
        return 0;
    }
    if(n == 2) {
        printf("The %dth term of the Fibonacci series is 1.\n", n);
        return 0;
    }
    for(i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    
    printf("The %dth term of the Fibonacci series is %d.\n", n, fib);
    return 0;
}
