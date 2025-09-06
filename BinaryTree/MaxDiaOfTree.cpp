

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {  //o(n*n)
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHt = height(root->left);
        int rightHt = height(root->right);

        return max(leftHt, rightHt) +1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if( root == NULL){
            return 0;
        }

        int leftDia = diameterOfBinaryTree(root->left);
        int rightDia = diameterOfBinaryTree(root->right);
        int currDia = height(root->left ) + height(root->right);

        return max(currDia, max(leftDia, rightDia)); 
        
    }
};

// o(n)
class Solution {
public:

    int ans = 0;
    int height(TreeNode* root){ //o(n)
        if(root == NULL){
            return 0;
        }
        int leftHt = height(root->left);
        int rightHt = height(root->right);

        ans = max(ans, leftHt + rightHt); //currDia of root node

        return max(leftHt, rightHt) +1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
         height(root);

         return ans;
        
    }
};