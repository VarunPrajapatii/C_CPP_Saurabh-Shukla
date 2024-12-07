// Que3
// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
    int n, sum=0, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; n>0; i+=2)
    {
        sum=sum+i;
        n--;
    }
    printf("%d", sum);

    return 0;
}