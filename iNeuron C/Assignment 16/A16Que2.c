// Que2
// 2. Write a program to calculate the product of two matrices each of order 3x3.


#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i,j, temp;
    printf("Enter first matrix terms: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix terms: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }



    for(i=0; i<3; i++)
    {
        temp=0;
        for(j=0; j<3; j++)
        {
            
        }
    }



    printf("Sum of both the matrix are: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d " ,c[i][j]);
        }
        printf("\n");
    }   
}