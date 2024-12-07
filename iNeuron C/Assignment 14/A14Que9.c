// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.


#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    
    int a[n], i, j, temp;
    printf("Now enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}




            // OR

/*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int a[n], i, temp;
    printf("Now enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n/2; i++)
    {
        temp=a[i];
        a[i]=a[(n-1)-i];
        a[(n-1)-i]=temp;
    }
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}
*/