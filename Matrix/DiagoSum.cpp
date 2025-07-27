#include <iostream>
#include <climits>
using namespace std;


int diagonalSum(int mat[][3], int n){

    // pd = j==i
    // sd = j = n-i-1

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
        if( i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n =3;

    cout << "Diagonal Sum: " << diagonalSum(matrix, n) << endl;

    return 0;
}
