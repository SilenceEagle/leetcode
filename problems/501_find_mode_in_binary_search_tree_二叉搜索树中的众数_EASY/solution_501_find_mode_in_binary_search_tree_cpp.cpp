#include <iostream>
#include <unordered_map>

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
private:
    vector<int> ans;
    int maxCount = 1;
    int curCount = 1;
    TreeNode* pre = NULL;
     
    void traverse(TreeNode* root) {
        if (root == NULL) return;
        traverse(root->left);
        if (pre != NULL && root->val == pre->val) {
            curCount += 1;
        } else {
            curCount = 1;
        }
        pre = root;
        if (curCount == maxCount) {
            ans.push_back(root->val);
        } else if (curCount > maxCount) {
            ans.clear();
            ans.push_back(root->val);
            maxCount = curCount;
        }
        traverse(root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        ans.clear();
        pre = NULL;
        maxCount = 1;
        curCount = 0;
        traverse(root);
        return ans;
    }
};


class Solution2 {
public: // naive
    void traverse(TreeNode* root, unordered_map<int, int>& map) {
        if (root == NULL) return;
        map[root->val] += 1;
        traverse(root->left, map);
        traverse(root->right, map);
    }
    bool static cmp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // sort in descending order
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans;
        unordered_map<int, int> map;
        traverse(root, map);
        vector<pair<int, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), cmp);
        ans.push_back(vec[0].first);
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i].second == vec[0].second) {
                ans.push_back(vec[i].first);
            } else {
                break;
            }

        }
        return ans;



    }
};