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
        bool isEmpty();
        bool isFull();
        void insert(int);
        int getRear();
        int getFront();
        void del();
        ~Queue();
        int count();

        Queue& operator=(Queue &);

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

}

bool Queue::isEmpty()
{
    return rear==-1;
}

int Queue::count()
{
    if(isEmpty())
        return 0;
    if(front<=rear)
        return rear-front+1;
    return capacity-front+rear+1;

    // OR
    // if(front==-1)
    //     return 0;
    // int c=0;
    // int i=front;
    // while(i!=rear)
    // {
    //     if(i==capacity-1)
    //         i=0;
    //     else
    //         i++;
    //     c++;
    // }
    // return c+1;
}

bool Queue::isFull()
{
    return (front==0&&rear==capacity-1) || front==rear+1;
}

void Queue::insert(int data)
{
    if(isFull())
        cout<<"\nQueue Overflow.";
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

int Queue::getRear()
{
    if(!isEmpty())
        return ptr[rear];
    cout<<"\nQueue is Empty.";
    return -1;
}

int Queue::getFront()
{
    if(!isEmpty())
        return ptr[front];
    cout<<"\nQueue is Empty.";
    return -1;
}

void Queue::del()
{
    if(isEmpty())
        cout<<"\nQueue is Empty.";
    else if(front==rear)
        front=rear=-1;
    else if(front==capacity-1)
        front=0;
    else
        front++;
}

Queue::~Queue()
{
    delete []ptr;
}


Queue& Queue:: operator=(Queue &Q)
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



