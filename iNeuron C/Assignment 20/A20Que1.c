// Que1
// 1. Write a function to swap values of two in variables of calling function. (TSRS)

#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("This program swaps two numbers.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Numbers are: %d %d.", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}