// Que5
// 5. Write a program to convert a given string into lowercase


#include<stdio.h>

int main()
{
    char c[20];
    int i;
    printf("This program convert a given string into lowercase.\n");
    printf("Enter string: ");
    fgets(c,20,stdin);
    for(i=0; c[i]; i++)
    {
        if(c[i]>=65 && c[i]<=90)
        {
            c[i]=c[i]+32;
        }
    }
    printf("%s", c);
}