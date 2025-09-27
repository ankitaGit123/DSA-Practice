#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void getAllCombinations(vector<int>& arr, int idx, int tar, 
                            vector<vector<int>> &ans, vector<int> &combin) {
        if (tar == 0) {
            ans.push_back(combin);
            return;
        }
        if (idx == arr.size() || tar < 0) {
            return;
        }

        // Choice 1: include current element (stay at same index since repetition allowed)
        combin.push_back(arr[idx]);
        getAllCombinations(arr, idx, tar - arr[idx], ans, combin);
        combin.pop_back();

        // Choice 2: exclude current element (move to next index)
        getAllCombinations(arr, idx + 1, tar, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        getAllCombinations(arr, 0, target, ans, combin);
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> arr = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = s.combinationSum(arr, target);
    for(auto v: ans){
        for(auto num: v){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
