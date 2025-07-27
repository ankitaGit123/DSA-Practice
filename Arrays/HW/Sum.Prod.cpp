#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SumAndProduct(int arr[], int n, int &sum, int &prod){
    sum = 0;
    prod = 1;

    for(int i = 0; i<n; i++){
        sum += arr[i];
        prod *= arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int sum, prod;
    SumAndProduct(arr, sz, sum, prod);
    
    
    cout<< "Sum of nums = " << sum<<endl;
    cout<< "product of nums = " << prod<<endl;
    return 0;
}