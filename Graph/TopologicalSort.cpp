//DAG - Directed Acyclic Graph

#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<stack>
using namespace std;

void topoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj){
    visited[node] = 1;
    for(auto neighbour: adj[node]){
        if( !visited[neighbour]){
            topoSort(neighbour, visited, s, adj);
        }
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    //create adjList 

    unordered_map<int, list<int>> adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    //call dfs
    vector<bool> visited(v);
    stack<int> s;

    for(int i=0; i<v; i++){
        if( !visited[i]){
            topoSort(i, visited, s, adj);
        }
    }

    vector<int> ans;
    while( !s.empty()){
        ans.push_back(s.top());
        s.pop();

    }
    return ans;
}

#include<iostream>
#include<vector>
using namespace std;

// ✅ put your topologicalSort function code here (same as you wrote)

int main() {
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<vector<int>> edges(e, vector<int>(2));
    cout << "Enter edges (u v):" << endl;
    for(int i=0; i<e; i++){
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<int> ans = topologicalSort(edges, v, e);

    cout << "Topological Sort: ";
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// input
// 6 6
// 5 0
// 5 2
// 4 0
// 4 1
// 2 3
// 3 1

// output
// Topological Sort: 5 4 2 3 1 0 
