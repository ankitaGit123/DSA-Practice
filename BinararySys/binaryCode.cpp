#include<iostream>
using namespace std;

//Decimal to binary

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2; //0 or 1
        decNum /=2; //yha num ko 2 se divid krenge yani km ho jayega

        ans += (rem * pow);
        pow *= 10;
    }

    return ans; // binary form
}

int main(){
    int decNum = 6;
    cout<< decToBinary(decNum) << endl;
    return 0;
}

//binary to decimal

int BinaryToDec(int binNum){
    int ans = 0, pow = 1;// 1=2^0;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        
        ans += rem *pow;
        pow *= 2;
    }
    return ans;
}
int main(){
    int binNum = 1011;
    cout<< BinaryToDec(binNum) <<endl;
    return 0;
}