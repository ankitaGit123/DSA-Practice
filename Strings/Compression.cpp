#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;



class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            // Count consecutive repeating characters
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;  // Place the character

            if (count > 1) {
                string str = to_string(count);  // Convert count to string
                for (char dig : str) {
                    chars[idx++] = dig;  // FIXED: assignment not comparison
                }
            }

            i--;  // Adjust index after while loop
        }

        chars.resize(idx);  // Resize array to new length
        return idx;
    }
};



class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            // Count consecutive repeating characters
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;  // Place the character

            if (count > 1) {
                string str = to_string(count);  // Convert count to string
                for (char dig : str) {
                    chars[idx++] = dig;  // FIXED: assignment not comparison
                }
            }

            i--;  // Adjust index after while loop
        }

        chars.resize(idx);  // Resize array to new length
        return idx;
    }
};

#include<vector>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            // Count consecutive repeating characters
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;  // Place the character

            if (count > 1) {
                string str = to_string(count);  // Convert count to string
                for (char dig : str) {
                    chars[idx++] = dig;  // FIXED: assignment not comparison
                }
            }

            i--;  // Adjust index after while loop
        }

        chars.resize(idx);  // Resize array to new length
        return idx;
    }
};
