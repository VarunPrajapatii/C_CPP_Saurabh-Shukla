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
using namespace std;

class Array
{
    int capacity, lastIndex=-1, *ptr;
    public:
        Array(int n)
        {
            capacity=n;
            ptr=new int[n];
            // lastIndex=-1;
        }

        Array(Array &);

        bool IsEmpty();
        void Append(int);
        void Insert(int, int);
        void Edit(int, int);
        void Delete(int);
        bool CheckFull();
        int Get(int);
        int Count();
        int Find(int);
        int getCapacity();


        void operator=(Array &);

        ~Array()
        {
            delete[]ptr;
        }
};

Array::Array(Array &arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    ptr=new int[capacity];
    for(int i=0; i<=lastIndex; i++)
        ptr[i]=arr.ptr[i];
}



bool Array::IsEmpty()
{
    return lastIndex==-1;
}


void Array::Append(int n)
{
    if(lastIndex==capacity-1)
        cout<<endl<<"Array is already Full";
    else
    {
        lastIndex++;
        ptr[lastIndex]=n;
    }
}

void Array::Insert(int i, int n)
{
    if(i<lastIndex)
    {
        int x=lastIndex;
        while(x!=i-1)
        {
            ptr[x+1]=ptr[x];
            x--;
        }
        ptr[i]=n;
        lastIndex++;
    }
    else if(i==lastIndex && lastIndex<capacity-1)
    {
        ptr[lastIndex+1]=ptr[lastIndex];
        ptr[lastIndex]=n;
        lastIndex++;
    }
    else
        cout<<endl<<"Invalid Index";
}

void Array::Edit(int i, int n)
{
    if(i>=0 && i<=lastIndex)
        ptr[i]=n;
    else
        cout<<endl<<"Invalid Index";
}

void Array::Delete(int i)
{
    if(i>=0 && i<=lastIndex)
    {
        // int x=i;
        while(i!=lastIndex)
        {
            ptr[i]=ptr[i+1];
            i++;
        }
        lastIndex--;
    }
    else
        cout<<endl<<"Invalid Index";

}

bool Array::CheckFull()
{
    return lastIndex==capacity-1;
}

int Array::Get(int i)
{
    if(i>=0 && i<=lastIndex)
        return ptr[i];
    cout<<endl<<"Invalid Index or empty array";
    return -1;
}

int Array::Count()
{
    return lastIndex+1;
}

int Array::Find(int n)
{
    int x=0;
    while(x<=lastIndex)
    {
        if(ptr[x]==n)
        {
            return x;
        }
        x++;
    }
    return -1;
}

int Array::getCapacity()
{
    return capacity;
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

// int main()
// {
//     Array obj(5);
//     if(obj.IsEmpty())
//         cout<<"Empty array"<<endl;
//     obj.Append(20);
//     obj.Append(40);
//     obj.Append(60);


//     obj.Insert(1, 45);
//     obj.Delete(2);
//     for(int i=0; i<obj.Count(); i++)
//     {
//         cout<<obj.Get(i)<<"  ";
//     }

//     return 0;
// }