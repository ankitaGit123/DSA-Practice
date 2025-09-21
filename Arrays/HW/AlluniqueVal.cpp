#include <iostream>
#include <unordered_map>
using namespace std;

// XOR method — Works only if there is exactly ONE unique element 

// 
// for multiple unique elements
void FindUniqueVals(int arr[], int n) {
    unordered_map<int,int> freq;

    // count frequency of each element
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    cout << "Unique elements are: ";
    for(auto &it : freq){
        if(it.second == 1){
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 4, 2, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    FindUniqueVals(arr, sz);

    return 0;
}
