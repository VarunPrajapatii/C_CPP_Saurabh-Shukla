// Que3
// 3. Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>

int main()
{
    printf("This program read and displays a 2D array of strings in C language.\n");
    printf("Enter number of strings you want to enter: ");
    int n, i;
    scanf("%d", &n);
    char c[n+1][20];
    printf("Enter %d strings separated by enter key: ", n);
    for(i=0; i<=n; i++)
    {
        fgets(c[i], 20, stdin);
    }
    printf("The strings are displayed below.");
    for(i=0; i<=n; i++)
    {
        printf("%s", c[i]);
    }
}