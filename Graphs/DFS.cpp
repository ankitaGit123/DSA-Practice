#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V; // Number of vertices
    list<int>* l; // Pointer to an array containing adjacency list

public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
        //arr = new int [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u); // Undirected Graph
    }

    //BFS Traversal of a graph
    //o(v+e)
    
    void dfsHelper(int u, vector<bool> & vis){
        cout<< u << " ";

        vis[u] = true;

        for( int v : l[u]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        } 
    }
    void dfs(){
        int src = 0; // source vertex
        vector<bool> vis(V, false); // size V and initialize with false
        dfsHelper(src, vis);

        //disconnected components
        for( int i=0; i<V; i++){
            if(!vis[i]){
                dfsHelper(i, vis);
            }
        }
        // continue 

        cout<< endl;
    }
    
};
int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
     
    cout<< "dfs: ";
    g.dfs();
    return 0;
}