// Que5
// 5. Write a function to transform a string into lowercase

#include<stdio.h>

void strlwr(char []);

int main()
{
    char c[50];
    printf("This program transform string into lowercase.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    strlwr(c);
    return 0;
}

void strlwr(char a[50])
{
    int i;
    for(i=0; a[i]; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s", a);
}