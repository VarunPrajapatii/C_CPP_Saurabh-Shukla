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
        void Append(int);
        void Insert(int, int);
        void Edit(int, int);
        void Delete(int);
        bool isFull();
        int Get(int);
        int Count();
        int Find(int);

        ~DynArray()
        {
            delete []ptr;
        }

};


DynArray::DynArray(int n)
{
    ptr=new int[n];
    capacity=n;
}

void DynArray::doubleArray()
{
    int *temp;
    capacity*=2;
    temp=new int[capacity];
    for(int i=0; i<=lastIndex; i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}

void DynArray::halfArray()
{
    int *temp;
    capacity/=2;
    temp= new int[capacity];
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

void DynArray::Append(int n)
{
    if(isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex]=n;
}

void DynArray::Insert(int i, int n)
{
    if(i<0 && i>lastIndex+1)
        cout<<endl<<"Invalid Index";
    else
    {
        if(isFull())
            doubleArray();
        for(int x=lastIndex; x>=i; x--)
            ptr[x+1]=ptr[x];
        ptr[i]=n;
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

void DynArray::Edit(int i, int n)
{
    if(i>=0 && i<=lastIndex)
        ptr[i]=n;
    else
        cout<<"Invalid Index";
}

void DynArray::Delete(int i)
{
    int x;
    if(isEmpty())
        cout<<endl<<"Array is Enpty";
    else if(i<0 || i>lastIndex)
        cout<<endl<<"Invalid Index";
    else
    {
        for(x=i; x<lastIndex; x++)
            ptr[x]=ptr[x+1];
        lastIndex--;
        if(capacity/2>=lastIndex+1 && capacity>1)
            halfArray();
    }



    /*
    if(i>=0 && i<=lastIndex)
    {
        
        for(int x=i; x<=lastIndex; x++)
            ptr[x]=ptr[x+1];
        lastIndex--;
        if(capacity/2==lastIndex+1)
            halfArray();
    }
    else if(i==lastIndex)
        {
            lastIndex--;
            if(capacity/2==lastIndex+1)
                halfArray();
        }
    else
        cout<<endl<<"Invalid Index to delete";
    */
}

bool DynArray::isFull()
{
    return lastIndex==capacity-1;
}

int DynArray::Get(int i)
{
    if(i>=0 && i<=lastIndex)
        return ptr[i];
    cout<<"Invalid Index";
    return -1;
}

int DynArray::Count()
{
    return lastIndex+1;
}

int DynArray::Find(int n)
{
    for(int x=0; x<=lastIndex; x++)
    {
        if(ptr[x]==n)
            return x;
    }
    return -1;
}




// int main()
// {

// }