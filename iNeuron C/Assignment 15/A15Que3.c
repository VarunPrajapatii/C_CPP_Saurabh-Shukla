// 3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
void sortit(int [], int );
void display(int [], int);
void sortit(int a[], int n)
{
    int i, j, index, temp;
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        
        if (index != i)
        {
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
    }
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
