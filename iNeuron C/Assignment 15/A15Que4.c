// 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. 
// (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )


#include<stdio.h>

void arrayrotate(int [], int, int, int);

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
    arrayrotate(a, n, np, d);
    return 0; 
}


void arrayrotate(int a[], int n, int np, int d)
{
    int i, j, k, temp;
    if(d==1)
    {
        for(i=0; i<np; i++)
        {
            for(j=0; j<n-1; j++)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        for(k=0; k<n; k++)
            printf("%d ", a[k]);
    }
    else
    {
        if(d==0)
        {
            for(i=0; i<np; i++)
            {
                for(j=n-1; j>0; j--)
                {
                    temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                }
            }
            for(k=0; k<n; k++)
                printf("%d ", a[k]);
        }
        else
            printf("Enter correct value for direction.");
    }
}