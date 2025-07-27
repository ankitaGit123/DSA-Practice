#include<iostream>
#include<bits/stdc++.h>
using namespace std;



//Max Water in container
//in this method TLE time limit exeeded  o(n^2)

// brute forcec
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for(int i=0; i<height.size(); i++){
            for(int j=i+1; j<height.size(); j++){
                int width = j-i;
                int ht = min(height[i], height[j]);
                int currWater = width * ht;

                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
        
    }
};

//optimal with o(n)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size()-1;
        while(lp < rp ){
            
            int wth = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = wth * ht;

            maxWater = max(maxWater, currWater);
            height[lp] < height[rp] ? lp++ : rp--; ///imp
            
        }
        return maxWater;
        
    }
};