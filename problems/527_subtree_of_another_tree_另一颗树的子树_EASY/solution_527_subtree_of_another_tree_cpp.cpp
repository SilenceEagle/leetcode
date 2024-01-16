#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node. */
struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// recursively
class Solution {
public:
    bool isSame(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) return true;
        else if (left == nullptr || right == nullptr || left->val != right->val) return false;
        else return isSame(left->left, right->left) && isSame(left->right, right->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == nullptr) return true;
        if (root == nullptr) return false;
        return isSame(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        
    }
};

// kmp
class Solution2 {
public:
    int lnull = 10001, rnull = 10002;
    void preTraverse(TreeNode* root, vector<int>& series) {
        series.push_back(root->val);

        if (root->left) preTraverse(root->left, series);
        else series.push_back(lnull);

        if (root->right) preTraverse(root->right, series);
        else series.push_back(rnull);
    }
    void getNext(const vector<int>& series, vector<int>& next) {
        int j = 0;
        next[0] = 0;
        for (int i = 1; i < series.size(); i++) {
            while (j && series[i] != series[j]) {
                j = next[j-1];
            }
            if (series[i] == series[j]) j++;
            next[i] = j;
        }
    }
    bool kmp(const vector<int>& s, const vector<int>& p) {
        int j = 0;
        vector<int> next(p.size(), 0);
        getNext(p, next);
        for (int i = 0; i < s.size(); i++) {
            while (j && s[i] != p[j]) {
                j = next[j-1];
            }
            if (s[i] == p[j]) j++;
            if (j == p.size()) return true;
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == nullptr) return true;
        if (root == nullptr) return false;

        // pre-order traverse root
        vector<int> s;
        preTraverse(root, s);

        // pre-order traverse subRoot
        vector<int> p;
        preTraverse(subRoot, p);

        return kmp(s, p);
    }
};

