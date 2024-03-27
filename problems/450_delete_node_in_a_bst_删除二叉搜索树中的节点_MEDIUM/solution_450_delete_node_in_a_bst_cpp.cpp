#include <iostream>

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
    // recursively
    TreeNode* deleteNode(TreeNode* root, int key) {
        // root is null, return null
        if (root == NULL) return NULL;
        if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
            return root;
        } else { // delete root
            // leaf node, return NULL
            if (root->left == NULL && root->right == NULL) return NULL;
            else if (root->left == NULL && root->right) return root->right;
            else if (root->left && root->right == NULL) return root->left;
            else {
                // make left child as the left child of the leftest leaf child of right sub-tree
                TreeNode* leftLeaf = root->right;
                while (leftLeaf->left) {
                    leftLeaf = leftLeaf->left;
                }
                leftLeaf->left = root->left;
                // return right child
                return root->right;
            }

        }

    }
};


class Solution2 {
public:
    // iteratively
    TreeNode* deleteNode(TreeNode* root, int key) {
        // root is null, return null
        if (root == NULL) return NULL;
        TreeNode* pre = NULL;
        TreeNode* cur = root;
        while (cur) {
            if (cur->val > key) {
                pre = cur;
                cur = cur->left;
            } else if (cur->val < key) {
                pre = cur;
                cur = cur->right;
            } else { // delete cur
                if (cur->left == NULL && cur->right == NULL) {
                    // leaf node
                    if (pre == NULL) {
                        // root node is leaf
                        return NULL;
                    } else {
                        if (pre->val > key) pre->left = NULL;
                        else pre->right = NULL;
                    }
                }
                else if (cur->left == NULL && cur->right) {
                    // replace cur with right child
                    if (pre == NULL) {
                        // cur is root, delete root
                        return root->right;
                    } else {
                        if (pre->val > key) pre->left = cur->right;
                        else pre->right = cur->right;
                    }

                }
                else if (cur->left && cur->right == NULL) {
                    // replace cur with left child
                    if (pre == NULL) {
                        // cur is root, delete root
                        return root->left;
                    } else {
                        if (pre->val > key) pre->left = cur->left;
                        else pre->right = cur->left;
                    }
                }
                else {
                    // make left child as the left child of the leftest leaf child of right sub-tree
                    TreeNode* leftLeaf = cur->right;
                    while (leftLeaf->left) {
                        leftLeaf = leftLeaf->left;
                    }
                    leftLeaf->left = cur->left;

                    // replace cur with right child
                    if (pre == NULL) return root->right; // cur is root, delete root
                    else {
                        if (pre->val > key) pre->left = cur->right;
                        else pre->right = cur->right;
                    }
                }
                break;  // break while after delete

            }
        }

        return root;
        
    }
};



class Solution3 {
private:
    // simplified iteratively
    TreeNode* deleteOneNode(TreeNode* target) {
        if (target == NULL) return NULL;
        if (target->right == NULL) return target->left;
        TreeNode* leftLeaf = target->right;
        while (leftLeaf->left) {
            leftLeaf = leftLeaf->left;
        }
        leftLeaf->left = target->left;
        return target->right;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        // root is null, return null
        if (root == NULL) return NULL;
        TreeNode* pre = NULL;
        TreeNode* cur = root;
        while (cur) {
            if (cur->val > key) {
                pre = cur;
                cur = cur->left;
            } else if (cur->val < key) {
                pre = cur;
                cur = cur->right;
            } else { // delete cur
                if (pre == NULL) {
                    // delete root
                    return deleteOneNode(root);
                } else {
                    if (pre->val > key) pre->left = deleteOneNode(cur);
                    else pre->right = deleteOneNode(cur);
                }
                break;  // break while after delete

            }
        }

        return root;
        
    }
};