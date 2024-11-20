// 6. Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>

void arrayreverse(int *, int);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    arrayreverse(a,n);
    return 0;
}

void arrayreverse(int b[], int n)
{
    int i, j, k, temp;
    for(i=0; i<(n/2); i++)
    {   
        temp=b[i];
        b[i]=b[n-1-i];
        b[n-1-i]=temp;

    }
    for(j=0; j<n; j++)
    {
        printf("%d ", b[j]);
    }
    
}