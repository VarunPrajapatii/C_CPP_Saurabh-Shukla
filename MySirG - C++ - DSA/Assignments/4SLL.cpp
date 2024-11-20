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
        {
            start=NULL;
        }

        void InsertBeg(int);
        void InsertEnd(int);
        node* Search(int);
        void InsertAfter(node *, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteSpecific(node*);

        ~SLL();
        
};

void SLL::InsertBeg(int data)  
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}

void SLL::InsertEnd(int data)
{
    node *t=start;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
        start=n;
    else
    {
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }


    // if(start!=NULL)
    // {
    //     node *p=start;
    //     while(p->next!=NULL)
    //         p=p->next;
    //     p->next=new node;
    //     p=p->next;
    //     p->item=data;
    //     p->next=NULL;
    // }
    // else
    // {
    //     start=new node;
    //     start->item=data;
    //     start->next=NULL;
    // }
}

node* SLL::Search(int data)
{
    node *t;
    t=start;
    while(t!=NULL)          //as if we write t->next!=NULL  in condition then it wont check last node
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    return NULL;

    // int count=0;
    // node *p=start;
    // while(p->next!=NULL)
    // {
    //     if(p->item==data)
    //         return count;
    //     count++;
    //     p=p->next;
    // }
    // return -1;
}

void SLL::InsertAfter(node *ptr, int data)
{
    /*Sir's logic takes 2 values one is the node address after which new node is
    being inserted and second is an int which is the data for the inserted node.*/
    
    node *n=new node;
    n->item=data;
    n->next=ptr->next;
    ptr->next=n;
    // Sir's logic is more practical as you can do InsertAfter(Search(35), 45);

    // My logic takes 2 int values first is the one after which node is inserted
    // and second is the data for the inserted node
    // node *p=start, *temp;
    // while(p->next!=NULL)
    // {
    //     if(p->item==n)
    //     {
    //         temp=p->next;
    //         p->next=new node;
    //         p=p->next;
    //         p->item=data;
    //         p->next=temp;
    //     }
    // }
    // if(p->next==NULL)
    // {
    //     cout<<endl<<"No Match in list";
    // }
}

void SLL::DeleteFirst()
{
    node *temp;
    if(start)
    {
        temp=start;
        start=start->next;
        delete temp;
    }
}

void SLL::DeleteLast()
{
    node *p=start, *temp;
    if(start==NULL)
    {
        cout<<"\nUnderflow";
    }
    else if(start->next==NULL)
    {
        p=start;
        delete p;
        p=NULL;
    }
    else
    {
        while(p->next!=NULL)
        {
            temp=p;
            p=p->next;
        }
        temp->next=NULL;
        delete p;
    }
    // or you can do with only one pointer p->next->next==NULL condition. But you have to 
    // handle case in which start->next==NULL;
}

void SLL::DeleteSpecific(node *temp)
{
    node *t;
    if(start==NULL)
        cout<<endl<<"Underflow";
    else 
    {
        if(temp)
        {
            if(start==temp)
            {
                start=temp->next;
                delete temp;
            }
            else
            {
                t=start;
                while(t->next!=temp)
                    t=t->next;
                t->next=temp->next;
                delete temp;
            }
        }
    }



    /*Again my logic was to delete node with item as n.*/
    // node *p=start, *temp;
    // while(p->next!=NULL)
    // {
    //     if(p->item==n)
    //     {
    //         temp->next=p->next;
    //         delete p;
    //     }
    //     else
    //     {
    //         temp=p;
    //         p=p->next;
    //     }
    // }

}

SLL::~SLL()
{
    // Tumne agar iss class mein destructor nahi banaya toh samjho blunder kar diya.
    // node *p=start->next, *temp;
    // while(p->next!=NULL)
    // {
    //     temp=p;
    //     p=p->next;
    //     delete temp;
    // }
    // delete p;
    // start=NULL;

    while(start)
        DeleteFirst();
}


