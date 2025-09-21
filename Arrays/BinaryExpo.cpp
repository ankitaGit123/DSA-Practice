#include <iostream>
using namespace std;

//iterative binary exponentiation
#include <iostream>
using namespace std;

long long binaryExpo(long long a, long long b) {
    long long result = 1;
    while(b > 0) {
        if(b % 2 == 1) {        // if b is odd
            result *= a;
        }
        a *= a;                  // square the base
        b /= 2;                  // divide exponent by 2
    }
    return result;
}

int main() {
    long long a = 2, b = 10;
    cout << a << "^" << b << " = " << binaryExpo(a, b) << endl;
    return 0;
}



//recursive binary exponentiation
long long binaryExpoRec(long long a, long long b) {
    if(b == 0) return 1;            // base case
    long long res = binaryExpoRec(a, b/2);
    res *= res;
    if(b % 2 == 1) res *= a;       // if exponent is odd
    return res;
}

int main() {
    long long a = 3, b = 5;
    cout << a << "^" << b << " = " << binaryExpoRec(a, b) << endl;
    return 0;
}
