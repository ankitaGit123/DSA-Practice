#include<iostream>
using namespace std;

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 

 
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
               
        }
        cout<<endl;
    }
    return 0;
}

// * * * * 
// * * * * 
// * * * * 
// * * * *

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<"*"<<" ";
               
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for(int j=0; j<n; j++){
//             cout<<ch;
//             ch = ch +1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 1  2  3  4  
// 5  6  7  8  
// 9  10  11  12  
// 13  14  15  16
// int main(){
//     int n;
//     cin>>n;
//     int num = 1;
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<n; j++){  // no. of line  hmasha
//             cout<<num<<"  ";
//             num++;
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

// A B C D 
// E F G H 
// I J K L 
// M N O P 

// int main(){
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<n; j++){
//             cout<<ch<<" ";
//             ch = ch +1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }