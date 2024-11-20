// Que2
// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=0; i <= n; i++)
    {
        sum=sum+i;
        i++;
    }
    printf("%d", sum);

    return 0;
}