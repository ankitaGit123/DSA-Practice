#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++){
        // if(arr[j] <= pivot){ //for descending
        if(arr[j] <= pivot){ //for ascending 
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}


//create function
void quickSort(vector<int> &arr, int st, int end){
    if(st < end){
        int pivIdx = partition(arr, st, end);

        quickSort(arr, st, pivIdx-1); //left part
        quickSort(arr, pivIdx+1, end); //rigt part

    }
}
int main(){
    vector<int> arr = {5, 2, 6, 1, 3};
    quickSort(arr, 0, arr.size()-1);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}