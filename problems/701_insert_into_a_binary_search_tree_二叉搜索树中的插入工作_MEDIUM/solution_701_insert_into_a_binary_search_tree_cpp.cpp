#include <iostream>

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
    // recursive with return value
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* node = new TreeNode(val);
            return node;
        }
        if (root->val > val) {
            root->left = insertIntoBST(root->left, val);
        } else {
            root->right = insertIntoBST(root->right, val);
        }
        return root;

    }
};


class Solution2 {
private:
    TreeNode* pre;
public:
    // recursive without return value
    void insert(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* node = new TreeNode(val);
            if (pre->val > val) {
                pre->left = node;
            } else {
                pre->right = node;
            }
            return;
        }
        pre = root;
        if (root->val > val) {
            insert(root->left, val);
        } else {
            insert(root->right, val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* node = new TreeNode(val);
            return node;
        }
        pre = root;
        insert(root, val);
        return root;

    }
};


class Solution3 {
public:
    // iterative
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* node = new TreeNode(val);
            return node;
        }
        TreeNode* pre = root;
        TreeNode* cur = root;
        while (cur) {
            pre = cur;
            if (cur->val > val) {
                cur = cur->left;
            } else {
                cur = cur->right;
            }
        }
        TreeNode* node = new TreeNode(val);
        if (pre->val > val) {
            pre->left = node;
        } else {
            pre->right = node;
        }
        return root;

    }
};