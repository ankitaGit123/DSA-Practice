#include<iostream>
#include<stack>
#include<unordered_map>
#include<queue>
using namespace std;

//TC 0(n)  and SC 0(1)

// [1,2,3,4,5]
// cost = [3,4,5,1,2]
// Output = 3

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0, totCost = 0;

        for(int val: gas){
            totGas += val;
        }

        for(int val : cost){
            totCost += val;
        }
        if(totGas < totCost){
            return -1;
        }

        //unique solution always exists

        int start = 0, currGas = 0;
        for(int i=0; i<gas.size(); i++){
            currGas += (gas[i] - cost[i]);

            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }
        return start;
        
    }
};

//optimal

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0, totCost = 0;

        //unique solution always exists

        int start = 0, currGas = 0;

        for(int i=0; i<gas.size(); i++){

            totGas += gas[i];
            totCost += cost[i];
            currGas += (gas[i] - cost[i]);

            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }
        return totGas < totCost ? -1: start;
        
    }
};