#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec = {1,2,3,4,5}; //like Array

    // vec.erase(vec.begin()+2);
    // vec.insert(vec.begin()+2,100);
    // vec.clear();

    //vector<int> vec(5,10);  // output: 10 10 10 10 10
    //push_back() 
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.pop_back();


    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(2)<<endl;
    // cout<<vec.empty()<<endl;
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
//     cout<<endl;
//     return 0;
         
// }


//iterators

    vector<int> vec = {1,2,3,4,5};

    for(auto it = vec.begin(); it != vec.end(); it++){ //output: 1 2 3 4 5
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = vec.rbegin(); it != vec.rend(); it++){ //output: 5 4 3 2 1
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = vec.cbegin(); it != vec.cend(); it++){ //output: 1 2 3 4 5
        cout<<*it<<" ";
    }

    cout<<endl;
    return 0;
         
}