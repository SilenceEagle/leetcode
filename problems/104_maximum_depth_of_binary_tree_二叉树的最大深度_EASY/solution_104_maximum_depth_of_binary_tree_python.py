from typing import Optional
from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        qu = deque()
        if root is None: 
            return 0
        depth = 0
        qu.append(root)
        while qu:
            n = len(qu)
            depth += 1
            for _ in range(n):
                cur = qu.popleft()
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
        return depth