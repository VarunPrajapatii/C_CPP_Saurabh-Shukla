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
    int capacity, top=-1, *ptr;
    public:
        Stack(int);
        bool checkUnderflow();
        bool checkOverflow();
        void push(int);
        int peek();
        void pop();
        ~Stack();

        void reverse();
};

Stack::Stack(int cap)
{
    capacity=cap;
    ptr=new int[cap];
}

bool Stack::checkOverflow()
{ return top>=capacity-1;}

bool Stack::checkUnderflow()
{ return top==-1; }

void Stack::push(int data)
{
    if(!checkOverflow())
    {
        top++;
        ptr[top]=data;
    }
    else
        cout<<endl<<"Stack Overflow";
}

int Stack::peek()
{
    if(!checkOverflow())
        return ptr[top];
    else
    {
        cout<<endl<<"Stack Underflow.";
        return 0;
    }
}

void Stack::pop()
{
    if(!checkUnderflow())
        top--;
    else
        cout<<"\nStack Underflow";
}

Stack::~Stack()
{delete []ptr;}

//reverse cant be made a member function, atleast i am not able to think of it, so in next file i have made
//this ds again with the help of array ds and there i have made these functions


