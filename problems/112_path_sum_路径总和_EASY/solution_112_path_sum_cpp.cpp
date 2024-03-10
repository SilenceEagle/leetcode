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
    bool hasSum(TreeNode* root, int curSum, int targetSum) {
        // current node is leaf
        if (root->left == nullptr && root->right == nullptr) {
            if (curSum == targetSum) {
                return true;
            } else {
                return false;
            }
            
        } else if (root->left && root->right) {
            return hasSum(root->left, curSum+root->left->val, targetSum) || hasSum(root->right, curSum+root->right->val, targetSum); 
        } else if (root->left) {
            return hasSum(root->left, curSum+root->left->val, targetSum);
        } else {
            return hasSum(root->right, curSum+root->right->val, targetSum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        return hasSum(root, root->val, targetSum);
    }
};

class Solution2 {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        if (!root->left && !root->right && root->val == targetSum) return true;
        return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val);
    }
};

class Solution3 {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        // iterative pre-order
        stack<pair<TreeNode*, int>> st;
        st.push(pair<TreeNode*, int>(root, root->val));
        while (!st.empty()) {
            pair<TreeNode*, int> cur = st.top();
            st.pop();
            if (!cur.first->left && !cur.first->right && cur.second == targetSum) return true;
            if (cur.first->right) st.push(pair<TreeNode*, int>(cur.first->right, cur.second+cur.first->right->val));
            if (cur.first->left) st.push(pair<TreeNode*, int>(cur.first->left, cur.second+cur.first->left->val));
        }
        return false;
        
    }
};