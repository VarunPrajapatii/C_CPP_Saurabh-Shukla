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
        
        int Count();
        void Reverse();
        node* MiddleNode();
        bool CheckCycle();
        int CycleLength();
        void SortSLL();
        node* MergeSortedSLL(node*, node*);

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


int SLL::Count()
{
    node *temp=start;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void SLL::Reverse()
{
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
}

node* SLL::MiddleNode() 
{
    if(start)
    {
        node *p=start, *q=start;
        while(q->next!=NULL && q!=NULL)
        {
            q=q->next->next;
            p=p->next;
        }
        return p;
    }
}

bool SLL::CheckCycle()
{
    node *p=start, *q=start;
    do
    {
        if(p==NULL)
            return false;
        if(p->next!=NULL)
            p=p->next->next;
        else
            return false;
        q=q->next;
    } while (p!=q);
    return true;
}

int SLL::CycleLength()
{
    node *p=start, *q=start;
    int count=1;
    if(CheckCycle())
    {
        do
        {
            p=p->next->next;
            q=q->next;

        }while(p!=q);
        while (p->next!=q)
        {
            count++;
            p=p->next;
        }
    }
    return count;
}

void SLL::SortSLL()
{
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
}       //one more way that aap do pointers ko leke swap kar sakte values only

node* SLL::MergeSortedSLL(node *a, node *b)
{
    int flag=0;
    node *ll=NULL, *t1=a, *t2=b, *temp=ll;
    while(t1!=NULL || t2!=NULL)
    {
        if(t1->item < t2->item)
        {
            a=a->next;
            if(flag==0)         //for first ever node
            {
                node *n=new node;
                n->item=t1->item;
                n->next=NULL;
                ll=n;
                temp=ll;
                flag=1;
                delete t1;
                t1=a;
            }
            node *n=new node;
            n->item=t1->item;
            n->next=NULL;
            temp->next=n;
            temp=temp->next;
            delete t1;
            t1=a;

        }
        else
        {
            b=b->next;
            if(flag==0)         //for first ever node
            {
                node *n=new node;
                n->item=t2->item;
                n->next=NULL;
                ll=n;
                temp=ll;
                flag=1;
                delete t2;
                t2=b;
            }
            node *n=new node;
            n->item=t2->item;
            n->next=NULL;
            temp->next=n;
            temp=temp->next;
            delete t2;
            t2=b;
        }
    }
    if(t1==NULL)
        temp->next=t2;
    else
        temp->next=t1;

    return ll;

}


class Polynomial
{
    public:
        struct nodee
        {
            int coeff;
            int deg;
            nodee *nxt;
        };
        nodee *s;

        Polynomial();
        void Insert(int, int);
        void add(nodee*, nodee*);
};

Polynomial::Polynomial()
{
    s=NULL;
}

void Polynomial::Insert(int c, int d)
{
    nodee *n=new nodee;
    nodee *t;
    n->coeff=c;
    n->deg=d;
    if(s==NULL)
    {
        n->nxt=NULL;
        s=n;
    }
    else
    {
        t=s;
        if(t->deg < d)
        {
            n->nxt=t;
            s=n;
        }
        else
        {
            nodee *p=t;
            t=t->nxt;
            while(t!=NULL)
            {
                if(t->deg < d)
                {
                    n->nxt=t;
                    p->nxt=n;
                    break;
                }
                p=t;
                t=t->nxt;
            }
            if(t==NULL)
            {
                n->nxt=NULL;
                p->nxt=n;
            }
        }
    }

}

void Polynomial::add(nodee *a, nodee *b)
{
    int flag=0;
    nodee *t1=a, *t2=b, *ll=NULL, *temp=ll;
    while(t1!=NULL || t2!=NULL)
    {
        a=a->nxt;
        b=b->nxt;
        if(t1->deg==t2->deg)
        {
            
        }
        else if(t1->deg > t2->deg)
        {
            
        }
        else if(t1->deg < t2->deg)
        {
            
        }

    }
}