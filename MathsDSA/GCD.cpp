#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    
    while( a > 0 && b > 0){
        if( a > b){
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if( a == 0) return b;
    return a;
}

//recursive approch
//we consider a > b

int recgcd(int a, int b){

    if(b == 0) return a;
    return recgcd(b, a % b);

}

// LCM

int lcm(int a, int b){
    int gcd = recgcd(a, b);
    return a*b/gcd;
}


int main(){
    cout<< gcd(20, 28)<<endl;
    return 0;
}