# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummyHead = ListNode(0, head)
        pre, cur = dummyHead, dummyHead
        while n >= 1:
            cur = cur.next
            n -= 1
        
        while cur.next is not None:
            cur = cur.next
            pre = pre.next
        
        pre.next = pre.next.next
        return dummyHead.next