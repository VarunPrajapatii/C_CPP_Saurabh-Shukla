// Que8
// 8. Write a program in C to copy one string to another string.

#include<stdio.h>

int main()
{
    char a[50], b[50];
    printf("This program copy one string to another string.\n");
    printf("Enter string: \n");
    fgets(a, 50, stdin);
    int i;
    for(i=0; a[i]; i++)
    {
        b[i]=a[i];
    }
    // b[i]='\0';
    printf("%s", b);
}