// Que5
// 5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void firstNprime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>1)
    {
        printf("First nprime numbers are: 2");
        firstNprime(n);
    }
    return 0;
}

void firstNprime(int n)
{
    int i, j=3;
    while(n!=1)
    {
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                j++;
                // continue;
                break;
            }
        }
        printf(", %d ", j);
        j++;
        n--;
    }
}