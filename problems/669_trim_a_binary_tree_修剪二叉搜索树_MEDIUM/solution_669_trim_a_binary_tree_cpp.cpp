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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == NULL) return NULL;
        if (root->val < low) return trimBST(root->right, low, high);
        if (root->val > high) return trimBST(root->left, low, high);
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;

    }
};


class Solution2 {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // move root to [low, high]
        while (root && (root->val < low || root->val > high)) {
            if (root->val < low) root = root->right;
            else root = root->left;
        }

        // delete left nodes whose value is less than low
        TreeNode* cur = root;
        while (cur) {
            while(cur->left && cur->left->val < low) {
                cur->left = cur->left->right;
            }
            cur = cur->left;
        }

        // delete right nodes whose value is larger than high
        cur = root;
        while (cur) {
            while (cur->right && cur->right->val > high) {
                cur->right = cur->right->left;
            }
            cur = cur->right;
        }
        return root;

    }
};


