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
    void traverse(TreeNode*root, vector<int>& path, vector<string>& ans) {
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            string pathStr;
            for (int i = 0; i < path.size() - 1; i++) {
                pathStr += (to_string(path[i]) + "->");
            }
            pathStr += to_string(path[path.size()-1]);
            ans.push_back(pathStr);
        }
        if (root->left) {
            traverse(root->left, path, ans);
            path.pop_back();
        }
        if (root->right) {
            traverse(root->right, path, ans);
            path.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> path;
        if (root == nullptr) return ans;
        traverse(root, path, ans);
        return ans;
    }
};

class Solution2 {
public:
    void traverse(TreeNode*root, string path, vector<string>& ans) {
        path += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
        }
        if (root->left) {
            traverse(root->left, path+"->", ans);
        }
        if (root->right) {
            traverse(root->right, path+"->", ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path;
        if (root == nullptr) return ans;
        traverse(root, path, ans);
        return ans;
    }
};