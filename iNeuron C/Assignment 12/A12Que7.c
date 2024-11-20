// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void printNsqr(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNsqr(n);
}

void printNsqr(int n)
{
    if(n==1)
    {
        printf("1 ");
    }
    else
    {
        printNsqr(n-1);
        printf("%d ", n*n);
    }
}