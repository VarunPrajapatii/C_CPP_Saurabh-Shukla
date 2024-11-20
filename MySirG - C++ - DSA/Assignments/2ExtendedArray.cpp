/*
DSA through C++

Assignment-2: Problems on Arrays


1. Define a function to sort elements of the array.

2. Define a function to find the greatest element in the array

3. Define a function to find the smallest element in the array

4. Define a function to search an element in the array

5. Define a function to calculate sum of all the elements of an array. 

6. Define a function to calculate average of all the elements of an array. 

7. Define a function to rotate an array towards right by one position

8. Define a function to remove duplicate elements in the array.

9. Define a function to find the second largest element in the array.

10. Define a function to swap elements with specified indices in the array

*/

#include<iostream>
#include "1Array.cpp"
using namespace std;

class ExtendedArray:public Array
{
    public:
        ExtendedArray(int);
        void Sort();
        int Greatest();
        int Smallest();
        int Search(int);
        int CalculateSum();
        float CalculateAverage();
        void RotateRight();
        void RemoveDuplicate();
        int SecondLargest();
        void SwapIndices(int, int);
        void PrintArray();
};


ExtendedArray::ExtendedArray(int n):Array(n){}


void ExtendedArray::Sort()
{
    int i=Count()-1, j;
    while(i!=0)
    {
        for(j=0; j<i; j++)
        {
            if(Get(j)>Get(j+1))
            {
                int temp;
                temp=Get(j);
                Edit(j, Get(j+1));
                Edit(j+1, temp);
            }
        }
        i--;
    }
}


int ExtendedArray::Greatest()
{
    if(IsEmpty())
    {
        cout<<"Array is Empty";
        return -1;
    }
    int i, g=Get(0);
    for(i=1; i<Count(); i++)
        if(Get(i)>g)
            g=Get(i);
    return g;
}

int ExtendedArray::Smallest()
{
    if(IsEmpty())
    {
        cout<<"Array is Empty";
        return -1;
    }
    int i, s=Get(0);
    for(i=1; i<Count(); i++)
    {
        if(Get(i)<s)
        {
            s=Get(i);
        }
    }
    return s;    
}

int ExtendedArray::Search(int n)
{
    for(int i=0; i<Count(); i++)
        if(Get(i)==n)
            return i;
    cout<<endl<<"Not Found";
    return -1;
}

int ExtendedArray::CalculateSum()
{
    int sum=0;
    for(int i=0; i<Count(); i++)
    {
        sum=sum+Get(i);
    }
    return sum;
}

float ExtendedArray::CalculateAverage()
{
    return (float)CalculateSum()/Count();

//     float avg;
//     int sum;
//     sum=CalculateSum();
//     avg=sum/(Count());
//     return avg;
// 
}

void ExtendedArray::RotateRight()
{
    if(!IsEmpty())
    {
        int temp=Get(Count()-1);
        for(int i=Count()-1; i>0; i--)
        {
            Edit(i, Get(i-1));
        }
        Edit(0, temp);
    }
}

void ExtendedArray::RemoveDuplicate()
{
    for(int i=0; i<Count(); i++)
    {
        for(int j=i+1; j<Count(); j++)
        {
            if(Get(i)==Get(j))
            {    
                Delete(j);
                j--; //So that vo j decrement aur increment hoke vahin rahe.
            }
        }
    }
    // Or you can sort and remove duplicates
}

int ExtendedArray::SecondLargest()
{
    int l=Get(0), sl=Get(0);
    if(Count()>=2)
    {
        for(int i=1; i<Count(); i++)
        {
            if(Get(i)>l && Get(i)>sl)
            {
                sl=l;
                l=Get(i);

            }
            else if(Get(i)>sl && Get(i)<l)
            {
                sl=Get(i);
            }
        }
        return sl;
    }
    // Or bubble sort ko do round chalao and return last second.
}

void ExtendedArray::SwapIndices(int i, int j)
{
    if(i>=0&&i<Count() && j<Count()&&j>=0)
    {
        int temp;
        temp=Get(i);
        Edit(i, Get(j));
        Edit(j, temp);
    }
}

void ExtendedArray::PrintArray()
{
    for(int i=0; i<Count(); i++)
        cout<<" "<<Get(i);
}


