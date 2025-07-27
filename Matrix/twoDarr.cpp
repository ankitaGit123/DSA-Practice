#include<iostream>
using namespace std;

int main(){

    // int matrix[4][3] = { {1, 2, 3}, {4, 5, 6},{7, 8, 9}, {10, 11, 12}};
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    //for input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> matrix[i][j];
        }
      
    }

    // matrix[2][2] = 99; // Changing the value at row 2, column 2
    // cout<< matrix[2][2]<<endl;

    //print the matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< matrix[i][j] << " ";
        }
        cout<<endl;
    }
    

    return 0;
                        

}