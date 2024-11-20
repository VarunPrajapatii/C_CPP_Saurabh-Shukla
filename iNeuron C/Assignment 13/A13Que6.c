// 6. Write a recursive function to calculate factorial of a given number

#include<stdio.h>

int fact(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = fact(n);
    printf("Factorial is %d.", ans);
    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    return(n*fact(n-1));
}