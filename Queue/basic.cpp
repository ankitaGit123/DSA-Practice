#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class Queue{
//     Node* head;
//     Node* tail;

//     public:
//         Queue(){
//             head = tail = NULL;
//         }
//         void push(int val){
//             Node* newNode = new Node(val);

//             if(isEmpty()){
//                 head = tail = newNode;
//             }else{
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
//         void pop(){
//             if(isEmpty()){
//                 cout<<"LL is Empty\n";
//                 return;
//             }
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//         int front(){
//             if(isEmpty()){
//                 cout<<"LL is Empty\n";
//                 return -1; // or throw exception
//             }
//             return head->data;
//         }
//         bool isEmpty(){
//             return head == NULL;
//         }
    
//         // For compatibility with main()
//         bool empty(){
//             return isEmpty();
//         }
//     };

    int main(){
        //Queue q;

        queue<int> q;
        q.push(1);
        q.push(2);
        q.push(3);
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
        return 0;
    }