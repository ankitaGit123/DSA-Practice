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
