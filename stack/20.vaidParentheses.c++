
#include<iostream>
#include<stack>

using namespace std;



class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') { 
                // opening bracket
                st.push(s[i]);
            } else { 
                // closing bracket
                if(st.empty()) {  // check stack, not string
                    return false;
                }
                if((st.top() == '(' && s[i] == ')') ||
                   (st.top() == '{' && s[i] == '}') ||
                   (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                } else { 
                    // mismatch
                    return false;
                }
            }
        }
        return st.empty(); // stack must be empty if valid
    }
};