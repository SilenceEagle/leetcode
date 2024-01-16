#include <iostream>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node.
 * */
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
    int getDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int lDepth = getDepth(root->left);
        if (-1 == lDepth) return -1;
        int rDepth = getDepth(root->right);
        if (-1 == rDepth) return -1;
        if (abs(lDepth-rDepth) > 1) {
            return -1;
        } else {
            return 1 + max(lDepth, rDepth);
        }
    }
    bool isBalanced(TreeNode* root) {
        int depth = getDepth(root);
        return depth == -1 ? false : true;
    }
};

class Solution2 {
public:
    int getDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        stack<TreeNode*> st;
        st.push(root);
        int depth = 0;
        int ans = 0;
        while (!st.empty()) {
            TreeNode* cur = st.top();
            if (cur) {
                st.push(nullptr);
                depth++;
                if (cur->right) st.push(cur->right);
                if (cur->left) st.push(cur->left);
            } else {
                st.pop(); // nullptr
                st.pop(); // father
                depth--;   
            }
            ans = max(ans, depth);
        }
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* cur = st.top();
            st.pop();
            if (abs(getDepth(cur->left) - getDepth(cur->right)) > 1) {
                return false;
            }
            if (cur->right) st.push(cur->right);
            if (cur->left) st.push(cur->left);
        }
        return true;
    }
};

