// Que3
// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void sort(int *, int);

int main()
{
    int i;
    int a[10]={5,8,14,30,9,21,16,24,1,17};
    sort(a,10);
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
}

void sort(int *ptr, int size)
{
    int i,j, temp;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }

        }
    }
}