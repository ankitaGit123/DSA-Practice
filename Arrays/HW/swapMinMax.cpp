#include<iostream>

using namespace std;

void SwapNum(int arr[], int n){
    int minIndex = 0;
    int maxIndex = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        
    }
    swap(arr[minIndex], arr[maxIndex]);
}




int main(){
    int arr[] = {5, 2, 9, 1, 6}; // Can be sorted or unsorted
    int sz = sizeof(arr) / sizeof(arr[0]);
    SwapNum(arr, sz);
    cout << "Swaped arry ";
    for(int i=0; i<sz; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}    