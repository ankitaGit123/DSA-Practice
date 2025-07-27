#include<iostream>
using namespace std;

// * 
// * * 
// * * * 
// * * * * 
// * * * * *

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*"<<" ";
               
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
               
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// int main(){
//     int n;
//     cin>>n;
//     int num = 1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<num<<" ";
//            num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// A 
// B C 
// D E F 
// G H I J

// int main(){
//     int n;
//     cin>>n;

//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
               
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// A 
// B B 
// C C C 
// D D D D 
// E E E E E

// int main(){
//     int n;
//     cin>>n;

//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
           
//         }
//         ch=ch+1;
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// A 
// B A 
// C B A 
// D C B A 
// E D C B A 

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i; // starting character for the row
        for(int j = 0; j <=i; j++) {
            cout << (char)(ch - j) << " ";
        }
        cout << endl;
    }

    return 0;
}