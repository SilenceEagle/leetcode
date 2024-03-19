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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) return root2;
        if (root2 == nullptr) return root1;

        root1->val += root2->val;

        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);

        return root1;

    }
};


class Solution2 {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) return root2;
        if (root2 == nullptr) return root1;

        queue<TreeNode*> que;
        que.push(root1);
        que.push(root2);

        while (!que.empty()) {
            TreeNode* c1 = que.front();
            que.pop();
            TreeNode* c2 = que.front();
            que.pop();

            c1->val += c2->val;

            if (c1->left != nullptr && c2->left != nullptr) {
                que.push(c1->left);
                que.push(c2->left);
            }

            if (c1->right != nullptr && c2->right != nullptr) {
                que.push(c1->right);
                que.push(c2->right);
            }

            if (c1->left == nullptr) c1->left = c2->left;
            if (c1->right == nullptr) c1->right = c2->right;
        }
        return root1;

        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);

        return root1;

    }
};