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


//o(n)

//write preorder code from basic
int sumTree(root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sunTree(root->left);
    int rightSum = sunTree(root->right);

    root->data += leftSum + rightSum;
    return root->data;
}