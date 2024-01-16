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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> qu;
        if (root == nullptr) return ans;
        qu.push(root);

        while (!qu.empty()) {
            int n = qu.size();
            int m;
            for (int i = 0; i < n; i++) {
                TreeNode* cur = qu.front();
                qu.pop();
                if (i == 0) {
                    m = cur->val;
                }
                else {
                    m = max(m, cur->val);
                }
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
            }
            ans.push_back(m);
        }
        return ans;

    }
};