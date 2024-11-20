// Que6
// 6. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char c[20];
    int i, lastindex, temp;
    printf("This program reverse a given string.\n");
    printf("Enter string: ");
    fgets(c, 20, stdin);
    for(i=0; c[i]; i++)
    {
        lastindex=i;
    }
    // for(i=0; i<=lastindex/2; i++)
    // {
    //     temp=c[i];
    //     c[i]=c[lastindex];
    //     c[lastindex]=temp;
    // }

    int len, j;
    char b[50];
    len=strlen(c);
    for(i=len-2, j=0; i>=0; i--, j++)
    {
        b[j]=c[i];
    }
    printf("Reverse of string is %s.", b);
    // printf("%s", c);

}