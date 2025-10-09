#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:

//without dp
    int solve(vector<int> & cost, int n){
        //base case
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }

        int ans = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
        return ans;
    }

//with dp memoisation + recursion
    int solve2(vector<int> & cost, int n, vector<int>& dp){
        //base case
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        //1 more
        if( dp[n] != -1){
            return dp[n];
        }

        //store ans in dp
        dp[n] = cost[n] + min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();

        // int ans = min(solve(cost, n-1), solve(cost, n-2));
        // return ans;


        //step 1 - Create DP
        int n = cost.size();
        vector<int> dp(n+1, -1);

        int ans = min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
        return ans;

    }
};


class Solution {
public:

//using dp tabulation

    int solve3(vector<int> &cost, int n){
        //create dp
        vector<int> dp(n+1);

        //base case analyse
        dp[0] = cost[0];
        dp[1] = cost[1];

        //reamining part

        for(int i=2; i<n; i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost){
        int n = cost.size();
        return solve3(cost, n);

    }
};