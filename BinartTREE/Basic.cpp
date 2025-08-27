#include<iostream> 
#include<bits/stdc++.h>

using namespace std;


//0(n)
class Node{
    public:

    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);//LEFT
    root->right = buildTree(preorder); //RIGHT

    return root;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout<<root->data<<endl; //1
    cout<<root->left->data<<endl; //2
    cout<<root->right->data<<endl; //3
    return 0;
} 