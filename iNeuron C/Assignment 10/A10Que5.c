// Que5
// 5. Write a function to print first N odd natural numbers. (TSRN)


#include<stdio.h>

void printodd(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printodd(n);    
}

void printodd(int n)
{
    int i;
    for (i = 0; i <n; i++)
    {
        printf("%d ", 2*i+1);
    }
    
}