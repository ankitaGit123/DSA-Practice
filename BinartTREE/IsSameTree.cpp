#include <iostream>
using namespace std;
//Input
// p = [1,2,3]
// q = [1,2,3]
// Output = true

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
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p == NULL || q == NULL ){
            return p == q;
        }
        bool isLeftSame = isSameTree( p->left, q->left);
        bool isRightSame = isSameTree( p->right, q->right);

        return isLeftSame && isRightSame && p->val == q->val;
        
    }
};