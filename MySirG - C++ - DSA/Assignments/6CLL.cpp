/*
DSA through C++

Assignment-6: Circular Linked List

1. Define a class CLL to implement Circular linked list data structure with member variable last pointer of type node.

2. In question 1, define a constructor to initialise last pointer with NULL.

3. In question 1, define a method to insert a data into the list at the beginning. 

4. In question 1, define a method to insert a data into the list at the end.

5. In question 1, define a method to search a node with the give item.

6. In question 1, define a method to insert a data into the list after the specified node of the list.

7. In question 1, define a method to delete first node from the list.

8. In question 1, define a method to delete last node of the list. 

9. In question 1, define a method to delete a specific node.

10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list..
*/

#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int item;
    node *next;
};


class CLL
{
    private:
        node *last;
    public:
        CLL()
        {
            last=NULL;
        }

        void InsertBeg(int);
        void InsertEnd(int);
        node* Search(int);
        void InsertSpecific(node*, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteSpecific(node *);
        ~CLL();
};
 

void CLL::InsertBeg(int data)
{
    node *n=new node;
    n->item=data;
    if(last)
    {
        n->next=last->next;
        last->next=n;
        
    }
    else
    {
        n->next=n;
        last=n;
    }
}

void CLL::InsertEnd(int data)
{
    node *n=new node;
    n->item=data;
    if(last)
    {
        n->next=last->next;
        last->next=n;
        last=n;
    }
    else
    {
        n->next=n;
        last=n;
    }
}

node* CLL::Search(int n)
{
    if(last)
    {
        node *temp=last->next;
        if(last->item==n)
            return last;
        while(temp->next!=last)
        {
            if(temp->item==n)
                return temp;
            temp=temp->next;
        }
        return NULL;

        // Or you can use do while loop as sir used in his code.
        // node *temp=last->next;
        // do
        // {
        //     if(temp->item==n)
        //         return temp;
        //     temp=temp->next;
        // }while(temp!=last->next);
    }
}

void CLL::InsertSpecific(node *after, int data)
{
    if(last)
    {
        node *n=new node;
        n->item=data;
        n->next=after->next;
        after->next=n;
        if(after==last)
            last=n;
    }
}

void CLL::DeleteFirst()
{
    if(last==NULL)
        cout<<endl<<"Underflow";
    else
    {
        if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *n=last->next;
            last->next=n->next;
            delete n;
        }
    }
}

void CLL::DeleteLast()
{
    if(last)
    {
        node *t;
        t=last;
        while(t->next!=last)
            t=t->next;
        if(t==last)
        { //single node
            delete last;
            last=NULL;
        }
        else
        {
            t->next=last->next;
            delete last;
            last=t;
        }
    }
}

void CLL::DeleteSpecific(node *temp)
{
    // Sir's code
    if(temp)
    {
        node *t; 
        t=last->next;
        while(t->next!=temp)
            t=t->next;
        t->next=temp->next;
        if(t==temp) //single node
            last=NULL;
        else if(temp==last)
            last=t;
        delete temp;
    }
}

CLL::~CLL()
{
    while(last)
        DeleteFirst();
}



