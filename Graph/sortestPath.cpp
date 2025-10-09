//sorted path int an unweighted grapg 
//using bfs

#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;

vector<int > shortestPath(vector<pair<int, int>> &edges, int n, int m, int s, int t){
    //create adjList 

    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // do bfs
    unordered_map<int, int> parent;
    unordered_map<int, bool> visited;
    queue<int> q;

    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while( !q.empty()){
        int front = q.front();
        q.pop();

        for(auto i: adj[front]){
            if( !visited[i]){
                q.push(i);
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }
    //find the shortest path
    vector<int> ans;
    int destination = t;
    ans.push_back(destination);

    while(destination != s){
        destination = parent[destination];
        ans.push_back(destination);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}