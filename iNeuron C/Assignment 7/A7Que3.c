// Que3
// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int x, fib = 0, a = 0, b = 1;
    printf("This program checks whether a given number is in the Fibonacci series or not.\n");
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("Number is in Fibonacci series.\n");
        return 0;
    }
    while (fib < x) {
        fib = a + b;
        a = b;
        b = fib;
        if (fib == x) {
            printf("Number is in the Fibonacci series.\n");
            return 0;
        }
    }

    printf("Number is NOT in the Fibonacci series.\n");
    
    return 0;
}