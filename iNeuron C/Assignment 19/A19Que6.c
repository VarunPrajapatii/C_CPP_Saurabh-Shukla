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
    getchar();
    char c[n][50];
    printf("Enter %d strings.\n", n);
    for(i=0; i<=n; i++)
    {
        fgets(c[i], 50, stdin);
        c[i][strcspn(c[i], "\n")] = '\0';
    }
    printf("The palindrome strings are: ");
    for(i=0; i<n; i++)
    {
        len=strlen(c[i]);
        int isPalindrome = 1;

        for(int j=0; j<len/2; j++) {
            if(c[i][j] != c[i][len-j-1])
            {
                isPalindrome = 0;
                break;
            }
        }
        if(isPalindrome)
        {
            printf("%s\n", c[i]);
        }
    }
    return 0;
}