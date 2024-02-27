#include <iostream>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node. */
struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // pre-order iterative
        if (root == nullptr) return 0;
        stack<TreeNode*> st;
        int ans = 0;
        st.push(root);
        while (!st.empty()) {
            TreeNode* cur = st.top();
            st.pop();

            // push right
            if (cur->right) st.push(cur->right);
            // check left
            if (cur->left) {
                if (cur->left->left == nullptr && cur->left->right == nullptr) {
                    ans += cur->left->val;  // left leaf node
                    // no push
                } else {
                    st.push(cur->left);
                }
            }
        }
        return ans;

    }
};


class Solution2 {
public:
    // preorder recursively
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;
        int leftValue = 0;
        if (root->left && root->left->left == nullptr && root->left->right == nullptr) {
            leftValue = root->left->val;
        }
        return leftValue + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);

    }
};