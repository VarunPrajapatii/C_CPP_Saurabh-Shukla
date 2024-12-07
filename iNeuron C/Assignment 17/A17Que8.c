// Que8
// 8. Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[50], b[50];
    printf("This program copy one string to another string.\n");
    printf("Enter string: \n");
    fgets(a, 50, stdin);
    // Remove the newline character if present
    a[strcspn(a, "\n")] = '\0';

    int i;
    for(i=0; a[i]; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("The copied string is: %s\n", b);
}