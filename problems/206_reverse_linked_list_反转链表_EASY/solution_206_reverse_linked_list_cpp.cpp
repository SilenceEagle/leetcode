#include <iostream> 


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// iteratively
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp;
        ListNode* cur = head;
        ListNode* pre = NULL;
        while (cur) {
            tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre; 
    }
};

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode * cur = head, * next, * tmp;
//         if (NULL != head) {
//             next = head->next;
//             head->next = NULL;
//         }
//         while (cur != NULL && next != NULL) {
//             tmp = next->next;
//             next->next = cur;
//             cur = next;
//             next = tmp;
//         }

//         return cur;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//recursively
class Solution2 {
public:

    ListNode* helper(ListNode* pre, ListNode* cur) {
        if (cur == NULL) return pre;
        ListNode* next = cur->next;
        cur->next = pre;
        return helper(cur, next);
    }
    ListNode* reverseList(ListNode* head) {
        return helper(NULL, head); 
    }
};

// class Solution {
// public:
//     ListNode* reverseHelper(ListNode* head, ListNode* next) {
//         if (NULL == next) {
//             return head;
//         } else {
//             ListNode* nextnext = next->next;
//             next->next = head;
//             return reverseHelper(next, nextnext);
//         }
//     }
//     ListNode* reverseList(ListNode* head) {
//         if (NULL == head || NULL == head->next) {
//             return head;
//         } else {
//             ListNode* next = head->next;
//             ListNode* nextnext = next->next;
//             head->next = NULL;
//             next->next = head;
//             return reverseHelper(next, nextnext);
//         }
//     }
// };

class Solution3 {
public:
    ListNode* reverseList(ListNode* head) {
        if (NULL == head || NULL == head->next) return head;
        ListNode* last = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return last; 
    }
};