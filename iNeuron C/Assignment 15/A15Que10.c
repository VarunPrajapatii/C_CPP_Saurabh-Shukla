// 10. Write a function in C to count the frequency of each element of an array.

#include<stdio.h>

void freq(int [], int);
int sortit (int [], int);


int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n], i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    freq(sortit(a,n), n);
    return 0;
}

int sortit(int a[], int n)
{
    int min=a[0], i, j, index, temp;
    for(i=0; i<n; i++)
    {
        min=a[i];
        for(j=i; j<n; j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                index=j;
            }
        }
        temp= a[i];
        a[i]= min;
        a[index]= temp;
    }
    return &a[0];
}

void freq(int a[], int n)
{
    int i, count, index;
    for(i=0; i<n; i++)
    {
        count=0;
        while(a[i]==a[i+1])
        {
            count++;
            index=i;

        }
        printf("Frequency of %d is %d.\n", a[index], count);
    }
}