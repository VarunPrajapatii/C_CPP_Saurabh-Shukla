/*
DSA through C++

Assignment-12: Queue using linked list

1. Define a class Queue with node type pointers front and rear as member variables. Implement queue using Singly linked list.

2. In question 1, define a constructor to initialise member variable.

3. In question 1, define a method to insert a new element at the rear in the queue.

4. In question 1, define a method to view rear element in the queue.

5. In question 1, define a method to view front element in the queue. 

6. In question 1, define a method to delete the front element of the queue.

7. In question 1, define a destructor to deallocates the memory.

8. In question 1, define a method to count number of elements present in the queue. 

9. Write a program to sort a queue, using queue operations only.

10. Write a program to sort a queue in descending order, using queue operations only.

*/


#include<stdio.h>
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};
class Queue
{
    node *front, *rear;
    public:
        Queue();
        void insert(int);
        bool isEmpty();
        node* getRear();
        node* getFront();
        void del();
        ~Queue();
        int count();
};


Queue::Queue()
{
    front=rear=NULL;
}

void Queue::insert(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(isEmpty())
        front=rear=n;
    else
    {
        rear->next=n;
        rear=n;
    }
}

bool Queue::isEmpty()
{
    return rear==NULL;
}

node* Queue::getRear()
{
    return rear;
}

node* Queue::getFront()
{
    return front;
}

void Queue::del()
{
    if(!isEmpty())
    {
        node *temp=front;
        front=front->next;
        if(front==NULL)
            rear=NULL;
        delete temp;        
    }
}

Queue::~Queue()
{
    while(!isEmpty())
        del();
}

int Queue::count()
{
    node *t=front;
    int c=0;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;

}



