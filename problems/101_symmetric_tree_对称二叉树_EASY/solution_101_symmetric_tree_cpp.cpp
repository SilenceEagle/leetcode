#include <iostream>
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


class Solution {
public:
    bool symmetric(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) return true;
        else if (left == nullptr || right == nullptr) return false;
        else if (left->val != right->val) return false;
        else {
            return symmetric(left->left, right->right) && symmetric(left->right, right->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        else return symmetric(root->left, root->right);
    }
};


class Solution2 {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        queue<TreeNode*> qu;
        qu.push(root->left);
        qu.push(root->right);
        while (!qu.empty()) {
            TreeNode* left = qu.front();
            qu.pop();
            TreeNode* right = qu.front();
            qu.pop();

            if (!(left == nullptr && right == nullptr))  {
                if (left == nullptr || right == nullptr || left->val != right->val) {
                    return false;
                } else {
                    qu.push(left->left);
                    qu.push(right->right);
                    qu.push(left->right);
                    qu.push(right->left);
                }
            }
        } 
        return true;
    }
};