#include<iostream> 
#include<bits/stdc++.h>
#include<queue>
#include<map>

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
void preOrder(Node* root){ //1 2 3 4 5 
    if( root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

}

//Inorder Traversal O(n) 

void inorder(Node* root){ //2 1 4 3 5 
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

void levelOrder(Node* root){ //2 4 5 3 1
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
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

//Height of Tree

//o(n)
int height(Node* root){ //Height of Tree: 3
    if(root == NULL){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt, rightHt) + 1;
};
//Count of Tree

//o(n)
int count(Node* root){ // Count of Tree: 5
    if(root == NULL){ 
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount + rightCount + 1;
};

//Sum of Tree

//o(n)
int sum(Node* root){ // Sum of Tree: 15
    if(root == NULL){ 
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    return leftSum + rightSum + root->data;
}
// Top view of Binary Tree
// void topView(Node* root){  // o(nlogn)
//     queue<pair<Node*, int>> q; //(node, HD)
//     map<int, int> m; //HD, node value
//     q.push({root, 0});

//     while(q.size() > 0){
//         Node* curr = q.front().first;
//         int 
//         q.pop();

//         if(m.find(currHD) == m.end()){
//             m[currHD] = curr->data;
//         }

//         if(curr->left != NULL){
//             q.push({curr->left, currHD - 1});
//         }

//         if(curr->right != NULL){
//             q.push({curr->right, currHD + 1});
//         }
//     }
//     for(auto it: m){
//         cout << it.second << " ";
//     }
//     cout << endl;
// } 

//kth level of tree
void KthLevel(Node* root, int k){
    if(root == NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }

    KthLevel(root->left, k-1);
    KthLevel(root->right, k-1);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    preOrder(root); //1, 2, 3, 4, 5
    cout << endl;
    inorder(root); //2, 1, 4, 3, 5
    cout << endl;
    postOrder(root); //2, 4, 5, 3, 1
    cout << endl;
    levelOrder(root); //1, 2, 3, 4, 5
    //if we want   
    // 1
    // 2 3
    // 4 5

    cout << "Height of Tree: " << height(root) << endl;  // Height of Tree: 3 
    cout << "Count of Tree: " << count(root) << endl;  // Count of Tree: 5
    cout << "Sum of Tree: " << sum(root) << endl;  // Sum of Tree: 15

    KthLevel(root, 3); //4 5 
    //topView(root);

    return 0;
} 