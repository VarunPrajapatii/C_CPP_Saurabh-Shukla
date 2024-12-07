// Que2
// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n, sum=0, i=2;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(; n>0; i+=2) {
        sum+=i;
        n--;
    }
    printf("%d", sum);

    return 0;
}