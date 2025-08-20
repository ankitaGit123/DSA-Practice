#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// o(n)  linear complex
int SearchTrgt(int arr[], int sz, int target){

    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 0;
    cout << SearchTrgt(arr, sz, target)<<endl;
    return 0;
}

//reverse arr

void ReverseArr(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    ReverseArr(arr, sz);

    //print reverse arr
    for(int i=0; i<sz; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}