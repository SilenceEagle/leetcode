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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> qu;
        if (root == nullptr) return ans;
        qu.push(root);
        while (!qu.empty()) {
            int n = qu.size();
            double sum = 0.;
            for (int i = 0; i < n; i++) {
                TreeNode* cur = qu.front();
                qu.pop();
                sum += cur->val;
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
            }
            ans.push_back(sum / n);
        }
        return ans;
    }
};