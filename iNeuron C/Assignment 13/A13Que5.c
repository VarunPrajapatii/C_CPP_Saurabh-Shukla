// 5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>

int sumdigit(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = sumdigit(n);
    printf("%d", ans);
}

int sumdigit(int n)
{
    if(n/10==0)
        return n%10;
    return (n%10 + sumdigit(n/10));
}