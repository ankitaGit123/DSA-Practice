#include <bits/stdc++.h>
using namespace std;

// Q -34

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2, -1);

        int st = 0;
        int end = n-1;
        //firts occurence
        while(st <= end){
            int mid = st + (end-st)/2;

            if(target > nums[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }if(target == nums[mid]) ans[0] = mid;
            
        }
        //last occurence
        st = 0;
        end = n-1;
        while( st <= end){
            int mid = st + (end -st)/2;

            if(target < nums[mid]){
                end = mid-1;
            }else{
                st = mid + 1;
            }
            if(target == nums[mid]) ans[1] = mid;
        }
        return ans;

    }
};