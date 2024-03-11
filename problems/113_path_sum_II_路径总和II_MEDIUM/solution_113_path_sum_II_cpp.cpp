#include <iostream>
#include <vector>

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
    vector<vector<int>> ans;
    void traverse(TreeNode* cur, int curSum, vector<int> tmp) {
        if (!cur->left && !cur->right && curSum == 0) {
            ans.emplace_back(tmp);
        } 
        if (cur->right) {
            tmp.push_back(cur->right->val);
            traverse(cur->right, curSum-cur->right->val, tmp);
            tmp.pop_back();
        }
        if (cur->left) {
            tmp.push_back(cur->left->val);
            traverse(cur->left, curSum-cur->left->val, tmp);
            tmp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (!root) return ans;
        vector<int> tmp {root->val};
        traverse(root, targetSum-root->val, tmp);
        return ans;
    }
};

class Solution2 {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void traverse(TreeNode* cur, int curSum) {
        if (!cur->left && !cur->right && curSum == 0) {
            ans.emplace_back(path);
        } 
        if (cur->right) {
            path.push_back(cur->right->val);
            traverse(cur->right, curSum-cur->right->val);
            path.pop_back();
        }
        if (cur->left) {
            path.push_back(cur->left->val);
            traverse(cur->left, curSum-cur->left->val);
            path.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ans.clear();
        path.clear();
        if (!root) return ans;
        path.push_back(root->val);
        traverse(root, targetSum-root->val);
        return ans;
    }
};