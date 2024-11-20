// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>
int add(int);

int main()
{
    int n, ans=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans=add(n);
    printf("Sum is %d.", ans);
}

int add(int n)
{
    int ans;
    if(n==1)
        return 1;
    else
    {
        ans=n+add(n-1);
    }
    return ans;
}