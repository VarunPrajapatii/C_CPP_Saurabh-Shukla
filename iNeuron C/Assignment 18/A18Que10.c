// Que10
// 10. Write a function to find the repeated character in a given string.

#include<stdio.h>

void findRep(char[]);

int main()
{
    char c[50];
    printf("This program finds the repeated characters in a given string.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    findRep(c);
}

void findRep(char a[])
{
    int i, j;
    int count[256] = {0};

    for (i = 0; a[i] != '\0'; i++) {
        count[(int)a[i]]++;
    }

    printf("These characters are repeated in the string: ");
    int flag = 0;
    for (i = 0; i<256; i++) {
        if (count[i] > 1) {
            printf("%c ", (char)i);
            flag = 1;
        }
    }

    if (!flag) {
        printf("No repeated characters.");
    }
    printf("\n");
}
