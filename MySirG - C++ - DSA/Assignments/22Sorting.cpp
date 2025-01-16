/*

DSA Through C++

Assignment-22: Sorting

1. Define a function to implement bubble sort.

2. Define a function to implement modified bubble sort to achieve O(n) time complexity in best case.

3. Define a function to implement insertion sort.

4. Define a function to implement selection sort.

5. Define a function to implement quick sort using recursion.

6. Define a function to implement quick sort using iteration.

7. Define a function to implement merge sort using recursion.

8. Define a function to implement merge sort using iteration.

9. Define a class Employee with emp_id, name, salary as instance variables. Provide setters and getters in the class to 
access instance variables. Also define a function to sort Employee Array data by salary. Use Merge Sort.

10. In question-9, define a function to sort Employee Array data by name. Use Quick Sort

*/


#include<iostream>
#include<stdio.h>
using namespace std;


void bubbleSort(int*, int);
void modifiedBubbleSort(int*, int);
void insertionSort(int*, int);
void selectionSort(int*, int);
int* quickSortREC(int*, int, int);
int partition(int*, int, int);




void bubbleSort(int *a, int n)
{
    int round,i, temp;
    for(round=0; round<n-1; n++)
    {
        for(i=0; i<n-round; i++)
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

void modifiedBubbleSort(int *a, int n)
{
    int round,i, temp;
    bool flag;
    for(round=0; round<n-1; n++)
    {
        flag=false;
        for(i=0; i<n-round; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=true;
            }
        }
        if(flag==false)
            break;
    }
}

void insertionSort(int *a, int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp=a[i];
        for(j=i-1; j>=0; j--)
        {
            if(a[j]>temp)
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=temp;
    }
}

void selectionSort(int *a, int n)
{
    int min=a[0], index;
    for(int i=0; i<n-1; i++)
    {
        index=i;
        min=a[i];
        for(int j=i+1; j<n; j++)
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

int* quickSortREC(int *a, int p, int q)
{
    int m;
    if(p==q)
    {
        // return a;
    }
    else
    {
        m=partition(a, p, q);
        quickSortREC(a, p, m-1);
        quickSortREC(a, m+1, q);
        // return a;
    }
}

int partition(int *a, int p, int q)
{
    int i=p, j, x=p, temp;
    for(j=p+1; j<=q; j++)
    {
        if(a[j]<a[x])
        {
            i++;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
    return i;
}




// MERGE SORT
// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int start, int mid, int end) {
//     vector<int> temp(end-start+1);
//     int i=start, j=mid+1, index=0;
//     while(i<=mid && j<=end) {
//         if(arr[i] <= arr[j]) {
//             temp[index] = arr[i];
//             i++;
//         } else {
//             temp[index] = arr[j];
//             j++;
//         }
//         index++;
//     }
//     while(i <= mid) {
//         temp[index] = arr[i];
//         i++;
//         index++;
//     }

//     while(j <= end) {
//         temp[index] = arr[j];
//         j++;
//         index++;
//     }
//     index=0;
//     while(start<=end) {
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// void mergeSort(vector<int> &arr, int start, int end) {
//     if(start >= end) return;
//     int mid = start + (end-start)/2;
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid+1, end);
//     merge(arr, start, mid, end);
// }


// int main() {
//     vector<int> nums={6,3,5,2,2,8,1,3,2,9};
//     mergeSort(nums, 0, nums.size()-1);
//     for(int i=0; i<nums.size(); i++) {
//         cout<<nums[i]<<" ";
//     }
//     return 1;
// }