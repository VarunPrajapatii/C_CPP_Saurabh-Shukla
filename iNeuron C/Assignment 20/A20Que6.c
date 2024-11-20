// Que6
// 6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>

int main()
{
    printf("Enter a string: ");
    char c[50];
    fgets(c, 50, stdin);
    char *ptr;
    ptr=c;
    int i, count=0;
    for(i=0; *ptr!='\0'; i++)
    {
        ptr++;
        count++;
    }
    printf("Length of string is %d.", count-1);

}