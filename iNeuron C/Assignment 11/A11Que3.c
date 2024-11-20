// Que3
// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>

int checkprime(int);

int main()
{
    int n, ans; 
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = checkprime(n);
    ans==0?printf("Its a prime number."):printf("Its not a prime number.");
}


int checkprime(int n)
{
    int i;
    for(i=2; i<=n/2; i++)
    {
        if (n%i==0)
        {
            return 1;
        }
    }
    return 0;
}