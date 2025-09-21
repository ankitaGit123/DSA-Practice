#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Info class for each subtree
class Info {
public:
    int minVal;
    int maxVal;
    int sz;       // size of subtree
    int ans;      // size of largest BST in this subtree
    bool isBST;

    Info(int mi, int ma, int size, int res, bool bst) {
        minVal = mi;
        maxVal = ma;
        sz = size;
        ans = res;
        isBST = bst;
    }
};

Info helper(Node* root) {
    if (root == NULL) {
        return Info(INT_MAX, INT_MIN, 0, 0, true);
    }

    if (root->left == NULL && root->right == NULL) {
        return Info(root->data, root->data, 1, 1, true);
    }

    Info left = helper(root->left);
    Info right = helper(root->right);

    // If both subtrees are BST and current node fits the property
    if (left.isBST && right.isBST && root->data > left.maxVal && root->data < right.minVal) {
        int currMin = min(root->data, left.minVal);
        int currMax = max(root->data, right.maxVal);
        int currSize = left.sz + right.sz + 1;

        return Info(currMin, currMax, currSize, currSize, true);
    }

    // Not a BST, take max of left and right
    return Info(INT_MIN, INT_MAX, 0, max(left.ans, right.ans), false);
}

int largestBSTinBt(Node* root) {
    return helper(root).ans;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout << "Size of Largest BST is: " << largestBSTinBt(root) << endl;
    return 0;
}
