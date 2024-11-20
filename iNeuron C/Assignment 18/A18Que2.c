// Que2
// 2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>

void strreverse(char []);

int main()
{
    char c[50];
    printf("This program reverse a string.\n");
    printf("Enter String: ");
    fgets(c, 50, stdin);
    strreverse(c);
    return 0;
}

void strreverse(char a[50])
{
    int len, i, j;
    char b[50];
    len=strlen(a);
    for(i=len-2, j=0; i>=0; i--, j++)
    {
        b[j]=a[i];
    }
    printf("Reverse of string is %s.", b);
}