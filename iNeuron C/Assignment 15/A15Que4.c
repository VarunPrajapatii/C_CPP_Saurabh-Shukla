// 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. 
// (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )


//REVERSAL ALGORITHM

#include<stdio.h>

void arrayRotate(int [], int, int, int);
void reverse(int [], int, int);

int main()
{
    int n, np, d, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("By how many positions you want to rotate the array? ");
    scanf("%d", &np);
    printf("Press 1 for left direction of rotation and 0 for right: ");
    scanf("%d", &d);
    int a[n];
 
    if(d==0||d==1)
    {
        printf("Enter %d numbers: ", n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
    }
    arrayRotate(a, n, np, d);
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0; 
}


void arrayRotate(int arr[], int n, int np, int d) {
    if(d == 0) {
        reverse(arr, 0, np-1);
        reverse(arr, np, n-1);
        reverse(arr, 0, n-1);
    }
    if(d == 1) {
        reverse(arr, 0, n-1);
        reverse(arr, 0, np-1);
        reverse(arr, np, n-1);
    }
}

void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}