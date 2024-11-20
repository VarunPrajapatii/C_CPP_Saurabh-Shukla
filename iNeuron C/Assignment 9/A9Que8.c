// Que8
//  8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.


#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter a positive or negative number: ");
    scanf("%d", &n);
    a=(n>=0?1:0);
    switch (a)
    {
    case 1:
        printf("%d", n-(2*n));
        break;
    case 0:
        printf("%d", n*-1);
        break;

    }

}