// Que7
// 7. Write a program to print all Prime numbers between two given numbers


#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, i, j, flag=0;
    printf("This program print all Prime numbers between two given numbers.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nThe prime numbers between %d and %d are:  ", a, b);
    for(i=a; i<=b; i++)
    {
        for(j=2; j<=sqrt(a); j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0&&i!=1)
            printf(" %d ", i);
        flag=0;

    }

}