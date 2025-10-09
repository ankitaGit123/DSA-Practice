#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp) {
    // base cases
    if (n <= 1) {
        return n;
    }

    // if already calculated
    if (dp[n] != -1) {
        return dp[n];
    }

    // recursive relation
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << fib(n, dp) << endl;

    return 0;

    //for tabulation
    vector<int> dp(n+1);
    dp[1]  = 1;
    dp[0] = 0;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<< dp[n] << endl;
}
