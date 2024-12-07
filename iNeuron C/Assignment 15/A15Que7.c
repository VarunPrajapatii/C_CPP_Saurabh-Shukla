// 7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int finddup(int[], int);
int * sort(int [], int);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], i, ans;
    printf("Enter %d numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ans=finddup(sort(a,n), n);
    printf("Number of duplicates numbers are %d.", ans);
    return 0;
}


int finddup(int b[], int n)
{
    int i, j, count=0;
    for(i=0; i<n; i++)
    {
        if(b[i]==b[i+1])
        {
            count++;
        }
    }
    return count;
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

// Time complexity can be improved if merge/quick sort is used 