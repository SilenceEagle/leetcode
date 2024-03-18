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
    TreeNode* split(vector<int>& inorder, int inBegin, int inEnd, vector<int>& postorder, int postBegin, int postEnd) {
        if (inEnd - inBegin == 0) return NULL;

        // get root
        int rootValue = postorder[postEnd-1];
        TreeNode* root = new TreeNode(rootValue);

        // split inorder
        int delimiter;
        for (delimiter = inBegin; delimiter < inEnd; delimiter++) {
            if (inorder[delimiter] == rootValue) break;
        }

        root->left = split(inorder, inBegin, delimiter, postorder, postBegin, postBegin+delimiter-inBegin);
        root->right = split(inorder, delimiter+1, inEnd, postorder, postBegin+delimiter-inBegin, postEnd-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return split(inorder, 0, inorder.size(), postorder, 0, postorder.size());

    }
};