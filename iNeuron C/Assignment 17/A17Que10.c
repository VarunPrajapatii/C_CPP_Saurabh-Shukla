// Que10
// 10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
#include<string.h>

int main()
{
    char c[50];
    printf("This program finds the frequency of characters in the given string.\n");
    printf("Enter string: \n");
    fgets(c, 50, stdin);
    int freq[256] = {0};
    
    // Remove newline character if it exists
    c[strcspn(c, "\n")] = '\0';
    
    for(int i = 0; c[i]; i++) {
        freq[c[i]]++;
    }
    printf("Frequency of characters:\n");
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("Character '%c' appears %d times.\n", i, freq[i]);
        }
    }
    return 0;
}
