#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 2, -34, 53, 21};
    int n = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "Smallest = " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest = " << largest << " at index " << largestIndex << endl;

    return 0;
}


// Smallest = -34 at index 2  
// Largest = 53 at index 3
