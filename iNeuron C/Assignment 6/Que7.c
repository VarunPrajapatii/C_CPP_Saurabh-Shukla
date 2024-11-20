// Que7
// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("%d", count);

    return 0;
}