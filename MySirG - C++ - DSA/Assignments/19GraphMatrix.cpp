/*
DSA through C++

Assignment-19: Graph Matrix

1. Define a class Graph using matrix representation with v_count, e_count and adjpointer as instance members.

2. In Question 1, define a method createGraph() to create and store adjacent node information.

3. In question 1, define a method to print graph matrix.

4. In question 1, define a method to print all the adjacent nodes of a given node.

5. In question 1, define a method to check if a given node is isolated node.

6. In question 1, define a destructor to deallocates memory

*/


#include<iostream>
#include<stdio.h>
#include "11QueueusingArray.cpp"
#include "3DynArray.cpp"
#include "9STACK.cpp"
using namespace std;

class GraphMatrix
{
    int v_count;
    int e_count;
    int **adj;
    public:
        void createGraph(int, int);
        void printMatrix();
        void printAdjacentNodes(int);
        bool checkIsolated(int);

        int getVcount();
        DynArray& adjacentNodes(int);

        void BFS();
        void DFS();

        ~GraphMatrix();

};

DynArray& GraphMatrix::adjacentNodes(int n)
{
    DynArray *p=new DynArray(1);
    if(n<v_count && n>=0)
    {
        for(int i=0; i<v_count; i++)
            if(adj[n][i]==1)
                p->Append(i);
    }
    return *p;
}


int GraphMatrix::getVcount()
{
    return v_count;
}



void GraphMatrix::createGraph(int vno, int eno)
{
    int u,v;
    v_count=vno;
    e_count=eno;
    adj=new int*[v_count];
    for(int i=0; i<v_count; i++)
    {
        adj[i]=new int[v_count];
    }
    for(int i=0; i<v_count; i++)
        for(int j=0; j<v_count; j++)
            adj[i][j]=0;
    for(int k=1; k<=e_count; k++)
    {
        cout<<"\nEnter node numbers connecting edge: ";
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
}

void GraphMatrix::printMatrix()
{
    for(int i=0; i<v_count; i++)
    {
        for(int j=0; j<v_count; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

void GraphMatrix::printAdjacentNodes(int v)
{
    if(v<v_count && v>=0)
    {
        for(int i=0; i<v_count; i++)
            if(adj[v][i]==1)
                cout<<endl<<"V"<<i;
    }
}

// bool GraphMatrix::checkIsolated(int v)
// {
//     bool flag=true;
//     if(v<v_count && v>=0)
//     {
//         for(int i=0; i<v_count; i++)
//             if(adj[v][i]==1)
//                 {
//                     flag=false;
//                     break;
//                 }
//     }
// }


void GraphMatrix::BFS()
{
    cout<<endl;
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
        cout<<" V"<<n;
        for(int i=0; i<v_count; i++)
        {
            if(adj[n][i] == 1)
            {
                if(visit[i]==false)
                {
                    Q.insert(i);
                    visit[i]=true;
                }
            }
        }
    }
}

// void GraphMatrix::DFS()
// {
//     cout<<endl;
//     bool visit[v_count];
//     for(int i=0; i<v_count; i++)
//         visit[i]=false;
//     Stack S(v_count);
//     int source=0;
//     S.Push(0);
//     visit[0]=true;
//     int n;
//     while(!S.CheckUnderflow())
//     {
//         n=S.Peek();
//         S.Pop();
//         cout<<" "<<n;
//         for(int i=0; i<v_count; i++)
//         {
//             if(adj[n][i]==1)
//             {
//                 if(visit[i]==false)
//                 {
//                     S.Push(i);
//                     visit[i]=true;
//                 }
//             }
//         }
//     }
// }

GraphMatrix::~GraphMatrix()
{
    for(int i=0; i<v_count; i++)
        delete []adj[i];
    delete adj;
}


int main()
{
    GraphMatrix G;
    G.createGraph(6,9);
    G.printMatrix();
    G.printAdjacentNodes(2);

    cout<<endl;
    G.BFS();
    cout<<endl;
    G.DFS();
    cout<<endl;
    return 0;
}



