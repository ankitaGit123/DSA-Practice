#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int> p1 = {1,5}; //output 
    cout<< p1.first << " " << p1.second << endl;

    pair<int, pair<char, int>> p2 = {1,{'a', 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    return 0;
}