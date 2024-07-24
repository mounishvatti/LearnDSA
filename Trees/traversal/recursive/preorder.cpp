// pre-order traversal : (root, left, right)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data1, Node* left1 = nullptr, Node* right1 = nullptr) : data(data1), left(left1), right(right1) {}
};

void preorder(Node* node){

    if(node == NULL) return;

    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    preorder(root);
}