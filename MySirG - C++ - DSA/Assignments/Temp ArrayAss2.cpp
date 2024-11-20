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

        bool IsEmpty();
        void Append(int);
        void Insert(int, int);
        void Edit(int, int);
        void Delete(int);
        bool CheckFull();
        int Get(int);
        int Count();
        int Find(int);

        ~Array()
        {
            delete[]ptr;
        }
        
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

};

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

void Array::Sort()
{
    int i=lastIndex, j;
    while(i!=0)
    {
        for(j=0; j<i; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                swap(ptr[j], ptr[j+1]);
            }
        }
        i--;
    }
}

int Array::Greatest()
{
    int i, g=ptr[0];
    if(IsEmpty())
    {
        cout<<"Array is Empty";
        return -1;
    }
    for(i=1; i<=lastIndex; i++)
        if(ptr[i]>g)
            g=ptr[i];
    return g;
}

int Array::Smallest()
{
    int i, s=ptr[0];
    for(i=1; i<=lastIndex; i++)
    {
        if(ptr[i]<s)
        {
            s=ptr[i];
        }
    }
    return s;    
}

int Array::Search(int n)
{
    for(int i=0; i<=lastIndex; i++)
    {
        if(ptr[i]==n)
            return i;
    }
}

int Array::CalculateSum()
{
    int sum=0;
    for(int i=0; i<=lastIndex; i++)
    {
        sum=sum+ptr[i];
    }
    return sum;
}

float Array::CalculateAverage()
{
    float avg;
    int sum;
    sum=CalculateSum();
    avg=sum/(lastIndex+1);
    return avg;
}

void Array::RotateRight()
{
    int temp=ptr[lastIndex];
    for(int i=lastIndex; i<0; i--)
    {
        ptr[i]=ptr[i-1];
    }
    ptr[0]=temp;
}

void Array::RemoveDuplicate()
{
    for(int i=0; i<=lastIndex; i++)
    {
        for(int j=i+1; j<=lastIndex; i++)
        {
            if(ptr[i]==ptr[j])
            {
                Delete(j);
            }
        }
    }
}

int Array::SecondLargest()
{
    int l=ptr[0], sl=ptr[0];
    for(int i=1; i<=lastIndex; i++)
    {
        if(ptr[i]>l && ptr[i]>sl)
        {
            sl=l;
            l=ptr[i];

        }
        else if(ptr[i]>sl && ptr[i]<l)
        {
            sl=ptr[i];
        }
    }
    return sl;
}

void Array::SwapIndices(int i, int j)
{
    int temp;
    temp=ptr[i];
    ptr[i]=ptr[j];
    ptr[j]=temp;
}



void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    Array obj(5);
    if(obj.IsEmpty())
        cout<<"Empty array"<<endl;
    obj.Append(20);
    obj.Append(40);
    obj.Append(60);


    obj.Insert(1, 45);
    obj.Delete(2);
    for(int i=0; i<obj.Count(); i++)
    {
        cout<<obj.Get(i)<<"  ";
    }

    return 0;
}