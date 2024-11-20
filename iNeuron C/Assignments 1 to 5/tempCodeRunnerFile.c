#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    a=n;
    a=n%10;
    n=n/10;
    a=a*100;
    n=n+a;
    printf("The number after rotation is %d.", n);

    return 0;
}