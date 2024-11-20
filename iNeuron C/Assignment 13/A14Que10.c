// 10. Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

int powr(int, int);

int main()
{
    int a, n;
    printf("Enter number and power: ");
    scanf("%d %d", &a, &n);
    printf("%d", powr(a, n));
    return 0;
}

int powr(int a, int n)
{
    if(n==1)
        return a;
    return (a*powr(a,(n-1)));
}