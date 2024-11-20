/*

DSA Through C++


Assignment-4: Singly Linked List


1. Define a class SLL to implement singly linked list data structure with member variable start pointer of type node.

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
    int item;
    node *next;
};

class SLL
{
    node *start;
    public:
        SLL()
        {start=NULL;}

        void insertAtStart(int);
        void insertAtEnd(int);
        node* search(int);
        void insert(node *, int);
        void delFirst();
        void delLast();
        void delSpecific(node*);
        ~SLL();

};

void SLL::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}

void SLL::insertAtEnd(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    node *temp=start;
    if(start==NULL)
        start=n;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
}

node* SLL::search(int data)
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

void SLL::insert(node *after, int data)
{
    node *n=new node;
    n->item=data;
    n->next=after->next;
    after->next=n;
}

void SLL::delFirst()
{
    if(start)
    {
        node *temp=start;
        start=start->next;
        delete temp;
    }
    else if(start->next==NULL)
    {
        delete start;
        start=NULL;
    }
    else
    {
        cout<<endl<<"Underflow";
    }
}

void SLL::delLast()
{
    node *temp=start;
    while(temp->next->next!=NULL)
        temp=temp->next;
    delete temp->next;
    temp->next=NULL;
}

void SLL::delSpecific(node *ptr)
{
    if(start==NULL)
        cout<<"\nUnderflow";
    else
    {
        if(ptr)
        {
            if(start==ptr)
            {
                start=start->next;
                delete ptr;
            }
            else
            {
                node *temp=start;
                while(temp->next!=ptr)
                    temp=temp->next;
                temp->next=ptr->next;
                delete ptr;
                
            }
        }
    }
}

SLL::~SLL()
{
    while(start)
        delFirst();
}





