#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// Input
// head =
// [1,2,3,4,5]
// Output
// [5,4,3,2,1]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while( curr != NULL){
//             next = curr->next;  //imp correct value of next
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
        
//     }
// };