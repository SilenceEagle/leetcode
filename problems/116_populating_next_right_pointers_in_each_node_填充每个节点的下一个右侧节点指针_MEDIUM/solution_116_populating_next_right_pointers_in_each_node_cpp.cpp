#include <iostream>
#include <queue>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> qu;
        if (root == NULL) return root;
        qu.push(root);

        while (!qu.empty()) {
            Node* pre = NULL;
            Node* cur;
            int n = qu.size();
            while (n--) {
                cur = qu.front();
                qu.pop();
                if (pre) {
                    pre->next = cur;
                }
                if (cur->left) qu.push(cur->left);
                if (cur->right) qu.push(cur->right);
                pre = cur;
            }
        }

        return root;
        
    }
};