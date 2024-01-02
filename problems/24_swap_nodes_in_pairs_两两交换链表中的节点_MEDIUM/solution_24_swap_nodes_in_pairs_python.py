# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummyHead = ListNode(0, head)
        cur = dummyHead
        while cur.next is not None and cur.next.next is not None:
            next = cur.next
            cur.next = next.next
            nnnext = next.next.next
            cur.next.next = next
            next.next = nnnext
            cur = next
        return dummyHead.next