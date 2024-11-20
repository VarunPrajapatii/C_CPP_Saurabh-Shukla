// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int a[10], i, min;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    min=a[0];
    for (i=0; i<10; i++)
    {
        if (a[i]<=min)
        {
            min=a[i];
        }
        
    }
    printf("Smallest number is %d.", min);
    
}