//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>

int * sort(int [],int );
void display(int [],int );
int main()
{
    int a[7],i;
    display(sort(a,7),7);

    return 0;
}
int * sort(int b[],int N)
{
    int i,j;
    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<N;i++)
    {
         for(j=0;j<N-i;j++)
         {
             if(b[j]>b[j+1])
             {
                 int temp=b[j];
                 b[j]=b[j+1];
                 b[j+1]=temp;
             }
         }
    }
    return b;
}
void display(int c[],int N)
{
    int i;
    printf("sorted array is : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",c[i]);
    }
}
