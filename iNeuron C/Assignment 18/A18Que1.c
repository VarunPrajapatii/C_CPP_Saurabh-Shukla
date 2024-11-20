// Que1
// 1. Write a function to calculate length of the string

#include<stdio.h>

int strlencal(char []);

int main()
{
    char c[50];
    int len;
    printf("This program calculates length of the string.\n");
    printf("Enter string:\n");
    fgets(c,50,stdin);
    len=strlencal(c);
    printf("Length of string is %d.", len);

}

int strlencal(char a[50])
{
    int i=0;
    while(a[i])
    {
        i++;
    }
    return i-1;

}