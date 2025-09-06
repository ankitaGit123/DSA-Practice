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

TreeNode* prev = NULL;   // keep track of previous inorder node
    int ans = INT_MAX;       // store minimum difference

    int minDiffInBST(TreeNode* root) {
        if (root == NULL) return ans;

        // left subtree
        minDiffInBST(root->left);

        // current node
        if (prev != NULL) {
            ans = min(ans, root->val - prev->val);
        }
        prev = root;

        // right subtree
        minDiffInBST(root->right);

        return ans;
    }
};