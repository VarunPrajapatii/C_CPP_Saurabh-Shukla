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


#include "1 Array.cpp"
#include<iostream>
using namespace std;

void reverseStack(Stack&);

class Stack:private Array
{
    public:
        Stack(int);
        Stack(Stack&);
        virtual bool stackUnderflow();
        virtual bool stackOverflow();
        void push(int);
        int peek();
        void pop();
        int getStackSize();
        
        ~Stack();

        void operator=(Stack&);
        
};

Stack::Stack(int cap):Array(cap){}

Stack::Stack(Stack &S):Array(S){}

bool Stack::stackUnderflow()
{
    return Array::isEmpty();
}

bool Stack::stackOverflow()
{
    return Array::isFull();
}

void Stack::push(int data)
{
    if(isFull())
        cout<<endl<<"Stack Overflow";
    else
        append(data);
}

int Stack::peek()
{
    if(!isEmpty())
        return get(count()-1);
    else
        cout<<endl<<"Stack Underflow";
    return 0;
}

void Stack::pop()
{
    if(isEmpty())
        cout<<"\nStack Underflow";
    else
        del(count()-1);
}

int Stack::getStackSize()
{
    return getCapacity();
}

Stack::~Stack()
{}

void Stack::operator=(Stack &S)
{
    Array::operator=(S);
}



void reverseStack(Stack &S)
{
    Stack t(S.getStackSize());
    while(!S.stackUnderflow())
    {
        t.push(S.peek());
        S.pop();
    }
    S=t;
}


/*So we have made different push and pop functions which are not member functions of the class
in which we keep track of min value. this method, i find it not good thats why i am copying this exactly 
from my previously made stack data structure.*/
// void pushInStack(Stack &s, Stack &minStack,int data)
// {
//     s.push(data);
//     if(minStack.isEmpty())
//         minStack.push(data);
//     else
//     {
//         if(data> minStack.peek())
//             minStack.push(minStack.peek());
//         else
//             minStack.push(data);
//     }
// }
// void popFromStack(Stack &s, Stack &minStack)
// {
//     s.pop();
//     minStack.pop();
// }




