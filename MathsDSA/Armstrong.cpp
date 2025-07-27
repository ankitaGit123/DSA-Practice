#include<bits/stdc++.h>
using namespace std;

// 153 = 1^3 + 5^3 + 3^3= 153
bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;

    while( n != 0){
        int digit = n % 10;
        sumOfCubes += (digit* digit* digit);
        n = n/10;
    }
    return sumOfCubes == copyN;
}

int main(){
    int n = 153;
    if( isArmstrong(n)){
        cout<<"Number is Armstrong" <<endl;
    } else{
        cout<<"Not Armstrong"<< endl;
    }
    return 0;
}