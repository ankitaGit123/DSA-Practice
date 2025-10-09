#include <bits/stdc++.h> 
#include <climits>
#include<vector>
using namespace std;

//only Recusion It reaches TLE
int solRec(vector<int> &num, int x){
    //base case
    if(x == 0 ){
        return 0;
    }
    if(x < 0){  
        return INT_MAX;
    } 

    int mini = INT_MAX;

    for(int i=0; i<num.size(); i++){
        int ans = solRec(num, x-num[i]);
        if( ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    return mini;
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int ans = solRec(num, x);
    if( ans == INT_MAX){
        return -1;
    }
}

//useing tabulation

int solTabu(vector<int> &num, int x){
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;

    for(int i=1; i<=x; i++){
        for(int j=0; j<num.size(); j++){
            if(i-num[j] >= 0 && dp[i- num[j]] != INT_MAX){
                dp[i] = min(dp[i], 1+dp[i-num[j]]);
            }
        }
    }

    if(dp[x] == INT_MAX){
        return -1;
    }
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
   
    return solTabu(num, x);
}































