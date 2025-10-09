#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//covert List to vector

vector<int> listToVector(ListNode* head){
    vector<int> v;
    while(head){
        v.push_back(head->val);
        head = head->next;
    }
    return v;
}

//Create num1, num2  and result;

ListNode* Multiply2Num(ListNode* l1, ListNode* l2){
    vector<int> num1 = listToVector(l1);
    vector<int> num2 = listToVector(l2);

    int n= num1.size();
    int m= num2.size();

    vector<int> result(n+m, 0);

    //multipy each digits

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result[i+j] += num1[i] * num2[j];
            if(result[i+j] >= 10){
                result[i+j+1] += result[i+j]/10;
                result[i+j] %= 10;
            }
        }
    }
    //remove leading zeros from last
    while( result.size() > 1 && result.back() ==0){
        result.pop_back();
    }
    
    //convert result vector to linked list

    ListNode* head = new ListNode(result[0]);
    ListNode* temp = head;

    for(int i=1; i<result.size(); i++){
        temp->next = new ListNode(result[i]);
        temp = temp->next;
    }
    return head;
}

// Utility function to print linked list
void printList(ListNode* head){
    while(head){
        cout<< head-> val;
        if(head->next){
            cout<<endl;
        }
        head = head-> next;
    }
}

int main(){
    // Input: l1 = [3,4,2], l2 = [4,6,5]
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(2);
    l1->next->next->next = NULL;

    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(6);         
    l2->next->next = new ListNode(5);
    l2->next->next->next = NULL;

    ListNode* result = Multiply2Num(l1, l2);
    cout<<endl;

    printList(result);
}