// Que6
// 6. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char c[20];
    int i, lastindex, temp;

    printf("This program reverses a given string.\n");
    printf("Enter string: ");
    fgets(c, 20, stdin);
    
    // Remove the newline character added by fgets
    c[strcspn(c, "\n")] = '\0';

    for(i = 0; c[i]; i++) {
        lastindex = i;
    }
    // Inplace
    for(i = 0; i <= lastindex / 2; i++) {
        temp = c[i];
        c[i] = c[lastindex - i];
        c[lastindex - i] = temp;
    }
    printf("Reverse of the string is: %s\n", c);

    return 0;
}