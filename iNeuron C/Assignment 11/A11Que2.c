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
    while(b!=0) {
        int temp = b;
        b = a%b;
        a = temp;
        printf("%d", a);
    }
    return a;
}