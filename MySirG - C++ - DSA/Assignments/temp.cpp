#include<iostream>
#include<stdio.h>
using namespace std;


void BubbleSort(int*, int);         //Que1
void ModifiedBubbleSort(int*, int);         //Que2
void InsertionSort(int*, int);          //Que3
void SelectionSort(int*, int);          //Que4
int Partition(int *, int, int);
void QuickSortREC(int *, int, int);     //Que5


void BubbleSort(int *a, int n)
{
    int i, r, temp;
    for(r=1; r<=n-1; r++)
    {
        for(i=0; i<=(n-1-r); i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

void ModifiedBubbleSort(int *a, int n)
{
    int i, r, temp;
    bool flag;
    for(r=1; r<=n-1; r++)
    {
        flag=false;
        for(i=0; i<=(n-1-r); i++)
        {
            if(a[i]>a[i+1])
            {
                flag=true;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        if(flag==false)
            break;
    }
}

void InsertionSort(int *a, int n)
{
    int i, j, temp;
    for(i=1; i<n; i++)
    {
        temp=a[i];
        for(j=i-1; j>=0; j--)
        {
            if(temp<a[j])
            {
                a[j+1]=a[j];
            }
             else
                break;
        }
        a[j+1]=temp;
    }
}

void SelectionSort(int *a, int n)
{
    int min, index;
    for(int i=0; i<n-1; i++)
    {
        min=a[i];
        for(int j=i+1; i<n-1; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                index=j;
            }
        }
        a[index]=a[i];
        a[i]=min;
    }
}

int Partition(int *a, int left, int right)
{
    int loc=left, t;
    while(left<right)
    {
        while(a[right]>=a[loc] && left<right)
            right--;
        if(left==right)
            break;
        t=a[loc];
        a[loc]=a[right];
        a[right]=t;
        loc=right;
        while(a[left]<=a[loc] && left<right)
            left++;
        if(left==right)
            break;
        t=a[left];
        a[left]=a[loc];
        a[loc]=t;
        loc=left;        
    }
    return loc;
}


void QuickSortREC(int *a, int l, int u)
{
    int loc;
    loc=Partition(a, l, u);
    if(loc>l+1)
        Partition(a, l, loc-1);
    if(loc<u-1)
        Partition(a, loc+1, u);
}




int main()
{
    int a[10]={10,50,60,40,80,20,90,30,70};
    QuickSortREC(a, 0, 8);
    for(int i=0; i<9; i++)
    {
        cout<<a[i]<<" ";
    }
}

