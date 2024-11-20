/*
DSA through C++

Assignment-21: Graph Traversing

1. Implement BFS in Graph Matrix.

2. Implement DFS in Graph Matrix.

3. Implement BFS in Graph list representation

4. Implement DFS in Graph list representation

1 and 2 in prev file...

*/


// #include<iostream>
// #include<stdio.h>
// #include "19GraphMatrix.cpp"
// #include "11QueueusingArray.cpp"
// #include "3DynArray.cpp"
// using namespace std;

// void BFS(GraphMatrix &, int);

// void BFS(GraphMatrix &G, int s)
// {
//     bool status[G.getVcount()];
//     for(int i=0; i<G.getVcount(); i++)
//         status[i]=false;
//     Queue Q(6);
//     Q.insert(s);
//     status[s]=true;
//     int n, i=0, u;
//     while(!Q.isEmpty())
//     {
//         n=Q.getFront();
//         cout<<" V"<<n;
//         Q.del();
//         DynArray adjacent=G.adjacentNodes(n);
//         for(i=0; i<adjacent.Count(); i++)
//         {
//             u=adjacent.Get(i);
//             if(status[u]==false)
//             {
//                 Q.insert(u);
//                 status[u]=true;
//             }            
//         }
//     }
// }

// int main()
// {
//     GraphMatrix G;
//     G.createGraph(6,9);
//     BFS(G,0);
//     return 0;
// }