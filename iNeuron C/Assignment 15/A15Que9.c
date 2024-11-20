// 9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>

void mergearray(int [], int [], int);

int main()
{
    int n;
    printf("This program merge two arrays of the same size sorted in descending order.\n");
    printf("Enter size of arrays: ");
    scanf("%d", &n);
    int a[n], b[n], i;
    printf("Enter elements of first array in descending order: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second array in descending order: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    mergearray(a,b,n);


}

void mergearray(int a[], int b[], int n)
{
    int i=0, j=0, c[2*n], k=0;
    while(i!=n && j!=n)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(i!=n)
    {
        while(i!=n)
        {
            c[k]=a[i];
            k++;
            i++;
        }
    }
    if(j!=n)
    {
        while(j!=n)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    for(i=0; i<2*n; i++)
    {
        printf("%d ", c[i]);
    }
}