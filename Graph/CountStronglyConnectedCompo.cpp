#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
using namespace std; 

void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj) {
    vis[node] = true;
    for (auto nbr : adj[node]) {
        if (!vis[nbr]) {
            dfs(nbr, vis, st, adj);
        }
    }
    // Topological ordering
    st.push(node);
}

void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &transpose) {
    vis[node] = true;
    for (auto nbr : transpose[node]) {
        if (!vis[nbr]) {
            revDfs(nbr, vis, transpose);
        }
    }
}

int stronglyConnectedComponents(int n, vector<vector<int>> &edges) {
    // Step 1: Create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    // Step 2: Topological sort (DFS)
    stack<int> st;
    unordered_map<int, bool> vis;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, vis, st, adj);
        }
    }

    // Step 3: Create Transpose Graph
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < n; i++) {
        vis[i] = 0;  // reset visited
        for (auto nbr : adj[i]) {
            transpose[nbr].push_back(i);
        }
    }

    // Step 4: DFS on Transpose in Topo Order
    int count = 0;
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        if (!vis[top]) {
            count++;
            revDfs(top, vis, transpose);
        }
    }

    return count;
}

int main() {
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1}, {1, 2}, {2, 0}, {1, 3}, {3, 4}
    };

    cout << "Number of Strongly Connected Components: "
         << stronglyConnectedComponents(n, edges) << endl;

    return 0;
}
