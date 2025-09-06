#include<iostream> 
#include<bits/stdc++.h>

using namespace std;
  
//o(n)

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        TreeNode* leftLCA = lowestCommonAncestor(root->left, p,q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p,q);

        if(leftLCA && rightLCA){
            return root;
        }else if(leftLCA != NULL){
            return leftLCA;
        }else{
            return rightLCA;
        }

        
    }
};