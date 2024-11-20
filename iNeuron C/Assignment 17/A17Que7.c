// Que7
// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>

int main()
{
    char c[100];
    printf("This program counts the total number of alphabets, digits and special characters in a string.\n");
    printf("Enter the string: \n");
    fgets(c,100,stdin);
    int i, alpct=0, digct=0, spct=0;
    for(i=0; c[i]; i++)
    {
        if((c[i]>=33 && c[i]<=47) || (c[i]>=58 && c[i]<=64) || (c[i]>=91 && c[i]<=96) || (c[i]>=123 && c[i]<=127))
        {
            spct++;
        }
        else if(c[i]>=48 && c[i]<=57)
        {
            digct++;
        }
        else if((c[i]>=65 && c[i]<=90) || (c[i]>=97 && c[i]<=122))
        {
            alpct++;
        }
    }
    printf("There are %d alphabets, %d digits and %d special characters.", alpct, digct, spct);
}