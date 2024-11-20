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
    node *last;
    public:
        CLL();
        void insertAtStart(int);
        void insertAtEnd(int);
        node* search(int);
        void insertSpecific(node*, int);
        void delFirst();
        void delLast();
        void delSpecific(node*);
        ~CLL();
};

CLL::CLL()
{
    last=NULL;
}

void CLL::insertAtStart(int data)
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

void CLL::insertAtEnd(int data)
{
    node *n=new node;
    n->item=data;
    if(last)
    {
        n->next=last->next;
        last->next=n;
    }
    else
        n->next=n;
    last=n;
}

node* CLL::search(int data)
{
    if(last)
    {
        node *temp=last->next;
        do
        {
            if(temp->item==data)
                return temp;
            temp=temp->next;
        }while(temp!=last->next);
    }
    else
    {
        cout<<endl<<"List is Empty";
        return NULL;
    }

    //OR
    /*
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
    */
}

void CLL::insertSpecific(node* after, int data)
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

void CLL::delFirst()
{
    if(last)
    {
        node *temp=last->next;
        if(last->next==last)
            last=NULL;
        else
            last->next=temp->next;
        delete temp;
        
    }
}

void CLL::delLast()
{
    if(last)
    {
        node *temp=last;
        while(temp->next!=last)
            temp=temp->next;
        if(temp==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            temp->next=last->next;
            delete last;
            last=temp;
        }
    }
}

void CLL::delSpecific(node *ptr)
{
    if(ptr)
    {
        node *temp=last->next;
        while(temp->next!=ptr)
            temp=temp->next;
        temp->next=ptr->next;
        if(temp==ptr)
            last=NULL;
        else if(ptr==last)
            last=temp;
        delete ptr;
    }
}

CLL::~CLL()
{
    while(last)
        delFirst();
}
