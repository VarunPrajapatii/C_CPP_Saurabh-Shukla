// Que5
// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("This program checks a list of email addresses and verifies whether each has '@'.\n");
    printf("Enter the number of email addresses you want to check: ");
    
    int n, i;
    scanf("%d", &n);
    getchar();
    char c[n][50];
    int allValid = 1;
    
    printf("Enter %d email addresses: \n", n);
    for(i = 0; i < n; i++)
    {
        fgets(c[i], 50, stdin);
        c[i][strcspn(c[i], "\n")] = '\0';
    }

    for(i = 0; i < n; i++)
    {
        if(strchr(c[i], '@') == NULL)       // strchr returns NULL if '@' is not found
        {
            printf("The odd email (without '@') is: %s\n", c[i]);
            allValid = 0;
        }
    }

    if(allValid)
    {
        printf("All email addresses are valid (contain '@').\n");
    }

    return 0;
}