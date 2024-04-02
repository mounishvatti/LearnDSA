#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *node) { 
    if (node == NULL)
        return;
    
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    Node *node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5); 
}