// Que3
// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
#include<math.h>

int checkprime(int);

int main()
{
    int n, ans; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("It's not a prime number.\n");
    } else {
        ans = checkprime(n);
        ans == 0 ? printf("It's a prime number.\n") : printf("It's not a prime number.\n");
    }
}

int checkprime(int n)
{
    int i;
    for(i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 1;
        }
    }
    return 0;
}