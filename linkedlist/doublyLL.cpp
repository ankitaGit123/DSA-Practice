#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node*prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }
    // push_front function
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    };
    //push_back function
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = tail;
            tail->prev = newNode;
            tail = newNode;
        }
    };
    //pop_front function
    void pop_front(){
         if(head == NULL){
            cout<<"DL is empty\n";
            return;
        }

        Node*temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    };
    // pop_back function   0(n)
    void pop_back(){
        if(head == NULL){
            cout<<"DL is empty\n"; 
            return;
        }
        // if(head == tail) { // Only one element
        //     delete head;
        //     head = tail = NULL;
        //     return;
        // }
        Node*temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        };
        
        temp->next =NULL;
        delete tail;
        
    };

    //print function
    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data << "<=>";
            temp = temp->next;
        }
        cout<< "NULL\n";
    }

};

int main(){
    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);

    dll.push_back(5);   //   o/p == 4<=>3<=>2<=>1<=>NULL
    dll.pop_front();    //   o/p == 3<=>2<=>1<=>NULL
    dll.pop_back();
    
    dll.print();
    return 0;
}