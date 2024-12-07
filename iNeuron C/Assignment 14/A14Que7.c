// 7. Write a program to find second largest in an array. Take array values from the user.

#include<stdio.h>
#include <limits.h>

int main()
{
    int a[10], i, j, max, secondMax;
    printf("Enter 10 positive numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = secondMax = INT_MIN;
    for(i=0;i<10;i++)
    {
        if(a[i] > max) {
            secondMax = max;
            max = a[i];
        } else if (a[i] > secondMax && a[i] < max) {
            secondMax = a[i];  // Update second smallest if it's greater than small
        }
    }
    if (secondMax != INT_MIN)
        printf("Second largest value is %d.\n", secondMax);
    else
        printf("Second largest value does not exist.\n");
        return 0;
}