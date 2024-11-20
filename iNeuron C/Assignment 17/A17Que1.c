// Que1
// 1. Write a program to calculate the length of the string. (without using built-in method)


#include<stdio.h>

int main()
{
    int len, c[200];
    printf("Enter a string: ");
    gets(c);
    printf("Length of string ");
    len=printf("'%s'", c);
    printf(" is %d", len);
    return 0;
}