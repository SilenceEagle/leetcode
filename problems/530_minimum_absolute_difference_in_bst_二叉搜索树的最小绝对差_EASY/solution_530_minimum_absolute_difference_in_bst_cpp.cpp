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
    int ans = INT_MAX;
    TreeNode* pre = NULL;
    void traverse(TreeNode* root) {
        if (root == NULL) return;
        traverse(root->left);  // left
        if (pre) {
            ans = min(ans, root->val - pre->val);
        }
        pre = root;
        traverse(root->right); // right
    }
public:  // recursively
    int getMinimumDifference(TreeNode* root) {
        ans = INT_MAX;
        pre = NULL;
        traverse(root);
        return ans;
    }
};


class Solution2 {
public:  // iterative
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        TreeNode* pre = NULL;
        TreeNode* cur = NULL;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            cur = st.top();
            if (cur) {
                // not processed
                // pop itself
                st.pop();

                // push right
                if (cur->right) st.push(cur->right);

                // push it with mark
                st.push(cur); st.push(NULL);

                // push left
                if (cur->left) st.push(cur->left);
            } else {
                // processed
                st.pop();  // NULL mark
                cur = st.top();
                st.pop();
                if (pre) ans = min(ans, cur->val - pre->val);
                pre = cur;
            }
        }
        return ans;
    }
};