//Apply only when there is directed having negative weight but no negative cycle
//OR if you want to detect negative cycle

#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
using namespace std; 


int bellmanFord(int n, int m, int src, int dest, vector<vector<int>> &edges){

    vector<int> dist(n+1, 1e9);
    dist[src] = 0;

    //n-1 time


    for(int i=0; i<n; i++){
        //traverse on edge list
        for(int j=0; j<m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
    }
    //check for negative cycle 
    bool flag = 0;
    for(int j=0; j<m; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
            flag = 1;;
        }
    }
    if(flag == 0){
        return dist[dest];
    }
    return -1;

}