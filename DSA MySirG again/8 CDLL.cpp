/*
DSA through C++

Assignment-8: Circular Doubly Linked List

1. Define a class CDLL to implement Circular Doubly linked list data structure with
member variable start pointer of type node. 

2. In question 1, define a constructor to initialise start pointer with NULL.

3. In question 1, define a method to insert a data into the list at the beginning.

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


class CDLL
{
    node *start;
    public:
        CDLL();
        void insertAtBeg(int);
        void insertAtEnd(int);
        node* search(int);
        void insert(node*, int);
        void delFirst();
        void delLast();
        void del(node*);
};


CDLL::CDLL()
{
    start=NULL;
}

void CDLL::insertAtBeg(int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->next=n;
        n->prev=n;
        start=n;
    }
    else
    {
        n->prev=start->prev;
        start->prev->next=n;
        start->prev=n;
        n->next=start;
        start=n;

    }
}

void CDLL::insertAtEnd(int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->next=n;
        n->prev=n;
        start=n;
    }
    else
    {
        n->prev=start->prev;
        start->prev->next=n;
        n->next=start;
        start->prev=n;
    }
}

node* CDLL::search(int data)
{
    if(start)
    {
        node *temp=start;
        do
        {
            if(temp->item==data)
                return temp;
            temp=temp->next;
        }while(temp!=start);
    }
    return NULL;
}

void CDLL::insert(node *after, int data)
{
    if(start)
    {
        node *n=new node;
        n->item=data;
        n->prev=after;
        n->next=after->next;
        after->next->prev=n;
        after->next=n;
    }
}

void CDLL::delFirst()
{
    if(start)
    {
        node *temp=start;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(start->next==start)
            start=NULL;
        else
            start=temp->next;
        delete temp;
    }
}

void CDLL::delLast()
{
    if(start->next==start)
    {
        delete start;
        start=NULL;     
    }
    else
    {
        node *temp=start->prev;
        temp->prev->next=start;
        start->prev=temp->prev;
        delete temp;
    }
}

void CDLL::del(node *ptr)
{
    if(ptr)
    {
        if(start->next==start)
            start=NULL;
        else
        {
            ptr->prev->next=ptr->next;
            ptr->next->prev=ptr->prev;
            if(ptr==start)
                start=ptr->next;
            delete ptr;
        }
    }

}

CDLL::~CDLL()
{
    while(start!=NULL)
        delFirst();
}

