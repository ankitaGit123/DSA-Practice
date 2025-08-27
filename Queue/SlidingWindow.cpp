
#include<iostream>
#include<stack>
#include<unordered_map>
#include<queue>
using namespace std;

//TC 0(n)  and SC 0(n)

// Input
// nums = [1,3,-1,-3,5,3,6,7]
// k = 3
// Output = [3,3,5,5,6,7]



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        //1st wind
        for(int i=0; i<k; i++){
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for(int i=k; i<nums.size(); i++){
            res.push_back(nums[dq.front()]);

            //remove not part of curr wind
            while(dq.size() > 0 && dq.front() <= i-k){
                dq.pop_front();
            }
            //remove the smaller
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);

        return res;
        
    }
};