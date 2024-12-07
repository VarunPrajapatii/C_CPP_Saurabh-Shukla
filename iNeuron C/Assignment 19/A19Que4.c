// Que4
// 4. Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("This program searches a string in the list of strings.\n");
    printf("Enter number of strings to enter: ");
    int n, i;
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    char a[n][20], c[20];
    printf("Enter %d strings separated by enter keys: ", n);
    for(i=0; i<n; i++)
    {
        fgets(a[i], 20, stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    printf("Enter string to compare with: ");
    fgets(c, 20, stdin);
    c[strcspn(c, "\n")] = '\0';
    
    for(i=0; i<n; i++)
    {
        if(strcmp(a[i], c) == 0)
        {
            printf("String is present in the list of strings entered.\n");
            return 0;
        }
    }
    
    printf("String not present in the list of strings entered.");
    return 0;
}