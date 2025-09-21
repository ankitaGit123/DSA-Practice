class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int, int>, int>> q; // ((i, j), time)

        // Push all rotten oranges (sources) in queue
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});  // ✅ fixed
                    vis[i][j] = true;
                }
            }
        }

        // BFS traversal
        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            q.pop();

            ans = max(ans, time);

            // Top
            if(i-1 >= 0 && !vis[i-1][j] && grid[i-1][j] == 1){
                q.push({{i-1, j}, time+1});
                vis[i-1][j] = true;
            }
            // Right
            if(j+1 < m && !vis[i][j+1] && grid[i][j+1] == 1){
                q.push({{i, j+1}, time+1});
                vis[i][j+1] = true;
            }
            // Bottom
            if(i+1 < n && !vis[i+1][j] && grid[i+1][j] == 1){
                q.push({{i+1, j}, time+1});
                vis[i+1][j] = true;
            }
            // Left
            if(j-1 >= 0 && !vis[i][j-1] && grid[i][j-1] == 1){
                q.push({{i, j-1}, time+1});
                vis[i][j-1] = true;
            }
        }

        // Check if any fresh orange is left
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    return -1;
                }
            }
        }
        return ans;
    }
};
