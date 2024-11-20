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

int len(int);
void reverse(StackLL &);
bool isPalindrome(int);

struct node
{
    int item;
    node *next;
};

class StackLL
{
    node *top;
    public:
        StackLL()
        {
            top==NULL;
        }
        StackLL(StackLL &);

        void push(int);
        int peek();
        void pop();
        ~StackLL();
        void reverse();
        bool isEmpty();
        void operator=(StackLL &);
};

StackLL::StackLL(StackLL &S)
{
    node *t, *n, *p=NULL;
    t=S.top;
    while(t)
    {
        n=new node;
        n->item=t->item;
        if(top==NULL)
            top=n;
        else
            p->next=n;
        t=t->next;
        p=n;
    }
    if(p!=NULL)
        p->next=NULL;
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
    if(top==NULL)
    {
        cout<<"Stack Empty";
        return 0;
    }
    else
        return top->item;
}

void StackLL::pop()
{
    if(top==NULL)
        cout<<"Stack Empty";
    else
    {
        node *temp=top;
        top=top->next;
        delete temp;
    }
}

StackLL::~StackLL()
{
    while(top!=NULL)
        pop();
}

void StackLL::reverse()
{
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
}

bool StackLL::isEmpty()
{
    return top==NULL;
}

void StackLL::operator=(StackLL &S)
{
    node *t,*n,*p=NULL;
    t=S.top;
    while(t)
    {
        n=new node;
        n->item=t->item;
        if(top==NULL)
            top=n;
        else
            p->next=n;
        t=t->next;
        p=n;
    }
    if(p!=NULL)
        p->next=NULL;
}


void reverse(StackLL &s1)
{
    StackLL s2;
    while(!s1.isEmpty())
    {
        s2.push(s1.peek());
        s1.pop();
    }
    s1=s2;
}

bool isPalindrome(int n)
{
    StackLL s;
    int l=len(n);
    int i=l/2, temp;
    while(i)
    {
        s.push(n%10);
        n/=10;
        i--;
    }
    if(l%2!=0)
    {n/=10;}
    while(n)
    {
        if(n%10!=s.peek())
        {
            return false;
        }
        s.pop();
        n/=10;
    }
    return true;
}

int len(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}










