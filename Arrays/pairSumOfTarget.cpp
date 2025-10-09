#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(int arr[], int n, int target) {
    int st = 0;
    int end = n - 1;

    while (st < end) {
        int sum = arr[st] + arr[end];

        if (sum < target) {
            st++;
        } 
        else if (sum > target) {
            end--;
        } 
        else {
            // found the pair
            return {st, end};  
        }
    }
    return {}; // empty vector if no pair found
}

int main() {
    int arr[] = {1, 2, 5, 7, 9, 11, 14};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    vector<int> ans = pairSum(arr, sz, target);

    if (!ans.empty()) {
        cout << "Pair found at indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values: " << arr[ans[0]] << " + " << arr[ans[1]] << " = " << target << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}


// //for finding Indexes of the pair in unsorted array
// vector<int> pairSum(vector<int> &muns, int target){
//     int n = nums.size();
//     unordered_map<int, int> m;
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         int first = nums[i];
//         int second = target - nums[i];

//         if(m.find(second) != m.end()){
//             ans.push_back(i);
//             ans.push_back(m[second]);
//         }
//         m[first] = i;
//     }
//     return ans;
// }

// //for finding Direct NUMS of the pair in unsorted array
// vector<int> pairSum(vector<int> &muns, int target){
//     int n = nums.size();
//     unordered_map<int, int> m;
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         int first = nums[i];
//         int second = target - nums[i];

//         if(m.find(second) != m.end()){
//             ans.push_back(first);
//             ans.push_back(second);
//         }
//         m[first] = i;
//     }
//     return ans;
// }