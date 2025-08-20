#include<iostream>
#include<vector>
using namespace std;

//check valid or not
//calculate the min of max possible no.
// overAll TC ==o(logN*n)
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return students <= m;        //> m ? false : true;
}

// Books allocate kr rhe h
int allocatedBooks(vector<int> &arr, int n, int m){
    
    // Remove the incorrect condition - we can allocate books even when n < m
    // if( n < m) return -1;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];    //O(n)
    }
    
    int st = 0, end = sum;
    int ans = -1;
    while(st <= end){  //         o(logN * n)
        int mid = st + (end-st)/2;

        if( isValid(arr, n, m, mid)){ //left me jayenge
            ans = mid;
            end = mid-1;
        }else{  //right me jayenge
            st = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;

    cout<< allocatedBooks(arr, n , m)<<endl;
    return 0;
}