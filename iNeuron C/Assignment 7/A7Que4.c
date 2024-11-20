// Que4
// 4. Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int n, i, a, b;
    printf("This program calculate HCF of two numbers.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i=(a<b)?a:b;

    while(i>0)
    {
        if(a%i==0&&b%i==0)
        {
            printf("HCF is %d.", i);
            break;
        }
        i--;
    }

    return 0;
}
// LCM=(a*b)/HCF