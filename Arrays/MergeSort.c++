#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int m, vector<int> &B, int n) {
    int idx = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0) {
        if (A[i] >= B[j]) {
            A[idx--] = A[i--]; // A[i] bda h to A me dalenge
        } else {
            A[idx--] = B[j--]; // B[j] bda h to A me dalenge
        }
    }

    // Agar B ke elements bache ho
    while (j >= 0) {
        A[idx--] = B[j--];
    }
}

int main() {
    // Example input
    vector<int> A = {1, 3, 5, 0, 0, 0}; // m=3 elements sorted + 3 empty slots
    vector<int> B = {2, 4, 6};
    int m = 3, n = 3;

    merge(A, m, B, n);

    cout << "Merged array: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
