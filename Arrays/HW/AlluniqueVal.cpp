#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FindUniqueVal(int arr[], int n){
    int result = 0;
    // int i = 0;
    for(int i=0; i<n; i++){
        result ^= arr[i]; //XOR of same elements cancels out
    }
    return result;
}

int main(){
    int arr[] = {5, 2, 9, 2, 5}; // Can be sorted or unsorted
    int sz = sizeof(arr) / sizeof(arr[0]);
    int Unique = FindUniqueVal(arr, sz);
    cout<<"Unique valus is : "<<Unique<<endl;
    return 0;
}

//greater than 1 unique



void FindAllUnique(int arr[], int n) {
    unordered_map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print elements with frequency = 1
    cout << "Unique elements are: ";
    for (auto x : freq) {
        if (x.second == 1) {
            cout << x.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 4, 2, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    FindAllUnique(arr, sz);

    return 0;
}
