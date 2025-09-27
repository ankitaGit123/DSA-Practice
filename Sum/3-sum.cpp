#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
//         //sort
//         sort(nums.begin(), nums.end());

//         for(int i = 0; i<n; i++){
//             //condition for repeated value
//             if(i > 0 && nums[i] == nums[i-1]) continue;

//             int j = i+1, k = n-1;

//             while( j < k){
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if(sum < 0){
//                     j++;
//                 } else if( sum > 0){
//                     k--;
//                 } else{
//                     ans.push_back({nums[i], nums[j], nums[k]});
//                     j++, k--;
                    
//                     while( j<k && nums[j] == nums[j-1]){
//                         j++;
//                     }
//                 }

//             }
//         }
//         return ans;   
//     }
// };
// int main() {
//     Solution s;
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};

//     vector<vector<int>> result = s.threeSum(nums);

//     cout << "Unique triplets that sum to 0:\n";
//     for (auto triplet : result) {
//         cout << "[ ";
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << "]\n";
//     }

//     return 0;
// }

// for target 3 sum
// change sum = nums[i] + nums[j] + nums[k];


class Solution {
public:
    vector<vector<int>> threeSumTarget(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        // sort array
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // skip duplicate values for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1, k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // skip duplicates for j
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    // skip duplicates for k
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, -1, 0, -2, 1, -1, 4};
    int target = 2;

    vector<vector<int>> result = s.threeSumTarget(nums, target);

    cout << "Unique triplets that sum to " << target << ":\n";
    for (auto triplet : result) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
