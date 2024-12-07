// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10], i, j, min, temp, minIndex;
    printf("Enter 10 positive numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++)
    {
        min=a[i];
        minIndex=i;
        for(j=i; j<10; j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                minIndex=j;
            }
        }
        temp=a[i];
        a[i]=min;
        a[minIndex]=temp;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

// That was Selection Sort