/*
DSA through C++

Assignment-20: Graph List Representation

1. Define a class Graph to implement linked list representation of graph. Define needful structure for node and class for AdjList.

2. Define appropriate constructors in the classes AdjList and Graph

3. Define appropriate methods to manage linked list in AdjList

4. Define createGraph() method in Graph class to allocate memory for array of AdjList Objects.

5. Define a method addEdge() in Graph class to add a new node in adjacency list.

6. Define destructors in the classes AdjList and Graph

7. Define a method to print graph (print values of adjacency list)

*/


#include<iostream>
#include<stdio.h>
#include "11QueueusingArray.cpp"
#include "9STACK.cpp"
using namespace std;

struct node
{
    int item;
    int vertex;
    node *next;
};


class AdjList
{
    int vertex;     //contains number of vertices
    node *start;
    public:
        AdjList();
        AdjList(int);

        void addNode(int, int);
        void setVertex(int);
        void removeFirstNode();
        void printList();

        int getVertex();
        node* getStart();

        ~AdjList();
};

AdjList::AdjList()
{
    start=NULL;
}

AdjList::AdjList(int v)
{
    start=NULL;
    vertex=v;
}

void AdjList::addNode(int v, int data)
{
    node* n=new node;
    n->item=data;
    n->vertex=v;
    n->next=start;
    start=n;    
}

void AdjList::setVertex(int v)
{
    vertex=v;
}

void AdjList::removeFirstNode()
{
    node *temp;
    if(start)
    {
        temp=start;
        start=start->next;
        delete temp;
    }
}

void AdjList::printList()
{
    node *temp=start;
    while(temp)
    {
        cout<<" ("<<temp->vertex<<","<<temp->item<<") ";
        temp=temp->next;
    }
}

int AdjList::getVertex()
{
    return vertex;
}

node* AdjList::getStart()
{
    return start;
}

AdjList::~AdjList()
{
    while(start)
    {
        removeFirstNode();
    }
}



class Graph
{
    int v_count;
    AdjList *arr;
    public:
        Graph();
        void createGraph(int);
        void printGraph();
        

        void BFS();
        void DFS();

        ~Graph();
};

Graph::Graph()
{
    v_count=0;
    arr=NULL;
}


void Graph::createGraph(int vno)
{
    int n, v, data;
    v_count=vno;
    arr=new AdjList[v_count];
    for(int i=0; i<v_count; i++)
    {
        arr[i].setVertex(i);
        cout<<"\nHow many adjacent nodes of V"<<i<<": ";
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cout<<"\nEnter Vertex Number: ";
            cin>>v;
            cout<<"\nEnter data to store: ";
            cin>>data;
            arr[i].addNode(v, data);

        }
    }
}


void Graph::printGraph()
{
    for(int i=0; i<v_count; i++)
    {
        cout<<endl;
        arr[i].printList();
    }
}


void Graph::BFS()
{
    bool visit[v_count];
    for(int i=0; i<v_count; i++)
        visit[i]=false;
    Queue Q(v_count);
    int source=0;
    Q.insert(0);
    visit[0]=true;
    int n;
    while(!Q.isEmpty())
    {
        n=Q.getFront();
        Q.del();
        cout<<" "<<n;
        node *temp;
        for(int i=0; i<v_count; i++)
        {
            temp=arr[i].getStart();
            while(temp!=NULL)
            {
                if(visit[temp->vertex]==false)
                {
                    Q.insert(temp->vertex);
                    visit[temp->vertex]=true;
                }
            }    
        }
    }
}

void Graph::DFS()
{
    bool visit[v_count];
    for(int i=0; i<v_count; i++)
        visit[i]=false;
    Stack S(v_count);
    int source=0;
    S.Push(0);
    visit[0]=true;
    int n;
    while(!S.CheckUnderflow())
    {
        n=S.Peek();
        S.Pop();
        cout<<" "<<n;
        node *temp;
        for(int i=0; i<v_count; i++)
        {
            temp=arr[i].getStart();
            while(temp!=NULL)
            {
                if(visit[temp->vertex]==false)
                {
                    S.Push(temp->vertex);
                    visit[temp->vertex]=true;
                }
            }    
        }
    }
}


Graph::~Graph()
{
    delete []arr;
}

int main()
{
    Graph G;
    G.createGraph(6);
    G.printGraph();
    return 0;
}


