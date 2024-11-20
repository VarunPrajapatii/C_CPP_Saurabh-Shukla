// Que8
// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int n, i=2;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(i<n)
    {
        if(n%i==0)
        {
            printf("Its not a prime number.");
            break;
        }
        i++;
        if(i==n)
            printf("Its a Prime number.");

    }
    
       
    return 0;
}