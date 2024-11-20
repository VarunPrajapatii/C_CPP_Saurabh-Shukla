// Que10
// 10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int n, a=0, b=0;
    printf("Enter a non negative number: ");
    scanf("%d", &n);
    while(1)
    {

        b=n%10;
        n=n/10;
        a=a+b;
        if(n!=0)
            a=a*10;
        else
        {
            printf("%d", a);
            break;
        }
    }
}