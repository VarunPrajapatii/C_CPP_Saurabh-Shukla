// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>

int gn(int a[], int n)
{
    int max=a[0], i;
    for(i=0; i<n; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], i, grtnm;
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    grtnm=gn(a, n);
    printf("Greatest number in this array is %d.", grtnm);
}