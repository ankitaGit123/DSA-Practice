#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string isPrime(int n){
    for( int i=2; i*i<n; i++){
        if( n % i == 0){
            return "Non prime";
        }
    }
    return "prime";
}

int main(){
    int n = 47;

    cout<< isPrime(n) << endl;
    return 0;
    
}