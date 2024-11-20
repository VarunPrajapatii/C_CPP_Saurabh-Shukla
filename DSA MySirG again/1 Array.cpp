/*

DSA through C++

Assignment-1: Array Data Structure

1. Define a class Array to implement array data structure with member variables to store capacity of array, last index of the last filled block of the array and a pointer to hold the address 
of the first block of the dynamically created array.

2. In question 1, define a parameterised constructor to create an array of specified size.

3. In the question 1, add a method to check whether an array is empty or not by returning True or False.

4. In question 1, define a method to append a new element in the array

5. In question 1, define a method to insert a new element at specified index 

6. In question 1, define a method to edit an element at specified index.

7. In question 1, define a method to delete an element at specified index.

8. In question 1, define a method to check if the array is full by returning true or false.

9. In question 1, define a method to get element at specified index.

10. In question 1, define a method to count number of elements present in the array 

11. In question 1, define a destructor to deallocate the memory of array.

12. In question 1, define a method to find an element in the array. Return index if the element found, otherwise return -1.
*/


#include<iostream>
#include<stdio.h>
using namespace std;

class Array
{
    int capacity, lastIndex=-1;
    int *ptr;
    public:
        Array(int);
        Array(Array &);
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int, int);
        void edit(int, int);
        void del(int);
        int get(int);
        int count();
        int find(int);

        void operator=(Array &);

        ~Array();

        int getCapacity();
};

Array::Array(int n)
{
    capacity=n;
    // lastIndex=-1;
    ptr=new int[capacity];
}

Array::Array(Array &arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    ptr=new int[capacity];
    for(int i=0; i<=lastIndex; i++)
        ptr[i]=arr.ptr[i];
}

bool Array::isEmpty()
{
    return lastIndex==-1;
}

bool Array::isFull()
{
    return lastIndex==capacity-1;
}

void Array::append(int data)
{
    if(isFull())
        cout<<endl<<"Array Already Full "<<data<<" cant be added.";
    else
    {
        lastIndex++;
        ptr[lastIndex]=data;
    }
}

void Array::insert(int i, int data)
{
    if(isFull())
        cout<<endl<<"Array Already Full "<<data<<" cant be added at "<<i;
    else if(i<0 || i>lastIndex+1)
        cout<<endl<<"Invalid Index, last index is "<<lastIndex;
    else
    {
        for(int k=lastIndex; k>=i; k--)
            ptr[k+1]=ptr[k];
        ptr[i]=data;
        lastIndex++;
    }
}

void Array::edit(int i, int data)
{
    if(i<0 || i>lastIndex)
        cout<<endl<<"Invalid Index";
    else
        ptr[i]=data;
}

void Array::del(int i)
{
    if(isEmpty())
        cout<<endl<<"Array is Empty.";
    else if(i<0 || i>lastIndex)
        cout<<endl<<"Invalid Index.";
    else
    {
        for(int k=i; k<lastIndex; k++)
            ptr[k]=ptr[k+1];
        lastIndex--;
    }
}

int Array::get(int i)
{
    if(i<0 || i>lastIndex)
    {
        cout<<endl<<"Invalid Index or Empty Array.";
        return -1;
    }
    else
        return ptr[i];
}

int Array::count()
{
    return lastIndex+1;
}

int Array::find(int data)
{
    for(int i=0; i<=lastIndex; i++)
        if(ptr[i]==data)
            return i;
    return -1;
}

void Array::operator=(Array &arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[capacity];
    for(int i=0; i<=lastIndex; i++)
        ptr[i]=arr.ptr[i];
}

Array::~Array()
{
    delete []ptr;
}

int Array::getCapacity()
{
    return capacity;
}

// int main()
// {
//     Array obj(5);
//     if(obj.isEmpty())
//         cout<<"Empty Array";
//     obj.append(20);
//     obj.append(40);
//     obj.append(60);
//     obj.insert(1,30);

//     for(int i=0;i<obj.count();i++)
//         cout<<obj.get(i)<<" ";
//     obj.del(2);
//     cout<<endl;
//     for(int i=0;i<obj.count();i++)
//         cout<<obj.get(i)<<" ";
    
//     cout<<endl;
//     return 0;
// }