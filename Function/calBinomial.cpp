#include<iostream>
using namespace std;

// nCr

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r * fact_nmr);
// }
// int main(){
//     int n=8, r=2;
//     cout<< nCr(n, r)<<endl;
//     return 0;
// }


//check no. is prime or not

bool isPrime(int n){

    if(n<=1) return false;

    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)){;
        cout<<n<<" is a Prime.";
    }else 
        cout<<n<<" is not Prime.";
    return 0;
}