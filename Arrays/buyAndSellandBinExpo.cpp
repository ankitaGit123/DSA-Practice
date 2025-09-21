#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// 1)   exponentialtion binary form 

// check jo no. diya gya h vo 2 ki pawer me h ya nhi yani binary form

// x^n

// class Solution {
// public:
//     double myPow(double x, int n) {

//         if(n==0) return 1.0;
//         if(x==0) return 0.0;
//         if(x==1) return 1.0;
//         if(x== -1 && n%2 != 0) return -1.0;
//         if(x== -1 && n%2 == 0) return 1.0;
//         long binForm = n;  //we converted into binary form first
//         if(n < 0){   //power neg h to 
//             x = 1/x;
//             binForm = -binForm;
//         }
//         double ans = 1;
//         while(binForm > 0){
//             if(binForm %2 == 1){
//                 ans *= x;
//             }
//             x *= x;
//             binForm /=2;
//         }
//         return ans;
//     }
// };
// int main() {
//     Solution sol;
//     cout << sol.myPow(2.0, 10) << endl;   // 1024
//     cout << sol.myPow(2.0, -2) << endl;   // 0.25
//     return 0;
// }

// Max profit
//  2)    Buy or sell problem

int maxprofit(vector<int> & prices){
    int maxprofit = 0;
    int bestbuy = prices[0];

    for(int i=0; i<prices.size(); i++){

        if(prices[i] > bestbuy){
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }
    return maxprofit;
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxprofit(prices) << endl; // 5
    return 0;
}