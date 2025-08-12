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
class CircularList{
    Node*head;
    Node*tail;
public:
    CircularList(){
        head = tail = NULL;
    }
    //insert at head
    // o/p === 4 3 2 1 4

    void insertAtHead(int val){
        //create new node
        Node* newNode = new Node(val);

        if(tail == NULL){ //head or tail both correct
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode-> next = head;
            head = newNode;
            tail->next = head;;

        }
    };
    //detele at Head
    void deleteAtHead(){
        if(head ==NULL) return;
        else if(head== tail){
            delete head;
            head = tail = NULL;
        } else{
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }

    };
    //insert at tail
    void insertAtTail(int val){
        //create new node
        Node* newNode = new Node(val);

        if(tail==NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
            
        }
    };
        //detele at tail
    void deleteAtTail(){
        if(head ==NULL) return;
        else if(head== tail){
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }

    };
    //print function
    void print(){
        if(head == NULL) return;
        cout<< head->data <<" ";
        Node* temp = head->next;

        while(temp != head){
            cout<< temp->data <<" ";
            temp = temp->next;
        }
        cout<< temp->data <<endl;
    }
};


int main(){

    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtHead(0);
    cll.insertAtTail(4); //0 3 2 1 4 0
    cll.deleteAtHead(); //3 2 1 4 3
    cll.deleteAtTail();// 3 2 1 3
    cll.print();
    return 0;
}

