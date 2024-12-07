// Que1
// 1. Write a function to calculate length of the string

#include<stdio.h>
#include<string.h>

int strlencal(char [50]);

int main()
{
    char c[50];
    int len;
    printf("This program calculates length of the string.\n");
    printf("Enter string:\n");
    fgets(c,50,stdin);
     // Remove the newline character if it's present
    c[strcspn(c, "\n")] = '\0';
    len=strlencal(c);
    printf("Length of string is %d.", len);
}

int strlencal(char a[50])
{
    int i=0;
    while(a[i] != '\0')
    {
        i++;
    }
    return i;

}