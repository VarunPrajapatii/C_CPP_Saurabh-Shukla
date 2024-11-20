// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int a[10], i;
    float sum=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10;i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("Average is %.2f.", sum/10.0);
}