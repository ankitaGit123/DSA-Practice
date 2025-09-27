#include <iostream>
#include <climits>
using namespace std;

//max row sum

int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT_MIN; // Initialize to the smallest integer
    int rowSumI = 0;
    for(int i=0; i<rows; i++){
        rowSumI = 0;
        for(int j=0; j<cols; j++){
            rowSumI += mat[i][j];
        }

        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;
}

int main(){
    int matrix[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
    int rows = 4;
    int cols = 3;

    cout << "Maximum Row Sum: " << getMaxSum(matrix, rows, cols) << endl;

    return 0;
}

//max col sum

// #include <iostream>
// #include <climits>
// using namespace std;


// int getMaxSum(int mat[][3], int rows, int cols){
//     int maxColSum = INT_MIN; // Initialize to the smallest integer
//     int colSumJ = 0;
//     for(int j=0; j<cols; j++){
//         colSumJ = 0;
//         for(int i=0; i<rows; i++){
//             colSumJ += mat[i][j];
//         }

//         maxColSum = max(maxColSum, colSumJ);
//     }
//     return maxColSum;
// }

// int main(){
//     int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int rows = 3;
//     int cols = 3;

//     cout << "Maximum Cols Sum: " << getMaxSum(matrix, rows, cols) << endl;

//     return 0;
// }
        