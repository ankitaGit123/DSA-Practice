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

    // Detect Cycle in an undirected graph using DFS
    //o(v+e)
    bool isCycleUndirDFS(int src, int par, vector<bool> &vis){
        vis[src] = true;
        //loop on all neighbours of src
        list<int> neighbors = l[src]; // we storge all neighbours in a list above

        for(int v: neighbors){
            if(!vis[v]){
                if(isCycleUndirDFS(v, src, vis)){
                    return true;
                }
            } else if(v != par){
                return true;
            }
        }
        return false;
    }

    bool isCycleDFS(){
        vector<bool> vis(V, false);

        for(int i = 0; i<V; i++){
            if(!vis[i]){
                if(isCycleUndirDFS(i, -1, vis)){
                    return true;
                }
            }
        }
        return false;
    }

    // Detect Cycle in an undirected graph using BFS  
    //o(v+e)

    bool isCycleUndirBFS(int src, vector<bool> &vis){
        queue<pair<int, int>> q;

        q.push({src, -1});
        vis[src] = true;

        while(q.size()>0){
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbors = l[u];
            for(int v: neighbors){
                if(!vis[v]){
                    q.push({v, u}); // v is child of u
                    vis[v] = true;

                }else if(v!= parU){ //cycle condition
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycleBFS(){
        vector<bool> vis(V, false);

        for(int i=0; i<V; V++){
            if(!vis[i]){
                if(isCycleUndirBFS(i, vis)){
                    return true;
                }
            }
        }
        return false;
    }

};
int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
     
    cout<< g.isCycleDFS() << endl; 
    cout<< g.isCycleBFS() << endl;
    return 0;
}