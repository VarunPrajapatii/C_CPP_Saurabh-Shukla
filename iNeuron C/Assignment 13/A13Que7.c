// 7. Write a recursive function to calculate HCF of two numbers

#include<stdio.h>

int hcf(int, int);

int main()
{
    int a, b, temp, ans;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    ans = hcf(a,b);
    printf("HCF is %d.", ans);
    return 0;
}

int hcf(int a, int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>b)
        return (hcf(a%b, b));
    if(a<b)
        return (hcf(b%a, a));
}