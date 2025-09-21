#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2; // peak cannot be at 0 or n-1

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid; // found peak
            } 
            else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
                st = mid + 1; // peak is to the right
            } 
            else {
                end = mid - 1; // peak is to the left
            }
        }
        return -1; // not found (shouldn’t happen in valid mountain array)
    }
};

int main() {
    vector<int> arr1 = {0, 3, 4, 5, 9, 6, 4, 2}; // valid mountain array

    Solution sol;
    cout << "Peak Index = " << sol.peakIndexInMountainArray(arr1) << endl;

    return 0;
}
