#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
// tc o(n)

vector<int> prevSmallerElement(vector<int> arr){
    vector<int> ans(arr.size(), 0);
    stack<int> s;

    for(int i =0; i<arr.size(); i++){
        while(s.size() > 0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] =  -1;
        } else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main(){
    //stck price
    vector<int> arr = {3, 1, 0, 8, 6};  //-1 -1 -1 0 0 

    //solution
    
    vector<int> ans = prevSmallerElement(arr);
    
    //print ans vals

    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}