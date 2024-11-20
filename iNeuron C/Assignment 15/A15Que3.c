// 3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
int sortit (int [], int);
void display(int [], int);
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

void display(int b[], int n)
{
    int k;
    for(k=0; k<n; k++)
    {
        printf("%d ", b[k]);
    }
}


int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Now enter %d numbers: ", n);
    int a[n], i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    display(sortit(a, n), n);
}
