#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // check palindrom
    bool isPalin(string s){
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }

    //devide every parts
    void getAllParts(string s, vector<string> &partition, vector<vector<string>> &ans){
        //base case
        if(s.size() == 0){
            ans.push_back(partition);
            return;
        }
        for(int i=0; i<s.size(); i++){
            string part = s.substr(0, i+1);
            
            if(isPalin(part)){
                partition.push_back(part);
                getAllParts(s.substr(i+1), partition, ans);
                partition.pop_back();
            }

        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        getAllParts(s, partition, ans);
        return ans;
        
        
    }
};
int main(){
    Solution s;
    string str = "abcd";
    vector<vector<string>> ans = s.partition(str);
    for(auto v: ans){
        for(auto part: v){
            cout<<part<<" ";
        }
        cout<<endl;
    }
    return 0;
}