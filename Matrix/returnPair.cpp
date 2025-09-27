#include <iostream>
#include <vector>
using namespace std;

pair<int, int> searchMatrix(vector<vector<int>>& matrix, int rows, int cols, int target) {
    //int rows = matrix.size();
    //int cols = matrix[0].size();

    // Traverse each element
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == target) {
                return {i, j};  // Target found
            }
        }
    }

    return {-1, -1};  // Not found
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    }; 

    //int target = 15;

    pair<int, int> result = searchMatrix(matrix, 3, 3, 11);
    
    cout << result.first << ", " << result.second << endl;
    return 0;
}
