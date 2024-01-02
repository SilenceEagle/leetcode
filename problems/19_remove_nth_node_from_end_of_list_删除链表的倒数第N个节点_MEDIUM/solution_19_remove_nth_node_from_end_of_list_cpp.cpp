#include<iostream>

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0, head);
        ListNode* pre = dummyHead, * cur=dummyHead;
        while (n-- >=1 ) {
            cur = cur->next;
        }
        while (cur->next){
            cur = cur->next;
            pre = pre->next;
        }
        ListNode* tmp = pre->next;
        pre->next = tmp->next;
        delete tmp;
        head = dummyHead->next;
        delete dummyHead;
        return head;

    }
};