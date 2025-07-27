#include<iostream>
using namespace std;

int main(){
    cout<< sizeof(int) <<endl; //4
    cout<< sizeof(long int) <<endl; //8
    cout<< sizeof(short int) <<endl; //2
    cout<< sizeof(long long) <<endl; //8

    // signed & unsigned

    unsigned int x = -10;
    cout<< x <<endl;

    return 0;
}