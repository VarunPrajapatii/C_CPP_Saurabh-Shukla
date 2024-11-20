// Que4
// 4. Write a program to convert a given string into uppercase


#include<stdio.h>

int main()
{
    char c[20];
    int i;
    printf("This program convert a given string into uppercase.\n");
    printf("Enter string: ");
    fgets(c,20,stdin);
    for(i=0; c[i]; i++)
    {
        if(c[i]>=97 && c[i]<=122)
        {
            c[i]=c[i]-32;
        }
    }
    printf("%s", c);
}