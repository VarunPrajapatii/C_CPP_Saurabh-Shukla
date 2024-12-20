// Que3
// 3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

int compstr(char [50], char[50]);

int main()
{
    int ans;
    char a[50], b[50];
    printf("This program compares two strings.\n");
    printf("Enter first string: ");
    fgets(a, 50, stdin);
    printf("Enter second string: ");
    fgets(b,50,stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    ans=compstr(a,b);
    if(ans==0)
    {
        printf("Strings are not same.");
    }
    else
        printf("Strings are identical...");
    return 0;
}

int compstr(char a[50], char b[50])
{
    int i;
    for(i=0; a[i] || b[i]; i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}