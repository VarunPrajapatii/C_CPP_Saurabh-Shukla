// Que4
// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; i <= n; i++)
    {
        sum=sum+(i*i);
    }
    printf("%d", sum);

    return 0;
}