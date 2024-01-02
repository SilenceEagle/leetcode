# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# recursively 
class Solution:
    def reverseHelper(self, pre, cur):
        if (cur is not None):
            next = cur.next
            cur.next = pre
            return self.reverseHelper(cur, next)
        else:
            return pre
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        return self.reverseHelper(None, head)
        
# class Solution:
#     def reverseHelper(self, head, next):
#         if (head is not None and next is not None):
#             nextnext = next.next
#             next.next = head
#             return self.reverseHelper(next, nextnext)
#         else:
#             return head
#     def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         if head is None or head.next is None:
#             return head
#         cur = head
#         next = cur.next
#         head.next = None
#         return self.reverseHelper(cur, next)

class Solution3:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if (head is None or head.next is None):
            return head
        last = self.reverseList(head.next)
        head.next.next = head
        head.next = None
        return last
        


# iteratively
class Solution2:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        pre = None
        cur = head
        while (cur is not None):
            next = cur.next
            cur.next = pre
            pre = cur
            cur = next
        return pre
# class Solution:
#     def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         if head is None or head.next is None:
#             return head
#         cur = head
#         next = cur.next
#         head.next = None
#         while (cur is not None and next is not None):
#             nextnext = next.next
#             next.next = cur
#             cur = next
#             next = nextnext
#         return cur
        