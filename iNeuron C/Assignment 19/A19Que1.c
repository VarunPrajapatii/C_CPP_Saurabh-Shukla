// Que1
// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>

int main()
{
    char  c[5][20];
    int i, j, count;
    printf("This program finds the number of vowels in each of the 5 strings, taken from the user.\n");
    printf("Enter five strings separated by enter key: ");
    for(i=0; i<5; i++)
    {
        fgets(c[i], 20, stdin);
        c[i][strcspn(c[i], "\n")] = '\0';
    }
    for(i=0; i<5; i++)
    {
        count=0;
        for(j=0; c[i][j]; j++)
        {
            if(c[i][j]=='a' ||c[i][j]=='e' || c[i][j]=='i' || c[i][j]=='o' || c[i][j]=='u' || c[i][j]=='A' ||c[i][j]=='E' || c[i][j]=='I' || c[i][j]=='O' || c[i][j]=='U')
            {
                count++;
            }
        }
        printf("String %s contains %d vowels.\n", c[i], count);
    }
}