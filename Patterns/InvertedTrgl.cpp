#include<iostream>
using namespace std;


// 1 1 1 1 
//   2 2 2 
//     3 3 
//       4 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=1; j<=n-i; j++){
//             cout<<(i+1)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 1 1 1 
//  2 2 2 
//   3 3 
//    4 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<(i+1)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// A A A A 
//   B B B 
//     C C 
//       D 

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         char ch = 'A' + i;
//         for(int j=0; j<i; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

    //       1 
    //     1 2 1 
    //   1 2 3 2 1 
    // 1 2 3 4 3 2 1 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0; j<i; j++){
//             cout<<j+1<<" ";
//         }
//         for(int j=i+1; j>=1; j--){
//             cout<<j<<" ";
//         }
        
//         cout<<endl;
//     }
//     return 0;
//}
      
//       * 
//     *   * 
//   *       * 
// *           * 
//   *       * 
//     *   * 
//       * 
      


int main(){
    int n; 
    cin>>n;

    for(int i=0; i<n; i++){

        //space
        for(int j = 0; j<n-i+1; j++){
            cout<<" "<<" ";
        }
        // stars-1
        cout<<"*"<<" ";
        if(i != 0){
            //space middle
            for(int j = 0; j<(2*i-1); j++){ //odd no.
            cout<<" "<<" ";
            }
            cout<<"*"<<" ";
        }
        cout<<endl;
    } 
    // bottum part
    for(int i=0; i<n-1; i++){

        //space
        for(int j = 0; j<i+1; j++){
            cout<<" "<<" ";
        }
        // stars-1
        cout<<"*"<<" ";
        if(i != n-2){
            //space middle
            for(int j = 0; j<2*(n-i)-5; j++){
            cout<<" "<<" ";
            }
            cout<<"*"<<" ";
        }
        cout<<endl;
    } 
    return 0;
}




//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


void printDiamond(int n) {
    // Upper part
    for(int i = 1; i <= n; i += 2) {
        for(int j = 0; j < (n-i)/2; ++j) cout << " ";
        for(int j = 0; j < i; ++j) cout << "*";
        cout << endl;
    }
    // Lower part
    for(int i = n-2; i >= 1; i -= 2) {
        for(int j = 0; j < (n-i)/2; ++j) cout << " ";
        for(int j = 0; j < i; ++j) cout << "*";
        cout << endl;
    }
}