#include<iostream>
#include<vector>
using namespace std;

//search target

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                return mid;
            }
            //left 
            if( nums[st] <= nums[mid]){
                if(nums[st] <= target && nums[mid] >= target){
                    end = mid-1;
                }else 
                st = mid+1;
            }
            else{
                if(nums[mid] <= target && nums[end] >= target){
                    st = mid+1;
                }else
                end = mid-1;

            }
        }
        return -1;
    }
    
};
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 7;

    Solution sol;

    cout<< "Target found at index = " << sol.search(nums, target) << endl;
}