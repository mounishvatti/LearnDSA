// in-order traversal : (left, root, right)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data1, Node* left1 = nullptr, Node* right1 = nullptr) : data(data1), left(left1), right(right1) {}
};

void inorder(Node* node){

    if(node == NULL) return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorder(root);
}