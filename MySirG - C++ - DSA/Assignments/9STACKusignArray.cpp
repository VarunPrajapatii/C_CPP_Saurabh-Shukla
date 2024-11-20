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


#include "1Array.cpp"
#include<iostream>
using namespace std;

class Stack:private Array
{
    public:
        Stack(int);
        Stack(Stack &);

        void Push(int);
        int Peek();
        void Pop();
        
        ~Stack();
        
        virtual bool CheckFull();
        virtual bool IsEmpty();
        int getStackSize();

        void operator=(Stack &);

};

Stack::Stack(int cap):Array(cap)
{}      //Child class constructor calling parent class constructor

Stack::Stack(Stack &S):Array(S)
{
    // capacity=S.capacity;             //Ye kaam nahi kar sakte, capacity toh access bhi nahi kar sakte toh array mein copy constructor ho.
}


void Stack::Push(int data)
{
    if(CheckFull())
        cout<<endl<<"Stack Overflow";
    else
        Append(data);
}

int Stack::Peek()
{
    if(!IsEmpty())
        return Get(Count()-1);
    else
    {
        cout<<endl<<"Stack is Empty";
        return 0;
    }
}

void Stack::Pop()
{
    if(IsEmpty())
        cout<<endl<<"Stack Underflow";
    else
        Delete(Count()-1);
}


Stack::~Stack()
{
    //Isme kuch bhi nahi karna hai. because ye automatically parent ke destructor ko call karega he karega.
}


bool Stack::CheckFull()
{
    return Array::CheckFull();
}

bool Stack::IsEmpty()
{
    return Array::IsEmpty();
}

int Stack::getStackSize()
{
    return getCapacity();
}

void Stack::operator=(Stack &s)
{
    Array::operator=(s);
}

void PushInStack(Stack &s, Stack &minStack, int data)
{
    s.Push(data);
    if(s.IsEmpty())
        minStack.Push(data);
    else
    {
        if(data>minStack.Peek())
            minStack.Push(minStack.Peek());
        else
            minStack.Push(data);
    }
}

void PopFromStack(Stack &s, Stack &minsStack)
{
    s.Pop();
    minsStack.Pop();
}

void ReverseStack(Stack &s1)
{
    Stack s2(s1.getStackSize());
    while(!s1.IsEmpty())
    {
        s2.Push(s1.Peek());
        s1.Pop();
    }
    s1=s2;          //Deep copy hona chahiye, toh assignment operator ki overloading karni padegi
}





int main()
{
    Stack s(5);
    Stack MinStack(5);
    PushInStack(s, MinStack,50);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PushInStack(s, MinStack,40);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PushInStack(s, MinStack,60);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PushInStack(s, MinStack,70);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PushInStack(s, MinStack,30);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    cout<<endl<<"Popping Starts";
    PopFromStack(s, MinStack);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PopFromStack(s, MinStack);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    PopFromStack(s, MinStack);
    cout<<endl<<"Current min Value is "<<MinStack.Peek();
    // PopFromStack(s, MinStack);
    // cout<<endl<<"Current min Value is "<<MinStack.Peek();
    // PopFromStack(s, MinStack);
    // cout<<endl<<"Current min Value is "<<MinStack.Peek();
    


    // cout<<s.Peek();
    // ReverseStack(s);
    // cout<<endl<<s.Peek();
    cout<<endl;
    return 0;
}
