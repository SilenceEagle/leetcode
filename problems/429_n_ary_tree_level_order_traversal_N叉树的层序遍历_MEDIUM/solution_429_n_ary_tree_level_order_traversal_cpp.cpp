#include <iostream>
#include <vector>
#include <queue>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> qu;
        if (root == nullptr) return ans;
        qu.push(root);
        while (!qu.empty()) {
            int n = qu.size();
            vector<int> tmp;
            while (n--) {
                Node* cur = qu.front();
                qu.pop();
                tmp.push_back(cur->val);
                for (Node* c: cur->children) {
                    qu.push(c);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};


class Solution2 {
public:
    void traverse(Node* root, vector<vector<int>>& ans, int depth) {
        if (root == nullptr) return;
        if (ans.size() == depth) ans.push_back(vector<int>());
        ans[depth].push_back(root->val);
        for (Node* c: root->children) {
            traverse(c, ans, depth+1);
        }
    }

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        traverse(root, ans, 0);
        return ans;
    }
};