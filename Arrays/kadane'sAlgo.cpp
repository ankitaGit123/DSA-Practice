
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//Max sub array sum - kadane's algo

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            currSum += nums[i];
            maxSum = max(currSum, maxSum);

            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    int arr[] = {5, 4, -1, 7, -8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // Convert C-style array to vector
    vector<int> nums(arr, arr + sz);

    Solution obj;
    cout << "Maximum Subarray Sum = " << obj.maxSubArray(nums) << endl;

    return 0;
}
