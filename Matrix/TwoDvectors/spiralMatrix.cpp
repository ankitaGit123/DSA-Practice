#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, erow = m-1, scol = 0, ecol = n-1;
        vector<int> ans;

        while( srow <= erow && scol <= ecol){

            //top
            for(int j = scol; j <= ecol; j++){
                ans.push_back(matrix[srow][j]);
            }
            //right
            for(int i = srow+1; i <= erow; i++){
                ans.push_back(matrix[i][ecol]);
            }
            //bottum
            for(int j = ecol-1; j >= scol; j--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            //left
            for(int i = erow-1; i > srow; i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            srow++; erow--; scol++; ecol--;

        }
        return ans;
    }
};
int main(){
    vector<vector<int>> matrix = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13,14,15,16}};

    Solution s;
    vector<int> result = s.spiralOrder(matrix);

    cout<<"Spiral order ";
    for(int x : result){
        cout<<x <<" ";
    }
    cout<< endl;
    return 0;
}
