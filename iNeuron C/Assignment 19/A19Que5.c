// Que5
// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("This program takes list of email addresses and check whether all email address have '@' in it.\n");
    printf("Enter number of email addresses you are going to enter: ");
    int n, i, j;
    scanf("%d", &n);
    char c[n+1][50];
    int position[n+1];
    for(i=0; i<=n; i++)
    {
        position[i]=1;
    }
    printf("Enter %d email addresses: ", n);
    for(i=0; i<=n; i++)
    {
        fgets(c[i], 50, stdin);
    }

    for(i=0; i<=n; i++)
    {
        for (j=0; c[i][j]; j++)
        {
            if(c[i][j]==64)
            {
                position[i]=0;
                break;
            }
        }
        
    }
    printf("The odd emails are: ");
    for(i=0; i<=n; i++)
    {
        if(position[i]==1)
        {
            printf("%s", c[i]);
        }
    }

}



/*
there is a function strchr() jisme voh string leta hai aur character leta hai aur agar usey voh character milta hai toh voh 0 return karta hai
aur agar not equal zero return karta hai toh matlab character not found...
*/