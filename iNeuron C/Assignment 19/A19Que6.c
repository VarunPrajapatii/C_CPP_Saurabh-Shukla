// Que6
// 6. Write a program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("This program prints the strings which are palindrome in the list of given strings.\n");
    printf("Enter the number of strings you want to enter: ");
    int n, i, j, len;
    scanf("%d", &n);
    char c[n+1][50];
    printf("Enter %d strings.", n);
    for(i=0; i<=n; i++)
    {
        fgets(c[i], 50, stdin);
    }
    printf("The palindrome strings are: ");
    for(i=0; i<=n; i++)
    {
        
    }
}