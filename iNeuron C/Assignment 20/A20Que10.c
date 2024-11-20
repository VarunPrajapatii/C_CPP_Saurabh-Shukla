// Que10
// 10. Write a program to print a string in reverse using a pointer

#include<stdio.h>

int main()
{
    char a[50], *ptr;
    int last, i;
    printf("Enter a string: ");
    fgets(a,50,stdin);
    ptr=a;
    for(i=0; a[i]!='\n'; i++)
    {
    }
    last=i-1;
    for(i=last; i>=0; i--)
    {
        printf("%c", *(ptr+i));
    }
}