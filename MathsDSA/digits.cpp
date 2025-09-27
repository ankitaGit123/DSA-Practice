#include<bits/stdc++.h>
using namespace std;



// Number
void printDigNo(int n){
    while(n != 0){
        int digit = n % 10;
        cout<< digit;
        n = n/10;
    }
     
}
//count the digit

// void printDig(int n){
//     int count = 0;
//     while( n != 0){
//         int digit = n % 10;
//         count++;
//         n = n/10;
//     }
//     cout<< count<<endl;
// }
//sum of digit
// void sumDigi(int n){
//     int sum = 0;
//     while( n != 0){
//         int digit = n % 10;
//         sum += digit;
//         n=n/10;
//     }
//     cout<<sum<<endl;
// }

int main(){
    int n = 23456;
    printDigNo(n);
    //printDig(n);
    //sumDigi(n);
    return 0;
}