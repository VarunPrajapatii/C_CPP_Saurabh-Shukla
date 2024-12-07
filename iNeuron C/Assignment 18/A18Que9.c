// Que9
// 9. Write a function to reverse a string word wise. 
// (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )

#include<stdio.h>
#include<string.h>

void reverseWordWise(char a[500]);

int main()
{
    char c[500];
    printf("This program reverses a string word-wise.\n");
    printf("Enter string: ");
    fgets(c, 500, stdin);
    c[strcspn(c, "\n")] = '\0';
    reverseWordWise(c);
    return 0;
}

void reverseWordWise(char a[500])
{
    char b[500];   // Temporary array to store the reversed string
    int len = strlen(a), i, j, k = 0;

    // Iterate from the end of the string
    for (i = len - 1; i >= 0; i--)
    {
        // When a space or the start of the string is encountered
        if (a[i] == ' ' || i == 0)
        {
            // If it's the start of the string, adjust the index
            if (i == 0)
                j = i;
            else
                j = i + 1;

            // Copy the word to `b`
            while (a[j] != ' ' && a[j] != '\0')
            {
                b[k++] = a[j++];
            }
            // Add a space after each word except the last one
            if (i != 0)
                b[k++] = ' ';
        }
    }

    b[k] = '\0'; // Null-terminate the string

    printf("Reversed string (word-wise): %s\n", b);
}




/**
 * #include <stdio.h>
#include <string.h>

void reverseWordWise(char str[]) {
    int i, j = 0, k = 0;
    int len = strlen(str);
    char words[50][50]; // Assuming no word exceeds 50 characters

    // Split the string into words
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            words[k][j] = '\0'; // Terminate the current word
            k++;
            j = 0; // Reset character position for the next word
        } else {
            words[k][j++] = str[i];
        }
    }

    // Print words in reverse order
    for (i = k - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[500];
    printf("This program reverses a string word wise.\n");
    printf("Enter string: ");
    fgets(str, 500, stdin);
    reverseWordWise(str);
    return 0;
}

 */