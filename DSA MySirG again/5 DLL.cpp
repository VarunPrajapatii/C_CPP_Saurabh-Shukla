/*
DSA through C++

Assignment-5: Doubly Linked List

1. Define a class DLL to implement doubly linked list data structure with member variable start pointer of type node.

2. In question 1, define a constructor to initialise start pointer with NULL.

3. In question 1, define a method to insert a data into the list at the beginning

4. In question 1, define a method to insert a data into the list at the end

5. In question 1, define a method to search a node with the give item.

6. In question 1, define a method to insert a data into the list after the specified node of the list.

7. In question 1, define a method to delete first node from the list.

8. In question 1, define a method to delete last node of the list.

9. In question 1, define a method to delete a specific node.

10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.

*/



#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    node *prev;
    int item;
    node *next;
};

class DLL
{
    node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtEnd(int);
        node* search(int);
        void insert(node*, int);
        void delFirst();
        void delLast();
        void delSpecific(node*);
        ~DLL();
};

DLL::DLL()
{start=NULL;}

void DLL::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->prev=NULL;
    n->next=start;
    if(start)
        start->prev=n;
    start=n;
}

void DLL::insertAtEnd(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start)
    {
        node *temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
        n->prev=temp;
    }
    else
    {
        n->prev=NULL;
        start=n;
    }

}

node* DLL::search(int data)
{
    node *temp=start;
    while(temp!=NULL)
    {
        if(temp->item==data)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

void DLL::insert(node *after, int  data)
{
    if(after)
    {
        node *n=new node;
        n->item=data;
        n->prev=after;
        n->next=after->next;
        if(after->next)
            after->next->prev=n;
        after->next=n;
    }
}

void DLL::delFirst()
{
    if(start)
    {
        node *temp=start;
        start=start->next;
        if(start)
            start->prev=NULL;
        delete temp;
    }
}

void DLL::delLast()
{
    if(start)
    {
        node *temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        if(temp->prev)
            temp->prev->next=NULL;
        else
            start=NULL;
        delete temp;
    }
}

void DLL::delSpecific(node *ptr)
{
    if(ptr->prev)
        ptr->prev->next=ptr->next;
    else
        start=ptr->next;
    if(ptr->next)
        ptr->next->prev=ptr->prev;        
    delete ptr;
}

DLL::~DLL()
{
    while(start)
        delFirst();
}
