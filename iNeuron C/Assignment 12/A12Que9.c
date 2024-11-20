// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>

void printOctal(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printOctal(n);
}

void printOctal(int n)
{
    if(n<8)
    {
        printf("%d", n);
    }
    else
    {
        printOctal(n/8);
        printf("%d", n%8);
    }
}