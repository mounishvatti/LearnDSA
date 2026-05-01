#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <array>
#include <utility>
#include <numeric>
#include <limits>
#include <climits>
#include <cmath>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data, TreeNode *left = nullptr, TreeNode *right = nullptr) : data(data), left(left), right(right) {}
};

vector<int> preorderTraversal(TreeNode *root) // (root, left, right)
{
    vector<int> preorder;
    if (root == NULL)
        return preorder;

    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        preorder.push_back(root->data);
        if (root->right != NULL)
            st.push(root->right);
        if (root->left != NULL)
            st.push(root->left);
    }
    return preorder;
}