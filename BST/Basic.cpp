#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert (Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
}


// for All BST
Node* buildBST(vector<int> arr){
    Node* root = NULL;
    
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Key search

bool search(Node* root, int key){
    if(root == NULL) return false;

    if(root->data == key) return true;

    if(root->data > key) return search(root->left, key);

    else return search(root->right, key);

}

Node* getInorderSuccessor(Node* root){
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int key){ //key = delete node
    if(root == NULL ){
        return NULL;
    }
    if( key < root->data ){
        root->left = deleteNode(root->left, key);
    }else if(key > root->data){
        root->right = deleteNode(root->right, key);
    } else{
        //case 1 The Node with only one or no Child
        if(root->left == NULL){
            Node*temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        } else{
            //case 2 The node with 2 children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = deleteNode(root->right, IS->data);

        }
    }
    return root;

}

int main(){
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);
    // inorder(root);
    // cout << endl;
    //cout<<search(root, 8) <<endl;
    
    cout<< "Befor : ";
    inorder(root);
    cout<<endl;
    
    deleteNode(root, 5);
    cout<<"After : ";
    inorder(root);
    cout<<endl;

    return 0;
}