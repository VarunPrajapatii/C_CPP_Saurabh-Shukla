// Que6
// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int n, fact=1, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("%d", fact);

    return 0;
}