#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Brute solution    
// sub arr = n*(n+1)/2
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    for(int st = 0; st<n; st++){
        for(int end = st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<< arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//Maximum sum
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT_MIN;

    for(int st = 0; st<n; st++){
        int currSum = 0;
        for(int end = st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
           
            }
        }       
        cout<<"max subarr sum =  " << maxSum <<endl;
    return 0;
}