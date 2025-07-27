#include<iostream>
using namespace std;

//i/p==234524546547
//o/p==46
int SumAllDigit(int n){
    int sumdigi = 0;
    while(n>0){
        int lastdigit = n%10;
        n /= 10; //number ko chhota kr diya
        sumdigi += lastdigit;
    }
    return sumdigi;
}
int main(){
    int n;
    cin>>n;
    cout<<SumAllDigit(n);
    return 0;
}