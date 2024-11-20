/*
DSA through C++

Assignment-10: Stack using linked list

1. Define a class Stack with node type pointer top as member variable. Implement stack using linked list.

2. In question 1, define a constructor to initialise member variable.

3. In question 1, define a method to push a new element on to the Stack.

4. In question 1, define a method to peek top element of the stack.

5. In question 1, define a method to pop the top element of the stack.

6. In question 1, define a destructor to deallocates the memory.

7. Define a method to reverse a stack.

8. Define a method to check whether a given number is a palindrome or not using stack.

9. Define a method to convert infix to postfix expression.

10. Define a method to evaluate postfix expression.

*/


#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int item;
    node *next;
};

class StackLL
{
    node *top;
    public:
        StackLL();
        bool checkUnderflow();
        void push(int);
        int peek();
        void pop();
        ~StackLL();
        void reverse();
        void operator=(StackLL&);

};


StackLL::StackLL()
{ top=NULL; }

bool StackLL::checkUnderflow()
{
    return top==NULL;
}

void StackLL::push(int data)
{
    node *n=new node;
    n->item=data;
    n->next=top;
    top=n;
}

int StackLL::peek()
{
    if(top)
        return top->item;
    else
    {
        cout<<"\nStack is Empty";
        return -1;
    }
}

void StackLL::pop()
{
    if(top)
    {
        node *temp=top;
        top=top->next;
        delete top;
    }
    else
        cout<<"\nStack is Empty";
}

StackLL::~StackLL()
{
    while(top)
        pop();
}

void StackLL::reverse()
{
    node *t1, *t2;
    if(top && top->next)
    {
        t2=NULL;
        while(top!=NULL)
        {
            t1=top;
            top=top->next;
            t1->next=t2;
            t2=t1;
        }
        top=t2;
    }

    //OR
    /*
    if(top && top->next)        //top==NULL || top->next==NULL
    {
        node *t1, *t2;
        t2=NULL;
        do
        {
            t1=top;
            top=top->next;
            t1->next=t2;
            t2=t1;
        } while (top->next!=NULL);
        top->next=t1;    
    }
    */
}

void StackLL::operator=(StackLL &S)
{
    node *temp=S.top, *t=NULL;
    while(top!=NULL)
        pop();
    while(temp!=NULL)
    {
        node *n=new node;
        n->item=temp->item;
        n->next=t;
        t=n;
        temp=temp->next;
    }
    top=t;
}

void reverseStack(StackLL &S)
{
    StackLL S1;
    while(!S.checkUnderflow())
    {
        S1.push(S.peek());
        S.pop();
    }
    S=S1;
}


















