/*
DSA through C++

Assignment-14: Priority Queue

1. Define a class PriorityQueue with node type pointer start as member variable. Implement PriorityQueue using singly linked list. 

2. In question 1, define a constructor to initialise member variable.

3. In question 1, define a method to insert new item in the Priority Queue according to the priority number.

4. In question 1, define a method to delete highest priority element. 

5. In question 1, define a method to get highest priority element

6. In question 1, define a method to get highest priority number.

7. In question 1, define a destructor to deallocate the memory.

8. In question 1, define a method to check if Priority Queue is empty 

9. Define a logic to implement priority queue using 2 dimensional arrays

10. Define a logic to implement min priority queue and max priority queue in the same data structure.
*/


#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int item;
    int pno;
    node *next;
};
class PriorityQueue
{
    private:
        node *start;
    public:
        PriorityQueue();
        void insert(int,int);
        void del();
        int getElement();
        int getHighestPriorityNo();
        ~PriorityQueue();
        bool isEmpty();
};


PriorityQueue::PriorityQueue()
{ start=NULL; }

bool PriorityQueue::isEmpty()
{
    return start==NULL;
}

void PriorityQueue::insert(int data, int num)
{
    node *n=new node;
    n->item=data;
    n->pno=num;
    if(start==NULL)
    {
        start=n;
        n->next=NULL;
    }
    else
    {
        if(start->pno<num)
        {
            n->next=start;
            start=n;
        }
        else
        {
            node *temp=start;
            while(temp->next!=NULL)
            {
                if(temp->next->pno<num)
                {
                    n->next=temp->next;
                    temp->next=n;
                    break;
                }
                temp=temp->next;
            }
        }
    }
}

void PriorityQueue::del()
{
    if(start)
    {
        node *temp=start;
        start=start->next;
        delete temp;
    }
}

int PriorityQueue::getElement()
{
    if(start)
        return start->item;
    return -1;
}

int PriorityQueue::getHighestPriorityNo()
{
    if(start)
        return start->pno;
    return 0;
}

PriorityQueue::~PriorityQueue()
{
    while(start)
    {
        del();
    }
}



