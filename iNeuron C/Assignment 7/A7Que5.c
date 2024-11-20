// Que5
// 5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{
    int n, i, a, b;
    printf("This program check whether two given numbers are co-prime numbers or not.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i=(a<b)?a:b;
    while(i>1)
    {
        if(a%i==0&&b%i==0)
        {
            printf("Numbers are not coprime.");
            exit(0);
        }
        i--;
        
    }
    printf("The number is coprime.");

}