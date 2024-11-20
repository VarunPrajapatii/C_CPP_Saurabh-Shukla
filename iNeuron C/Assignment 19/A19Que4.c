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
    char a[n+1][20], c[20];
    int flag[n+1];
    printf("Enter %d strings separated by enter keys: ");
    for(i=0; i<=n; i++)
    {
        fgets(a[i], 20, stdin);
    }
    printf("Enter string to compare with: ");
    fgets(c, 20, stdin);
    
    for(i=0; i<=n; i++)
    {
        flag[i]=strcmp(a[i], c);
    }
    for(i=0; i<=n; i++)
    {
        if(flag[i]==0)
        {
            printf("String is present in the list of strings entered.");
            exit(0);

        }
    }
    printf("String not present in the list of strings entered.");

}