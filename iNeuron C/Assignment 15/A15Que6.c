// 6. Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>

void arrayreverse(int [], int);

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

void arrayreverse(int arr[], int n)
{
    int start=0, end=n-1, temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}