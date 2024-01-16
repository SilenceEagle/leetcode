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

// level traverse
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<TreeNode*> qu;
        int depth = 0;
        qu.push(root);
        while (!qu.empty()) {
            depth += 1;
            int n = qu.size();
            while (n--) {
                TreeNode* cur = qu.front();
                qu.pop();
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
                if (cur->right == nullptr && cur->left == nullptr) {
                    return depth;
                }
            }
        }
        return depth;
        

    }
};

// post-order traverse
class Solution2 {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right) {
            return 1 + minDepth(root->right);
        } else if (root->left && root->right == nullptr) {
            return 1 + minDepth(root->left);
        } else {
            return 1 + min(minDepth(root->left), minDepth(root->right));
        }
    }
};


// preorder traverse
class Solution3 {
public:
    // preorder
    int result;
    void getHeight(TreeNode* root, int height) {
        // if (root == nullptr) return;  // never used
        if (root->left == nullptr && root->right == nullptr) {
            result = min(result, height);
        } 
        if (root->left) {
            getHeight(root->left, 1 + height);
        }

        if (root->right) {
            getHeight(root->right, 1 + height);
        }
    }
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        result = INT_MAX;
        getHeight(root, 1);
        return result;
    }
};