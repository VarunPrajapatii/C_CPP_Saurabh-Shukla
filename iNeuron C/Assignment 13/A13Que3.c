// 3. Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>

int evenSum(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans=evenSum(n);
    printf("%d", ans);
    return 0;
}

int evenSum(int n)
{
    if(n==0)
        return 0;
    return (2*n + evenSum(n-1));
}