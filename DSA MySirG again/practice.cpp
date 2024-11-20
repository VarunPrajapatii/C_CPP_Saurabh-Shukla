#include<stdio.h>
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

int main()
{
    node *a=new node;
    node *b=new node;
    a->item=10;
    b->item=20;
    b->next=NULL;
    a->next=b;
    cout<<"\n"<<a->item;
    cout<<endl<<a;
    cout<<endl<<a->next;
    cout<<endl<<b;
    cout<<endl<<b->next;
    cout<<endl<<b->next->next;
    cout<<endl<<a->next->next;
    return 0;
}