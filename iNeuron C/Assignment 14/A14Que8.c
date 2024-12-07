// 8. Write a program to find the second smallest number in an array. Take array values from the user.


#include<stdio.h>
#include<limits.h>
int main()
{
    int a[10], i, j, small, secondSmall;
    printf("Enter 10 positive numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    small = secondSmall = INT_MAX;
    for(i=0;i<10;i++)
    {
        if(a[i]<small) {
            secondSmall= small;
            small = a[i];
        }  else if (a[i] < secondSmall && a[i] > small) {
            secondSmall = a[i];
        }
    }
    if(secondSmall == INT_MAX) {
        printf("There is no second smallest value.");
    } else {
        printf("Second largest valye is %d.", secondSmall);
    }

    return 0;
}