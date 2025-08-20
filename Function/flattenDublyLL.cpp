#include<iostream>
using namespace std;

// tc == o(n)

// Input
// head =
// [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
// Output
// [1,2,3,7,8,11,12,9,10,4,5,6]



/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

// class Solution {
// public:
//     Node* flatten(Node* head) {
//         if(head == NULL) {
//             return head;
//         }
//         Node* curr = head;
//         while(curr != NULL){
//             if(curr->child != NULL){
//                 //flatten the child node
//                 Node* next = curr->next;
//                 curr->next = flatten(curr->child);

//                 curr->next->prev = curr;
//                 curr->child = NULL;
            

//                 //find tail
//                 while(curr->next != NULL){
//                     curr= curr->next;
//                 }

//                 //attach tail with next ptr
//                 if(next != NULL){
//                     curr->next = next;
//                     next->prev = curr;
//                 }
//             }
//             curr = curr->next;
//         }
//         return head;

//     }
// };


