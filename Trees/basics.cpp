#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;

    Node(int data)
    {
        this->data = 0;
        this->right = NULL;
        this->left = NULL;
    }
};

/*
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
*/

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
}
