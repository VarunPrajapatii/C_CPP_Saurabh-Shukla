// 1. Write a recursive function to calculate sum of first N natural 

#include<stdio.h>

int sumN(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = sumN(n);
    printf("%d", ans);

}


int sumN(int n)
{
    if(n==1)
        return 1;
    else
        return (n+sumN(n-1));
}