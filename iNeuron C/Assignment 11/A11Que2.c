// Que2
// 2. Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>

int hcfoftwo(int, int);

int main()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    hcf=hcfoftwo(a, b);
    printf("HCF is %d.", hcf);

    return 0;
}

int hcfoftwo(int a, int b)
{
    int x, i;
    x=(a<b?a:b);
    for(i=x; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
        break;
    }
}