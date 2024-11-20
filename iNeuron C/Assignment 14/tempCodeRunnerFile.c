#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int a[n], i, temp;
    printf("Now enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-i];
        a[n-i]=temp;
    }
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}