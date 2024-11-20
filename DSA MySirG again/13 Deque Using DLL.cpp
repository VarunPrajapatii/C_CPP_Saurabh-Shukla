/*
DSA through C++

Assignment-13: Deque

1. Define a class Deque with node type pointers front and rear as member variables. Implement queue using doubly linked list.

2. In question 1, define a constructor to initialise member variables

3. In question 1, define a method to insert a new element at the front

4. In question 1, define a method to insert a new element at the rear.

5. In question 1, define a method to delete front element

6. In question 1, define a method to delete rear element 

7. In question 1, define a method to get front element.

8. In question 1, define a method to get rear element 

9. In question 1, define a destructor to deallocate the memory.

10. In question 1, define a method to check if deque is empty

*/


#include<stdio.h>
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *prev, *next;
};

class Deque
{
    node *front, *rear;
    public:
        Deque();
        bool isEmpty();
        void insertFront(int);
        void insertRear(int);
        void delFront();
        void delRear();
        node* getFront();
        node* getRear();
        ~Deque();
};

Deque::Deque()
{
    front=rear=NULL;
}

bool Deque::isEmpty()
{
    return front==NULL;
}

void Deque::insertFront(int data)
{
    node *n=new node;
    n->item=data;
    n->prev=NULL;
    n->next=front;
    if(front)
        front->prev=n;
    else
        rear=n;
    front=n;
}

void Deque::insertRear(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    n->prev=rear;
    if(rear)
        rear->next=n;
    else
        front=n;
    rear=n;
}

void Deque::delFront()
{
    if(front)
    {
        node *temp=front;
        front=front->next;
        if(front)
            front->prev=NULL;
        else
            rear=NULL;
        delete temp;
    }
}

void Deque::delRear()
{
    if(rear)
    {
        node *temp=rear;
        rear=rear->prev;
        if(rear)
            rear->next=NULL;
        else
            front=NULL;
        delete temp;
    }
}

node* Deque::getFront()
{
    return front;
}

node* Deque::getRear()
{
    return rear;
}

Deque::~Deque()
{
    while(front)
        delFront();
}


