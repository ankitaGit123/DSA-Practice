#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;  // no primes less than 2

        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
                // mark multiples of i as not prime
                for (long long j = 1LL * i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // print primes
        cout << "Prime numbers less than " << n << " are: ";
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                cout << i << " ";
            }
        }
        cout << endl;

        return count;
    }
};

int main() {
    int n = 15;
    Solution obj;
    cout << "Total primes less than " << n << " = " << obj.countPrimes(n) << endl;
    return 0;
}
