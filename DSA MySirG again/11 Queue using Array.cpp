/*
DSA through C++

Assignment-11: Queue using arrays

1. Define a class Queue with capacity, front, rear and ptr pointer as member variables. Implement queue using array.

2. In question 1, define a parameterzied constructor to initialise member variables.

3. In question 1, define a method to insert a new element at the rear in the queue.

4. In question 1, define a method to view rear element of the queue.

5. In question 1, define a method to view front element of the queue. 

6. In question 1, define a method to delete the front element of the queue.

7. In question 1, define a destructor to deallocates the memory.

8. In question 1, define a method to check queue overflow

9. In question 1, define a method to check queue underflow.

10. In question 1, Define a method to count number of elements present in the queue
*/


#include<iostream>
#include<stdio.h>
using namespace std;

class Queue
{
    int capacity, front, rear;
    int *ptr;
    public:
        Queue(int);
        Queue(Queue &);
        bool isFull();
        bool isEmpty();
        void insert(int);
        int getRear();
        int getFront();
        void del();
        ~Queue();

        Queue& operator=(Queue&);
        int count();
};

Queue::Queue(int cap)
{
    capacity=cap;
    front=-1;
    rear=-1;
    ptr=new int[capacity];
}

Queue::Queue(Queue &Q)
{
    capacity=Q.capacity;
    front=Q.front;
    rear=Q.rear;
    int n=Q.count();
    int i=Q.front;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[capacity];
    while(n)
    {
        ptr[i]=Q.ptr[i];
        if(i==capacity-1)
            i=0;
        else
            i++;
        n--;
    }
}

bool Queue::isFull()
{
    return (front==0 && rear==capacity-1) || rear+1==front;
}

bool Queue::isEmpty()
{
    return rear==-1;
}

void Queue::insert(int data)
{
    if(isFull())
        cout<<"\nQueue is Full";
    else if(isEmpty())
    {
        front=rear=0;
        ptr[rear]=data;
    }
    else if(rear==capacity-1)
    {
        rear=0;
        ptr[rear]=data;
    }
    else
    {
        rear++;
        ptr[rear]=data;
    }
}

int Queue::getFront()
{
    if(isEmpty())
        return ptr[front]; 
    cout<<"\nQueue is Empty";
    return -1;
}

int Queue::getRear()
{
    if(!isEmpty())
        return ptr[rear];
    cout<<"\nQUeue is Empty";
    return -1;
}

void Queue::del()
{
    if(isEmpty())
        cout<<"\nQueue is Empty";
    else if(rear==front)
        rear=front=-1;
    else if(front==capacity-1)
        front=0;
    else
        front++;
}

Queue::~Queue()
{
    delete []ptr;
}

int Queue::count()
{
    if(isEmpty())
        return 0;
    if(front<=rear)
        return rear-front+1;
    return capacity-front+rear+1;
}

Queue& Queue::operator=(Queue &Q)
{
    capacity=Q.capacity;
    front=Q.front;
    rear=Q.rear;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[capacity];
    int n=Q.count();
    int i=Q.front;
    while(n)
    {
        ptr[i]=Q.ptr[i];
        if(i==capacity-1)
            i=0;
        else
            i++;
        n--;
    }
    return Q;
}






