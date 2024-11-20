// Que9
// 9. Write a program to print the elements of an array in reverse order.

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n], *ptr;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr=a;
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", *(ptr+i));
    }
}