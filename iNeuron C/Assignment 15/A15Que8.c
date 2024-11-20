// 8. Write a function in C to print all unique elements in an array.

#include<stdio.h>

int uniquecount(int [], int);
int * sort(int [], int);


int main()
{
    int n; 
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n], i, ans;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ans=uniquecount(sort(a, n), n);
    printf("There are %d unique elements in the array.", ans);
    return 0;
}

int * sort(int b[], int n)
{
    int i, j, temp, index, min;
    for(i=0; i<n; i++)
    {
        min=b[i];
        for(j=i; j<n; j++)
        {
            if(b[j]<=min)
            {
                min=b[j];
                index=j;
            }
        }
        temp=b[i];
        b[i]=min;
        b[index]=temp;
    }
    return b;
}


int uniquecount(int b[], int n)
{
    int i, count=0;
    for(i=0; i<n; i++)
    {
        if(b[i]!=b[i+1])
            count++;
    }
    return count;
}