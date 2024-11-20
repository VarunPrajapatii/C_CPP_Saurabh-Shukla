// 9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int countdig(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", countdig(n));
    return 0;
}

int countdig(int n)
{
    if(n/10==0)
        return 1;
    return (1+countdig(n/10));
}