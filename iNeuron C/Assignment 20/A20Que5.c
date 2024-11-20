// Que5
// 5. Write a program to find the maximum number between two numbers using a pointer


#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *p, *q;
    p=&a;
    q=&b;
    if(*p>*q)
    {
        printf("%d is maximum number.", *p);
    }
    else if(*p==*q)
    {
        printf("Both are Equal numbers.");
    }
    else
    {
        printf("%d is maximum number.", *q);
    }
}