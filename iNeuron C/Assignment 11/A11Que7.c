// Que7
// 7. Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void fibnterm(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibnterm(n);


}

void fibnterm(int n)
{
    int i, ans=1;
    for(i=1; i<=n; i++)
    {
        ans=ans*i;
    }
    printf("%d", ans);
}