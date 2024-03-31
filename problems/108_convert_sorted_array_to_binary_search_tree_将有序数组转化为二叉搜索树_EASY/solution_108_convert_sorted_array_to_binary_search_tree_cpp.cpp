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
private:
    TreeNode* build(vector<int>& nums, int left, int right) {
        if (left >= right) return NULL;
        // [left, right)
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = build(nums, left, mid);
        root->right = build(nums, mid+1, right);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = build(nums, 0, nums.size());
        return root;
    }
};


class Solution2 {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        TreeNode* root = new TreeNode(0);

        queue<TreeNode*> nodeQue;
        queue<int> leftQue;
        queue<int> rightQue;
        nodeQue.push(root);
        leftQue.push(0);
        rightQue.push(nums.size());

        // [left, right)
        TreeNode* cur;
        int left, right, mid;

        while (!nodeQue.empty()) {
            cur = nodeQue.front(); 
            nodeQue.pop();

            left = leftQue.front();
            leftQue.pop();

            right = rightQue.front();
            rightQue.pop();

            mid = left + (right - left) / 2;
            cur->val = nums[mid];

            if (left < mid) {
                cur->left = new TreeNode(0);
                nodeQue.push(cur->left);
                leftQue.push(left);
                rightQue.push(mid);
            }

            if (mid+1 < right) {
                cur->right = new TreeNode(0);
                nodeQue.push(cur->right);
                leftQue.push(mid+1);
                rightQue.push(right);
            }
        }

        return root;
    }
};