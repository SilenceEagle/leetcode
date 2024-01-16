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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> qu;
        int depth = 0;
        if (root == nullptr) return depth;
        qu.push(root);
        while (!qu.empty()) {
            depth += 1;
            int n = qu.size();
            while (n--) {
                TreeNode* cur = qu.front();
                qu.pop();
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
            }
        }
        return depth;

    }
};

class Solution2 {
public:
    int result;
    // pre-order traverse
    void getDepth(TreeNode* root, int depth) {
        result = max(result, depth);  // root
        if (root->left == nullptr && root->right == nullptr) return;

        // left
        if (root->left) getDepth(root->left, depth+1);

        // right
        if (root->right) getDepth(root->right, depth+1);
    }
    int maxDepth(TreeNode* root) {
        result = 0;
        if (root == nullptr) return result;
        getDepth(root, 1);
        return result;

    }
};


class Solution3 {
public:
    // post-order traverse
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));

    }
};

