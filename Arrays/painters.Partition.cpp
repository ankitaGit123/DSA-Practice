#include<iostream>
#include<vector>
#include<climits>
using namespace std;


//overAll TC O(log(sum)*n)
bool isValid(vector<int> & arr, int n, int m, int maxAllowedTime){  //o(n)

    int painter = 1, time = 0;
    for(int i=0; i<n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}
int painterPainting(vector<int> & arr, int n, int m){

    //find range befor add all ele

    int sum = 0, maxVal = INT_MAX;
    for(int i=0; i<n; i++){  //o(n)
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end = sum, ans = -1;
    while(st <= end){     //log(sum)
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40, 30, 10, 20};
    int n = 4;
    int m  = 2;

    cout<< painterPainting(arr, n, m)<<endl;
    return 0;
}