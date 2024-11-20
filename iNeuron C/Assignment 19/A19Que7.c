// Que7
// 7. From the list of IP addresses, check whether all ip addresses are valid.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("This program, from the given list of IP addresses, check whether all ip addresses are valid.\n");
    printf("Enter number of IP addresses you want to enter: ");
    int n, i, j, t1, t2, t3, t4, a[3];
    scanf("%d", &n);
    printf("Enter %d ip addresses: ", n);
    char c[n+1][20];
    for(i=0; i<=n; i++)
    {
        fgets(c[i], 20, i++);
    }

    if(c[i][j]=='.' || c[i][j]=='\0')
    {
        
    }
    



}