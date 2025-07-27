#include<iostream>
using namespace std;

int main(){
    // AND
    int a = 4, b = 8;
    cout<<(a & b)<<endl;
    return 0;
    //OR
    int a = 4, b = 8;
    cout<<(a | b)<<endl;
    return 0;
    //XOR
    int a = 4, b = 8;
    cout<<(a ^ b)<<endl;
    
    // << Bitwise left shift
    // ans = a*2^b

    cout<< (10 << 2) <<endl;

    // >> Bitwise right shift
    // ans = a/2^b
    
    cout<< (10 >>1) <<endl;

    return 0;
}