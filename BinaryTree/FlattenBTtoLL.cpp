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
    
    TreeNode* nextRight = NULL;

    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }

        flatten(root->right);
        flatten(root->left);

        root->left = NULL;
        root->right = nextRight;

        nextRight = root;
        
    }
};