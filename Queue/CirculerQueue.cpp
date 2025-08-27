#include<iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int currSize, cap;
    int f, r;
public:
    CircularQueue(int size){
        cap = size;

        arr = new int[cap];
        currSize = 0;
        f=0; 
        r=-1;
    }
    void push(int data){ //o(1)
        if(currSize == cap){
            cout<< "CQ is FULL\n";
            return;
        }
        r = (r+1) % cap;
        arr[r] = data;
        currSize++;
    }
    void pop(){  //o(1)
        if(currSize == 0){
            cout<<"CQ is Empty\n";
            return;
        }
        f = (f+1) % cap;
        currSize--;
    }
    int front(){  //o(1)
        if(empty()){
            cout<<"CQ is Empty\n";
            return -1;
        }
        return arr[f];
    }
    bool empty(){ //o(1)
        return currSize == 0;
    }

    void printArr(){
        for(int i=0; i<cap; i++){
            cout<< arr[i] <<" ";

        }
        cout<<endl;
    }
};
int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    //cq.printArr();
    while( !cq.empty()){
        cout<<cq.front() << " ";
        cq.pop();
    }
    cout<<endl;
    return 0;

}