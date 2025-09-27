#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;  // 0 and 1 are not prime
    if (n == 2) return true;   // 2 is prime
    if (n % 2 == 0) return false; // eliminate even numbers
    
    for( int i=3; i*i<n; i++){
        if( n % i == 0){
            return false; //1 is not prime
        }
    }
    return true; // n is prime 0
}

int main(){
    int n = 22;

    cout<< isPrime(n) << endl;
    return 0;
    
}