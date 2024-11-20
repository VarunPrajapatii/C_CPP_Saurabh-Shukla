// Que8
// 8. Write a function to count words in a given string

#include<stdio.h>

int countword(char []);

int main()
{
    char c[500];
    int ans;
    printf("This program countr words in a string.\n");
    printf("Enter string: ");
    fgets(c, 500, stdin);
    ans=countword(c);
    printf("There are %d words in the string.", ans);
}

int countword(char a[500])
{
    int count=1, i;
    for(i=0; a[i]; i++)
    {
        if(a[i]==32 && a[i+1]!=32)
            count++;
    }
    return count;
}