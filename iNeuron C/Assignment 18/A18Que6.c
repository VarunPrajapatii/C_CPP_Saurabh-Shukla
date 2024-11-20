// Que6
// 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>

int checkalphanum(char []);

int main()
{
    char c[50], ans;
    printf("This  program check whether a given string is an alphanumeric string or not.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    ans=checkalphanum(c);
    if(ans==0)
    {
        printf("Its not an alphanumeric string.");
    }
    else
        printf("Its an alphanumeric string.");
    return 0;
}

int checkalphanum(char a[50])
{
    int i=0,j=0,k=0;
    for(i=0; a[i]; i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            j=1;
            break;
        }
    }
    for(i=0; a[i]; i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            k=1;
            break;
        }
    }
    if(j==1 && k==1)
        return 1;
    else
        return 0;
}