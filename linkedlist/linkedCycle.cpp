#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Input
// head = [3,2,0,-4]
// pos = 1
// Output
// true


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */



// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode * slow = head;
//         ListNode * fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if( slow == fast){
//                 return true;
//             }
            
//         }
//         return false;
//     }
// };