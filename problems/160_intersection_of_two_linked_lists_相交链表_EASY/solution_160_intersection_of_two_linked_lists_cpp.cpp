#include <iostream>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lenA = 0, lenB = 0;
        while (curA) {
            lenA++;
            curA = curA->next;
        }
        while (curB) {
            lenB++;
            curB = curB->next;
        }
        ListNode* ans = NULL;
        curA = headA;
        curB = headB;
        if (lenA < lenB) {
            swap(lenA, lenB);
            swap(curA, curB);
        }
        for (int i = 0; i < lenA - lenB; i++) {
            curA = curA->next;
        }
        while (curA != NULL && curA != curB) {
            curA = curA->next;
            curB = curB->next;
        }
        ans = curA;
        return ans;
    }
};