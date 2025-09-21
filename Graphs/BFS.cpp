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

    // BFS Traversal of a graph
    //o(v+e)
    void bfs(){
        queue<int> Q;
        vector<bool> vis(V, false);  // size V and initialize with false

        Q.push(0);  // assuming 0 is the source vertex
        vis[0] = true;

        while(Q.size() > 0){
            int u = Q.front();  //source= u, destoi = v
            Q.pop();
            cout<< u <<" ";

            for(int v : l[u]){
                if( !vis[v]){
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }
        cout<<endl;
    }
    
};
int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    g.bfs();
    return 0;
}