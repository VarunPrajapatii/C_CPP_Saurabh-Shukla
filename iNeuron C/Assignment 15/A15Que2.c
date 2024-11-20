// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>

int sn(int b[], int n)
{
    int i, min=b[0];
    for(i=0; i<n; i++)
    {
        if(b[i]<=min)
        {
            min=b[i];
        }
    }
    return min;
}


int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n], smallnum;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    smallnum=sn(a, n);
    printf("Smallest number is %d. ", smallnum);

}