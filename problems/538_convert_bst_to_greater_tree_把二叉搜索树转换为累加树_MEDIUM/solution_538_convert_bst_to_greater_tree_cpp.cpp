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
private:
    TreeNode* pre = NULL;
    void traverse(TreeNode* cur) {
        if (cur == NULL) return;
        traverse(cur->right);
        if (pre) cur->val += pre->val;
        pre = cur;
        traverse(cur->left);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        pre = NULL;
        traverse(root);
        return root;
    }
};


class Solution2 {
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root == NULL) return NULL;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* cur;
        TreeNode* pre = NULL;
        while (!st.empty()) {
            cur = st.top();
            st.pop();
            if (cur) {
                // not processed
                if (cur->left) st.push(cur->left);
                st.push(cur);
                st.push(NULL);  // mark as processed
                if (cur->right) st.push(cur->right);
            } else {
                cur = st.top();
                st.pop();
                if (pre) cur->val += pre->val;
                pre = cur;
            }
        }
        return root;
    }
};