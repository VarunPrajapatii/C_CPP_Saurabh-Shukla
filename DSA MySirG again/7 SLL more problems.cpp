/*
DSA through C++

Assignment-7: Problems on Linked List

1. Define a method to count number of list items in the singly linked list.

2. Define a method to reverse a singly linked list 

3. Define a method to find middle node of the singly linked list.

4. Define a method to check whether a linked list has a cycle or not.

5. Define a method to count length of the cycle in the linked list

6. Define a method to sort a linked list.

7. Define a method to merge two sorted linked list

8. Define a Polynomial class to implement polynomial using linked list

9. Define a method to add two polynomials.

10. You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order,    
and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list. You may assume the two numbers 
do not contain any leading zero, except the number 0 itself.
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

        int count();
        void reverse();
        node* middle();
        bool checkCycle();
        int cycleLength();
        void swap(node* ,node*);
        void sort();
        void mergeSLL(node*, node*);

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


int SLL::count()
{
    if(start)
    {
        int count=0;
        node *temp=start;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    return 0;
}

void SLL::reverse()
{
    node *t1, *t2, *t3;
    if(start==NULL)
        cout<<endl<<"Linked List Empty";
    else if(start->next==NULL)
    {}
    else
    {
        t1=start;
        t2=t1->next;
        t3=t2->next;
        while(t3!=NULL)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        start->next=NULL;
        start=t2;
    }


    //OR
    /*
        if(start)
    {
        node *p=start;
        while(p->next!=NULL)
            p=p->next;
        while(start!=p)
        {
            InsertAfter(p, start->item);
            DeleteFirst();
        }
    }
    */
}

node* SLL::middle()
{
    if(start==NULL)
        return NULL;
    else if(start->next==NULL)
        return start;
    node *p=start, *q=start->next;
    while(q!=NULL || q->next!=NULL)
    {
        p=p->next;
        q=q->next->next;
    }
    return p;
}   

bool SLL::checkCycle()
{
    node *p=start, *q=start;
    do
    {
        if(q==NULL)
            return false;
        if(q->next==NULL)
            return false;
        else
            q=q->next->next;
        p=p->next;
    }while(p!=q);
    return true;
}

int SLL::cycleLength()
{
    node *p=start, *q=start;
    do
    {
        if(q==NULL)
            return 0;
        if(q->next==NULL)
            return 0;
        else
            q=q->next->next;
        p=p->next;
    }while(p!=q);

    int count=0;
    do
    {
        count++;
        p=p->next;
    } while(p!=q);
    return count;
    
}

void SLL::swap(node *p, node *q)
{
    int temp=p->item;
    p->item=q->item;
    q->item=temp;

}

void SLL::sort()
{
    node *last=start->next, *i=start, *j=start->next;
    if(start->next)
    {   
        while(start!=last)
        {
            while(j==last || j==NULL)
            {
                if(i->item>j->item)
                    swap(i,j);
            }
            last=i;
            i=start;
            j=i->next;
        }
    }

    //OR

    /*
    node *end=start, *max, *p, *min;
    while(end->next!=NULL)
        end=end->next;
    min=start;
    p=start;
    do
    {
        p=p->next;
        if(p->item<min->item)
            min=p;
    } while (p!=end);
    if(min==end)        //Agar min end mein he hua toh hame kuch nahi karna
    {}
    else    //Agar min end mein nahi hua toh min ko end mein shift karenge.
    {
        InsertAfter(end, min->item);
        DeleteSpecific(min);
        end=end->next;
    }
    while(start!=end)
    {
        max=start;
        p=start;
        do
        {
            p=p->next;
            if(p->item>max->item)
                max=p;
        }while(p!=end);
        InsertAfter(end, max->item);
        DeleteSpecific(max);
    }
    */
}

void SLL::mergeSLL(node *s1, node*s2)
{
    node *a=s1, *b=s2;
    
}


















