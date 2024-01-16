#include <iostream>
#include <vector>
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
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        int lDepth = 0, rDepth = 0;
        while (left) {
            left = left->left;
            lDepth++;
        }

        while (right) {
            right = right->right;
            rDepth++;
        }
        if (lDepth == rDepth) {
            return (2<<lDepth) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};