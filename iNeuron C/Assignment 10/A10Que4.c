// Que4
// 4. Write a function to print first N natural numbers (TSRN)


#include<stdio.h>

void printN(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printN(n);    
}

void printN(int n)
{
    int i;
    for (i = 1; i <=n; i++)
    {
        printf("%d ", i);
    }
    
}