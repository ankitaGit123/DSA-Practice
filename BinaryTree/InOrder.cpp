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



int search(vector<int>& inorder, int left, int right, int val){
    for(int i=left; i<=right; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}


TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preIdx, int left, int right){
    if(left > right){
        return NULL;
    }

    // Step 1: Take current root from preorder
    TreeNode* root = new TreeNode(preorder[preIdx]);

    // Step 2: Find this root in inorder
    int inIdx = search(inorder, left, right, preorder[preIdx]);

    // Step 3: Move preorder index forward
    preIdx++;

    // Step 4: Recursively build left subtree
    root->left = helper(preorder, inorder, preIdx, left, inIdx-1);

    // Step 5: Recursively build right subtree
    root->right = helper(preorder, inorder, preIdx, inIdx+1, right);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preIdx = 0;
    return helper(preorder, inorder, preIdx, 0, inorder.size()-1);
}

