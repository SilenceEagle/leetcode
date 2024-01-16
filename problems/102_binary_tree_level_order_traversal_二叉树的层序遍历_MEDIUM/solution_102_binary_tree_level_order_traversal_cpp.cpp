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


// iteratively
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qu;
        if (root) qu.push(root);
        vector<vector<int>> ans;

        while (!qu.empty()) {
            int n = qu.size();
            vector<int> tmp;
            for (int i = 0; i < n; i++) {
                TreeNode* cur = qu.front();
                qu.pop();
                tmp.push_back(cur->val);
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
            }
            ans.push_back(tmp);
        }
        return ans;

    }
};


// recursively
class Solution2 {
public:
    void traverse(TreeNode* root, vector<vector<int>>& ans, int depth) {
        if (root) {
            if (ans.size() == depth) ans.push_back(vector<int>());
            ans[depth].push_back(root->val);
            traverse(root->left, ans, depth+1);
            traverse(root->right, ans, depth+1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int depth = 0;
        traverse(root, ans, depth); 
        return ans;

    }
};