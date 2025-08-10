
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Input
// head = [3,2,0,-4]
// pos = 1
// Output
// tail connects to node index 1



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
//     ListNode *detectCycle(ListNode *head) {
//         ListNode * slow = head;
//         ListNode * fast = head;
//         bool isCycle = false;

//         while( fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 isCycle = true;
//                 break;
//             }

//         }
//         if(!isCycle){
//             return NULL;
//         }
//         //if exist 
//         slow = head;
//         while( slow != fast){
//             slow = slow->next;
//             fast = fast->next;

//         }
//         return slow;
        
//     }
// };