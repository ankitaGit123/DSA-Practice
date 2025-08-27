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

//preorder traversal  O(n)
void preOrder(Node* root){
    if( root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

}

//Inorder Traversal O(n)

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);
}

//Postorder Traversal O(n)

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data <<" ";
}

//level order traversal

void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() >0){
        Node* curr = q.front();
        q.pop();

        //line wise print
        if(curr == NULL){
            if( !q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            } else{
                break;
            }
        }

        cout<<curr->data <<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    preOrder(root); //1, 2, 3, 4, 5
    inorder(root); //2, 1, 4, 3, 5
    postOrder(root); //2, 4, 5, 3, 1
    levelOrder(root); //1, 2, 3, 4, 5
    //if we want   
    // 1
    // 2 3
    // 4 5
    cout<<endl;
    return 0;
} 