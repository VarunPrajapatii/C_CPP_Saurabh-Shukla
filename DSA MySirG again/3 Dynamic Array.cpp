/*
DSA Through C++

Assignment-3: Dynamic Arrays

1. Define a class DynArray to implement dynamic array data structure with member variables to store capacity of array, 
   last index of the last filled block of the array and a pointer to hold the address of the first block of the dynamically created array. 

2. In question 1, define a parameterised constructor to create an array of specified size 

3. In question 1, define a method doubleArray() to increase the size of the array by double of its size 

4. In question 1, define a method halfArray() to decrease the size of the array by half of its size

5. In question 1, define a method which returns the current capacity of the array. 
 
6. In question 1, add a method to check whether an array is empty or not by returning True or False. 

7. In question 1, define a method to append a new element in the array 

8. In question 1, define a method to insert a new element at specified index

9. In question 1, define a method to edit an element at specified index. 

10. In question 1, define a method to delete an element at specified index. 

11. In question 1. define a method to check if the array is full by returning true or false.

12 In question 1, define a method to get element at specified index.

13. In question 1, define a method to count number of elements present in the array 

14. In question 1, define a destructor to deallocate the memory of array 

15. In question 1, define a method to find an element in the array. Return index if the element found, otherwise return -1.
*/


#include<iostream>
#include<stdio.h>
using namespace std;

class DynArray
{
    int capacity, lastIndex=-1, *ptr;
    public:
        DynArray(int);
        void doubleArray();
        void halfArray();
        int ArrayCapacity();
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int, int);
        void edit(int, int);
        void del(int);
        int get(int);
        int count();
        int find(int);
        ~DynArray();

};

DynArray::DynArray(int cap)
{
    capacity=cap;
    ptr=new int[capacity];
}

void DynArray::doubleArray()
{
    int *temp=new int[capacity*2];
    capacity*=2;
    for(int i=0; i<=lastIndex; i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}

void DynArray::halfArray()
{
    capacity/=2;
    int *temp=new int[capacity];
    for(int i=0; i<=lastIndex; i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}

int DynArray::ArrayCapacity()
{
    return capacity;
}

bool DynArray::isEmpty()
{
    return lastIndex==-1;
}

bool DynArray::isFull()
{
    return lastIndex==capacity-1;
}

void DynArray::append(int data)
{
    if(isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex]=data;
}

void DynArray::insert(int index, int data)
{
    if(index<0 && index>lastIndex)
        cout<<endl<<"Enter Valid Index.";
    else
    {
        if(isFull())
            doubleArray();
        for(int i=lastIndex+1; i>index; i--)
            ptr[i]=ptr[i-1];
        ptr[index]=data;
        lastIndex++;
    }
    /*
    if(i>=0 && i<lastIndex)
    {
        int x=lastIndex;
        for(int x=lastIndex; x>=i; x--)
            ptr[x+1]=ptr[x];
        ptr[i]=n;
        lastIndex++;
    }
    else if(i==lastIndex && lastIndex<capacity-1)
    {
        ptr[lastIndex+1]=ptr[lastIndex];
        ptr[lastIndex]=n;
        lastIndex++;
    }
    else if(i==lastIndex && lastIndex==capacity-1)
    {
        doubleArray();
        ptr[lastIndex+1]=ptr[lastIndex];
        ptr[lastIndex]=n;
        lastIndex++;
    }
    else
        cout<<"Invalid Index";
    */
}

void DynArray::edit(int index, int data)
{
    if(index>=0 && index<=lastIndex)
        ptr[index]=data;
    else
        cout<<endl<<"Invalid Index";
}

void DynArray::del(int index)
{
    if(isEmpty())
        cout<<endl<<"Array is Empty";
    else if(index<0 || index>lastIndex)
        cout<<endl<<"Invalid Index";
    else
    {
        for(int i=index; i<lastIndex; i--)
            ptr[i]=ptr[i+1];
        lastIndex--;
        if(capacity/2>=lastIndex+1 && capacity>1)
            halfArray();
    }
}

int DynArray::get(int index)
{
    if(isEmpty())
    {
        cout<<endl<<"Array is Empty";
        return -1;
    }
    else
    {
        if(index>=0 && index<=lastIndex)
            return ptr[index];
        else
        {
            cout<<endl<<"Invalid Index";
            return -1;
        }
    }
}

int DynArray::count()
{
    return lastIndex+1;
}

int DynArray::find(int data)
{
    if(isEmpty())
    {
        cout<<endl<<"Array is Empty";
        return -1;
    }
    else
    {
        for(int i=0; i<lastIndex; i++)
            if(ptr[i]==data)
                return i;
        return -1;
    }
}

DynArray::~DynArray()
{
    delete []ptr;
}

int main()
{
    return 0;
}