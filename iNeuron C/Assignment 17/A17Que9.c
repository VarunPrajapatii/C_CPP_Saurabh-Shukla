// Que9
// 9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>

int main()
{
    char c[50];
    printf("This program sorts a string in ascending order.\n");
    printf("Enter string: \n");
    
    fgets(c, 50, stdin);
    
    // Remove the newline character if present
    c[strcspn(c, "\n")] = '\0';
    
    int i, j, l;
    l = strlen(c);
    
    for(i = 0; i < l - 1; i++) {
        for(j = 0; j < l - 1 - i; j++) {
            if(c[j] > c[j + 1]) {
                char temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", c);
    return 0;
}
