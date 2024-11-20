// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printrev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printrev(n);
}

void printrev(int n)
{
    if(n==1)
    {
        printf("1 ");
        return;
    }
    else
    {
        printf("%d ", n);
        printrev(n-1);
    }
}