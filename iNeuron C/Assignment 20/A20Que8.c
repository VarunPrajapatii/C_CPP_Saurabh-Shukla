// Que8
// 8. Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main()
{
    printf("Enter size of array you want: ");
    int n;
    scanf("%d", &n);
    int a[n], i, *ptr, sum=0;
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr=a;
    for(i=0; i<n; i++)
    {
        sum=sum+(*(ptr+i));
    }
    printf("Sum is %d.", sum);
}