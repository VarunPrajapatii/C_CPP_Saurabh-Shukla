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
        DLL()
        {
            start=NULL;
        }

        void InsertAtStart(int);
        void InsertAtEnd(int);
        node* Search(int);
        void InsertAfter(node*, int);
        void DeleteFirstNode();
        void DeleteLastNode();
        void DeleteSpecific(node *);

        ~DLL();


};

void DLL::InsertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->prev=NULL;
    n->next=start;
    if(start)
        start->prev=n;
    start=n;
}

void DLL::InsertAtEnd(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
    {
        n->prev=NULL;
        start=n;
    }
    else
    {
        node *temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
        n->prev=temp;
    }
}

node* DLL::Search(int n)
{
    node *temp=start;
    while(temp!=NULL)
    {
        if(temp->item==n)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

void DLL::InsertAfter(node *after, int data)
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

void DLL::DeleteFirstNode()
{
    if(start)
    {
        node *temp=start;
        start=temp->next;
        if(temp->next)
            start->prev=NULL;
        delete temp;
    }
}

void DLL::DeleteLastNode()
{
    if(start)
    {
        node *temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        if(temp->prev)
            temp->prev->next=NULL;
        else
            start==NULL;
        delete temp;
    }
}

void DLL::DeleteSpecific(node *temp)
{
    if(temp->prev)
        temp->prev->next=temp->next;
    else
        start=temp->next;
    if(temp->next)0
        temp->next->prev=temp->prev;
    delete temp;
}

DLL::~DLL()
{
    while(start)
        DeleteFirstNode();
}



