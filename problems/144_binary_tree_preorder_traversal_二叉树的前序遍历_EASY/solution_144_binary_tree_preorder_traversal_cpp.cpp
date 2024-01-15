#include <iostream>
#include <vector>
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


// recursively
class Solution {
public:
    void traverse(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) return;
        ans.push_back(root->val);
        traverse(root->left, ans);
        traverse(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;

    }
};


// iteratively
class Solution2 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        if (root == nullptr) return ans;

        st.push(root);

        while (!st.empty()) {
            // top is father
            TreeNode* f = st.top();
            ans.push_back(f->val);
            st.pop();

            // push right and left
            if (f->right) st.push(f->right);
            if (f->left) st.push(f->left);
        }

        return ans;

    }
};