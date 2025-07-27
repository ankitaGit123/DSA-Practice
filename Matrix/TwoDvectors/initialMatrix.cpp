#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6, 10, 11, 12}, {7, 8, 9}};
    // int rows = mat.size();
    // int cols = mat[0].size();

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}