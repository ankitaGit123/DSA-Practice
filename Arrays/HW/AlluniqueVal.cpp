#include <iostream>
#include <unordered_map>
using namespace std;

// XOR method — Works only if there is exactly ONE unique element 
// and all others appear twice
int FindUniqueVal(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR cancels out duplicates
    }
    return result;
}

// Frequency map method — Works when there can be multiple unique elements
// void FindAllUnique(int arr[], int n) {
//     unordered_map<int, int> freq;

//     // Count frequency
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     // Print elements with frequency = 1
//     cout << "Unique elements are: ";
//     for (auto &x : freq) {
//         if (x.second == 1) {
//             cout << x.first << " ";
//         }
//     }
//     cout << endl;
// }

    // int main() {
    //     int arr[] = {5, 2, 9, 4, 2, 5};
    //     int sz = sizeof(arr) / sizeof(arr[0]);

    //     // Case 1: Only 1 unique element (rest twice)
    //     // int uniqueVal = FindUniqueVal(arr, sz);
    //     // cout << "Single unique value is: " << uniqueVal << endl;

    //     // Case 2: Multiple unique elements


        
    //     FindAllUnique(arr, sz);

    //     return 0;
//}
