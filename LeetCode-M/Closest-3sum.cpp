#include <bits/stdc++.h>
using namespace std;

// Q-16

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];

        for(int i=0; i<n-2; i++){
            int j = i+1;
            int k = n-1;

            while( j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if( abs(sum - target) < abs(closest - target)){
                    closest = sum;
                }
                if( sum < target){
                    j++;
                }else if(sum > target){
                    k--;
                
                }else{ 
                    return sum;
                }  
            }
            
        }
        return closest;
    }
};