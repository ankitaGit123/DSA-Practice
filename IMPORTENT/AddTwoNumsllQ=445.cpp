#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> s1, s2;

    // Push all digits into stacks
    while (l1 != NULL) {
        s1.push(l1->val);
        l1 = l1->next;
    }
    while (l2 != NULL) {
        s2.push(l2->val);
        l2 = l2->next;
    }

    ListNode* result = NULL;
    int carry = 0;

    // Pop from stacks and add
    while (!s1.empty() || !s2.empty() || carry) {
        int sum = carry;
        if (!s1.empty()) { sum += s1.top(); s1.pop(); }
        if (!s2.empty()) { sum += s2.top(); s2.pop(); }

        carry = sum / 10;
        sum = sum % 10;

        // Insert at front of result list
        ListNode* node = new ListNode(sum);
        node->next = result;
        result = node;
    }

    return result;
}

// Utility function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Input: l1 = [7,2,4,3], l2 = [5,6,4]
    ListNode* l1 = new ListNode(7);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    l1->next->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Output: ";
    printList(result);
}
