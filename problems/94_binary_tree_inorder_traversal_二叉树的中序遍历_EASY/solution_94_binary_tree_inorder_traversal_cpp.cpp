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
    vector<int> inorderTraversal(TreeNode* root) {
        while (root != nullptr || !tmp.empty()) {
            while (root) {
                tmp.push(root);
                root = root->left;
            }
            root = tmp.top();
            ans.push_back(root->val);
            tmp.pop();
            root = root->right;
        }
        return ans;
    }
private:
    vector<int> ans;
    stack<TreeNode*> tmp;
};


// iteratively
class Solution2 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if (root == nullptr) return ans;
        TreeNode* cur = root;
        while (cur || !st.empty()) {
            if (cur) {
                st.push(cur);
                cur = cur->left;
            } else {
                // top is a father node
                TreeNode* f = st.top();
                ans.push_back(f->val);
                st.pop();

                // push right child
                cur = f->right;

            }
        }
        return ans;
    }
};

// iteratively, unified version with marking
class Solution3 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if (root) st.push(root);
        while (!st.empty()) {
            TreeNode* f = st.top();
            if (f) {
                // pop father
                st.pop();

                // push right
                if (f->right) st.push(f->right);

                // push father and mark it 
                st.push(f);
                st.push(nullptr);

                // push left
                if (f->left) st.push(f->left);

            } else {
                // this is a marked node
                st.pop();
                f = st.top();
                st.pop();
                ans.push_back(f->val);
            }
        }
        return ans;
    }
};

