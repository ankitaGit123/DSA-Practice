#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }
    //push_front function  0(1)
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }
    //push_back function  0(1)
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    //pop_front function  0(1)
    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty\n";
            return;
        }

        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // pop_back function   0(n)
    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty\n"; 
            return;
        }
        if(head == tail) { // Only one element
            delete head;
            head = tail = NULL;
            return;
        }
        Node*temp = head;
        while( temp->next != tail){
            temp = temp->next;
        }
        temp->next =NULL;
        delete tail;
        tail = temp;
    }
    //insert function   0(n)
    void insert(int val, int pos){
        if(pos < 0){
            cout<<"invalid position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        int currPos = 0;
        while(temp != NULL && currPos < pos-1){
            temp = temp->next;
            currPos++;
        }
        if(temp == NULL){
            cout << "Position out of bounds\n";
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        if(newNode->next == NULL) tail = newNode;
    }

    //print a LL   0(n)
    void printLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    //search function   0(n)
    int search (int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }

        return -1;
    }
};


int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    
    ll.push_back(0); //   o/p==4 3 2 1 0 
    ll.pop_front(); //    o/p==3 2 1 0    deleteed 4
    ll.printLL();  //     o/p==4 3 2 1
    ll.pop_back();//      o/p==3 2 1
    ll.printLL();
    ll.insert(4, 1); //    o/p==3 4 2 1 

    ll.printLL();
    cout<< ll.search(2) <<endl; //   o/p==3 4 2 1    pos == 2


    return 0;
}