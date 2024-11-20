// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>

int sumSqr(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans=sumSqr(n);
    printf("%d", ans);
    return 0;
}

int sumSqr(int n)
{
    if(n==1)
        return 1;
    return ((n*n) + sumSqr(n-1));
}