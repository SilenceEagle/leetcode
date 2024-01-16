#include <iostream>
#include <stack>
#include <queue>

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

// preorder, iteratively
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        if (root == nullptr) return root;
        st.push(root);

        while (!st.empty()) {
            TreeNode* cur = st.top();
            if (cur) {
                st.pop();
                // push right
                if (cur->right) st.push(cur->right);

                // push left
                if (cur->left) st.push(cur->left);

                // push cur ans mark it as processed
                st.push(cur);
                st.push(nullptr); 
            } else {
                st.pop();
                cur = st.top();
                st.pop();
                swap(cur->left, cur->right);
            }
        }
        return root;
    }
};

// post-order, iteratively
class Solution2 {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        if (root == nullptr) return root;
        st.push(root);

        while (!st.empty()) {
            TreeNode* cur = st.top();
            if (cur) {
                // push cur ans mark it as processed
                st.push(nullptr); 

                // push right
                if (cur->right) st.push(cur->right);

                // push left
                if (cur->left) st.push(cur->left);

                
            } else {
                st.pop();
                cur = st.top();
                st.pop();
                swap(cur->left, cur->right);
            }
        }
        return root;
    }
};

// in-order, iteratively
class Solution3 {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        if (root == nullptr) return root;
        st.push(root);

        while (!st.empty()) {
            TreeNode* cur = st.top();
            if (cur) { 
                st.pop();

                // push right
                if (cur->right) st.push(cur->right);


                // push cur ans mark it as processed
                st.push(cur);
                st.push(nullptr);

                // push left
                if (cur->left) st.push(cur->left);

                
            } else {
                st.pop();
                cur = st.top();
                st.pop();
                swap(cur->left, cur->right);
            }
        }
        return root;
    }
};

// pre-order, recursively
class Solution4 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

// post-order, recursively
class Solution5 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left, root->right);
        return root;
    }
};

// in-order, recursively
class Solution6 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        invertTree(root->left);
        swap(root->left, root->right);
        invertTree(root->left);
        return root;
    }
};

// level-order, iteratively
class Solution7 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        queue<TreeNode*> qu;
        qu.push(root);
        while (!qu.empty()) {
            int n = qu.size();
            while (n--) {
                TreeNode* cur = qu.front();
                qu.pop();
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
                swap(cur->left, cur->right);
            }
        }
        return root;
    }
};