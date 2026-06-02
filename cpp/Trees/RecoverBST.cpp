#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val){
        this->val = val;
    }

    TreeNode *first;
    TreeNode *prev;
    TreeNode *middle;
    TreeNode *last;

    void inorder(TreeNode *root){
        if (root == NULL){
            return;
        }
        inorder(root->left);
        if (prev != NULL && root->val < prev->val){
            if (first == NULL)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }
    void recoverTree(TreeNode *root){
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);

        inorder(root);

        if (first != NULL && last != NULL){
            int temp = first->val;
            first->val = last->val;
            last->val = temp;
        }
        else if (first != NULL && middle != NULL){
            int temp = first->val;
            first->val = middle->val;
            middle->val = temp;
        }
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2); 
    
}