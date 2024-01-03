#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//https://www.programmercarl.com/0142.%E7%8E%AF%E5%BD%A2%E9%93%BE%E8%A1%A8II.html#%E7%AE%97%E6%B3%95%E5%85%AC%E5%BC%80%E8%AF%BE
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head, * slow = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* x = head;
                ListNode* z = fast;
                while (x != z) {
                    x = x->next;
                    z = z->next;
                }
                return x;
            }
        }
        return NULL;
        
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution2 {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> see;
        ListNode* cur = head;
        while (cur && see.find(cur) == see.end()) {
            see[cur] = 0;
            cur = cur->next;
        }
        return cur;
        
    }
};

