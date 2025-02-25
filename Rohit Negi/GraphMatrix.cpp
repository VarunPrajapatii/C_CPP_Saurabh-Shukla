#include<iostream>
#include<vector>
using namespace std;

// Adjacency Matrix representation of Undirected Unweighted graph 

int main() {
    int vertex, edges;
    cout<<"Enter number of vertex and edges: "<<endl;
    cin>>vertex>>edges;
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex,0));

    int u, v; // for weighted graph we take weight also and write AdjMat[u][v]=weight;
    for(int i=0; i<edges; i++) {
        cin>>u>>v;        
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;       // if it was a directed graph then we can remove this line
    }

    for(int i=0; i<vertex; i++) {
        for(int j=0; j<vertex; j++) {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}