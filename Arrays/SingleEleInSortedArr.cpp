#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        //when only one ele
        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        int st = 1, end = n-2;  
        while(st <= end){
            int mid = st + (end - st) / 2;
            //if mid is unique
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
            // even ele
            if( mid % 2 == 0){
                if(nums[mid] == nums[mid-1]){  // left{
                    end = mid - 1;
                } else{  // right
                    st = mid+1;
                }

            }else // odd
                if(nums[mid] == nums[mid-1]){   //odd
                    st = mid + 1;
                } else{
                    end = mid - 1;
            }
            
        }
        return -1;
        
    }
};

int main() {
    
    int arr[] = {1,1,2,2,3,3,4,4,7,5,5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums(arr, arr + sz);

    Solution obj;
    cout << "Single element in sorted array = " << obj.singleNonDuplicate(nums) << endl;

    return 0;
}