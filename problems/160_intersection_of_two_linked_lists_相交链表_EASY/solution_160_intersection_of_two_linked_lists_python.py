# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        curA = headA
        curB = headB
        lenA, lenB = 0, 0
        while curA is not None:
            lenA += 1
            curA = curA.next
        while curB is not None:
            lenB += 1
            curB = curB.next
        curA, curB = headA, headB

        if lenA < lenB:
            lenA, lenB = lenB, lenA
            curA, curB = curB, curA
        
        gap = lenA - lenB
        while gap:
            curA = curA.next
            gap -= 1
        
        while curA is not None:
            if curA == curB:
                return curA
            else:
                curA = curA.next
                curB = curB.next
        return None

        