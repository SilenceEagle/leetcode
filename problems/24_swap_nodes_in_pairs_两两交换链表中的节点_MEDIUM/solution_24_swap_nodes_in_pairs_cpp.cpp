#include <iostream>


 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0, head);
        ListNode* cur = dummyHead, *next = dummyHead->next, * nextnext, * tmp;
        while (next && next->next) {
            nextnext = next->next;
            cur->next = nextnext;
            tmp = nextnext->next;
            nextnext->next = next;
            next->next = tmp;
            cur = next;
            next = next->next;
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;

    }
};