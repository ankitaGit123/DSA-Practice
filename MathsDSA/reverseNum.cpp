#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int reverse(int n){
        int revNum = 0;

        while(n != 0){
            int digit = n % 10;

            if( revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return 0;
            }

            revNum = revNum * 10 + digit;
    
            n = n/10;
        }
        return revNum;
    }
    
};
int main(){
    int n = 153;
    Solution obj;                // Create object of the class
    int result = obj.reverse(n);
    cout<<result<<endl;
    
    return 0;
}