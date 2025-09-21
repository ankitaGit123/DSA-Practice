#include <iostream>
#include <unordered_map>
using namespace std;

// tc= o(n) sc=o(n) using hashmap
// majority element > n/2 times
// int majorityEle(int arr[], int n){
//     unordered_map<int, int> freq;
//     for(int i=0; i<n; i++){
//         freq[arr[i]]++;

//         if(freq[arr[i]] > n/2){
//             return arr[i];
        
//         }
        
//     }
//     return -1;
// }

// for tc = O(n) sc=O(1) moore's voting algo

int MooreVoting(int arr[], int n){
    int candidate = -1;
    int count = 0;
    //find candidate
    for(int i=0; i<n; i++){
        if(count == 0){
            candidate =  arr[i];
            count = 1;
        } else if(candidate == arr[i]){
            count++;
        }else{
            count--;
        }
    }
    //verify candidate
    count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == candidate){
            count++;
        }
    }
    if(count > n/2){
        return candidate;
    }
    return -1;

}


int main(){
    int arr[] = {3,3,4,3,3,3,3,2};
    int sz = sizeof(arr) / sizeof(arr[0]);

    //cout << "majority of ele= "<< majorityEle(arr, sz)<<endl;
    cout << "majority of ele= "<< MooreVoting(arr, sz)<<endl;

    return 0;
}

