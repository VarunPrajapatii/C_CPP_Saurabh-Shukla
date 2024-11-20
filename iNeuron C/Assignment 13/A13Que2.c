// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>

int sumOdd(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = sumOdd(n);
    printf("%d", ans);
    return 0;
}

int sumOdd(int n)
{
    if(n==0)
    {
        return 0;
    }
    return ((2*n-1)+sumOdd(n-1));
}