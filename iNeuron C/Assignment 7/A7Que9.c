// Que9
// 9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int a, n, u, sum=0;
    printf("This program check whether a given number is an Armstrong number or not.\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;
    while(a!=0)
    {
        u = a%10;
        sum=sum+(u*u*u);
        a=a/10;
        
    }
    if(sum==n)
    {
        printf("The number is an Armstrong number.");
    }
    else
        printf("The number is not an Armstrong number.");
}