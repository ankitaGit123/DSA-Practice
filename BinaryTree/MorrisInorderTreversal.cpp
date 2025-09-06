#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

//tc o(n)

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//TC O(n)

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;

        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->val);
                curr = curr->right;
            }else{
                //find IP
                TreeNode* IP = curr->left;
                while(IP->right != NULL && IP->right != curr){
                    IP = IP->right;
                }
                if(IP->right == NULL){
                    IP->right = curr; //create
                    curr = curr->left;
                }else{
                    IP->right = NULL; //destroy
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        return ans;
        
    }
};