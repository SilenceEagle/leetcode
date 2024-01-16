from typing import Optional
from collections import deque


"""
# Definition for a Node.
"""
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next


class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        qu = deque()
        if root is None: 
            return None
        qu.append(root)
        while qu:
            pre = None
            n = len(qu)
            for _ in range(n):
                cur = qu.popleft()
                if pre:
                    pre.next = cur
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
                pre = cur
        return root
        