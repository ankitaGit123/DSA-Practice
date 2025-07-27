#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int decompress(vector<char>& chars) {
    int n = chars.size();
    int i = 0; // reading pointer
    vector<char> result;

    while (i < n) {
        char ch = chars[i++];
        string countStr = "";

        while (i < n && isdigit(chars[i])) {
            countStr += chars[i++];
        }

        int count = countStr.empty() ? 1 : stoi(countStr);

        // Append count times the character
        while (count--) {
            result.push_back(ch);
        }
    }

    // Copy result back to chars (in-place update)
    for (int k = 0; k < result.size(); ++k) {
        chars[k] = result[k];
    }

    // Resize the array
    chars.resize(result.size());
    return result.size();
}
