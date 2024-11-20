/*
DSA through C++

Assignment-9: Stack using arrays

1. Define a class Stack with capacity, top and ptr pointer as member variables. Implement stack using array.

2. In question 1, define a parameterzied constructor to initialise member variables

3. In question 1, define a method to push a new element on to the Stack.

4. In question 1, define a method to peek top element of the stack.

5. In question 1, define a method to pop the top element of the stack.

6. In question 1, define a destructor to deallocates the memory. 

7. In question 1, define a method to check stack overflow

8. In question 1, define a method to check stack underflow. 

9. Define a method to reverse a stack.

10. Define a solution to keep track of minimum value element in the stack
*/


#include<iostream>
#include<stdio.h>

using namespace std;

class Stack
{
    int capacity, top=-1;
    int *ptr;
    public:
        Stack(int n)
        {
            ptr=new int[n];
            capacity=n;
        }
        void Push(int);
        int Peek();
        void Pop();
        
        ~Stack();
        
        bool CheckOverflow();
        bool CheckUnderflow();
        void ReverseStack();
        void UpdateMin();
};



void Stack::Push(int n)
{
    if(top==capacity-1)
        cout<<endl<<"Stack Overflow";
    else
    {
        top++;
        ptr[top]=n;
        UpdateMin();
    }
}

int Stack::Peek()
{
    if(top==-1)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else
        return ptr[top];
}

void Stack::Pop()
{
    if(top==-1)
        cout<<endl<<"Stack Underflow";
    else
        top;
    UpdateMin();

}

Stack::~Stack()
{
    delete []ptr;
}

bool Stack::CheckOverflow()
{
    // if(top>=capacity-1)
    //     cout<<"Overflow";
    return top>=capacity-1;
}

bool Stack::CheckUnderflow()
{
    // if(top==-1)
    //     cout<<"Underflow";
    return top==-1;
}

void Stack::ReverseStack()
{
    int temp;
    for(int i=0; i<=top/2; i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[top-i];
        ptr[top-i]=temp;
    }
}

void Stack::UpdateMin()
{
    static int flag=0, min;
    if(top==0)
    {
        flag=0;
    }
    if(flag==0)
    {
        ptr[0]=min;
        flag=1;
    }
    if(ptr[top]<min)
    {
        min=ptr[top];
    }
}


