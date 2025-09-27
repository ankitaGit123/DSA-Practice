#include <iostream>
#include <vector>
using namespace std;

// // o(log(m*n)) solution
// class Solution {
// public:

//     bool searchInRow(vector<vector<int>> & mat, int target, int row){
//         int n = mat[0].size(); //col
//         int st = 0, end = n-1;

//         while( st <= end){
//             int mid = st + (end - st)/2;

//             if( target == mat[row][mid]){
//                 return true;
//             } else if(target > mat[row][mid]){
//                 st = mid + 1;
//             } else{
//                 end = mid-1;
//             }
//         }
//         return false;
//     }

//     int searchMatrix(vector<vector<int>>& matrix, int target) {

//         int m = matrix.size(); //row
//         int n = matrix[0].size(); //col

//         int startRow = 0;
//         int endRow = m-1;

//         while( startRow <= endRow){

//             int midRow = startRow + (endRow - startRow)/2;

//             if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
//                 if(searchInRow(matrix, target, midRow)){
//                     return midRow;
//                 } else {
//                     return -1;
//                 }
//             } else if(target > matrix[midRow][n-1]){
//                 startRow = midRow + 1;
//             }else{
//                 endRow = midRow-1;
//             }
//         }
//         return false;
        
//     }
// };

// int main(){
//     vector<vector<int>> matrix = { {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
 

//     int target = 1;
//     Solution s;

//     int rowIdx = s.searchMatrix(matrix, target);

//     if( rowIdx != -1){
//         cout<< "Target " << target << " is present in Row: " << rowIdx << endl;
//     }
//     else {
//         cout<<" Target not present in matrix" << endl;
//     }

//     return 0;
// }

// different 



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int r = 0, c = n-1;

        while( r < m && c >= 0){

            if(target == matrix[r][c]){
                return true;
            } else if(target < matrix[r][c]){
                c--;
            } else{
                r++;
            }
        }
        return false;
        
    }
};
int main(){
    vector<vector<int>> matrix = { {1,4,7,11,15}, {12,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};
 

    int target = 1;
    Solution s;

    bool found = s.searchMatrix(matrix, target);

    if(found){
        cout<< "Target " << target << " is present in matrix" << endl;
    }
    else {
        cout<<" Target not present in matrix" << endl;
    }

    return 0;
}
