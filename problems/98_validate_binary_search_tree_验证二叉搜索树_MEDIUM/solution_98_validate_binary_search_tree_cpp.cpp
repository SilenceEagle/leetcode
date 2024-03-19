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
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* pre = NULL;
        while (!st.empty()) {
            TreeNode* cur = st.top();
            if (cur != NULL) {
                // not processed, need to pop it, push its right, push it with mark, push left
                st.pop();
                if (cur->right) st.push(cur->right);
                
                st.push(cur);
                st.push(NULL);

                if (cur->left) st.push(cur->left);
            } else {
                // processed
                st.pop(); // NULL
                cur = st.top();
                if (pre != NULL && (pre->val >= cur->val)) return false;
                pre = cur;
                st.pop();
            }
        }
        return true;

    }
};


class Solution2 {
private:
    vector<int> ans;
    void traverse(TreeNode* root) {
        if (root == NULL) return;
        traverse(root->left);
        ans.push_back(root->val);
        traverse(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        ans.clear();
        traverse(root);
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i-1] >= ans[i]) return false;
        }
        return true;
    }
};

