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

#include "1 Array.cpp"

class ExtendedArray:public Array
{
    public:
        ExtendedArray(int);
        void sort();
        int greatest();
        int smallest();
        int search(int);
        int sum();
        float avg();
        void rotateRight();
        void removeDup();
        int secondLargest();
        void swap(int, int);
        void printArray();

};

ExtendedArray::ExtendedArray(int n):Array(n){}

void ExtendedArray::sort()
{
    int r, i, temp;
    for(r=1; r<=count()-1; r++)
    {
        for(i=0; i<(count()-r); i++)
        {
            if(get(i)>get(i+1))
            {
                temp=get(i);
                edit(i,get(i+1));
                edit(i+1, temp);
            }
        }
    }
}

int ExtendedArray::greatest()
{
    if(isEmpty())
    {
        cout<<endl<<"Array Empty";
        return -1;
    }
    int max=get(0);
    for(int i=1; i<count(); i++)
        if(max<get(i))
            max=get(i);
    return max;
}

int ExtendedArray::smallest()
{
    if(isEmpty())
    {
        cout<<endl<<"Array Empty";
        return -1;
    }
    int min=get(0);
    for(int i=1; i<count(); i++)
        if(min>get(i))
            min=get(i);
    return min;
}

int ExtendedArray::search(int data)
{
    for(int i=0; i<count(); i++)
        if(get(i)==data)
            return i;
    return -1;
}

int ExtendedArray::sum()
{
    if(isEmpty())
    {
        cout<<endl<<"Array Empty";
        return -1;
    }
    else
    {
        int sum=get(0);
        for(int i=1; i<count(); i++)
            sum=sum+get(i);
        return sum;
    }
}

float ExtendedArray::avg()
{
    if(isEmpty())
    {
        cout<<endl<<"Array Empty";
        return -1;
    }
    else
        return (float)sum()/count();
}

void ExtendedArray::rotateRight()
{
    if(!isEmpty())
    {
        if(count()>1)
        {
            int temp=get(0);
            for(int i=0; i<count()-1; i++)
            {
                edit(i, get(i+1));
            }
            edit(count()-1, temp);
        }
    }
    else
        cout<<endl<<"Array Empty.";
}

void ExtendedArray::removeDup()
{
    for(int i=0; i<count(); i++)
    {
        for(int j=i+1; j<count(); j++)
        {
            if(get(i)==get(j))
            {
                del(j);
                j--;
            }
        }
    }
}

int ExtendedArray::secondLargest()
{
    int max1=get(0), max2=get(0);
    for(int i=1; i<count(); i++)
    {
        if(get(i)>max1)
        {
            max2=max1;
            max1=get(i);
        }
    }
    return max2;
    
    //OR    2 rounds of bubblesort

    /*
    int r, temp, i;
    if(count()>=2)
        for(r=1;r<=2;r++)
        {
            for(i=0;i<=count()-1-r;i++)
            {
                if(get(i)>get(i+1))
                {
                    temp=get(i);
                    edit(i,get(i+1));
                    edit(i+1,temp);
                }
            }
        }
    return count()-2;
    */

}

void ExtendedArray::swap(int i, int j)
{
    if((i>=0 && i<count()) && (j>=0 && j<count()))
    {
        int temp=get(i);
        edit(i, get(j));
        edit(j, temp);
    }
    else
        cout<<endl<<"Enter valid Index";
}

void ExtendedArray::printArray()
{
    for(int i=0; i<count(); i++)
        cout<<endl<<" "<<get(i);
}

int main()
{
    ExtendedArray obj(5);
    // if(obj.isEmpty())
    //     cout<<"Empty Array";
    obj.append(3);
    obj.append(6);
    obj.append(5);
    obj.append(9);
    obj.append(7);
    obj.sort();

    for(int i=0; i<5; i++)
    {
        cout<<obj.get(i)<<" ";
    }

    // for(int i=0;i<obj.count();i++)
    //     cout<<obj.get(i)<<" ";
    // obj.del(2);
    // cout<<endl;
    // for(int i=0;i<obj.count();i++)
    //     cout<<obj.get(i)<<" ";
    
    cout<<endl;
    return 0;
}