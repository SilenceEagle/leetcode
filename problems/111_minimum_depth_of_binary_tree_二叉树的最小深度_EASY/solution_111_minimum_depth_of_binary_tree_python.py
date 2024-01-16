from typing import Optional
from collections import deque


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None: 
            return 0
        qu = deque([root])
        depth = 0
        while qu:
            depth += 1
            n = len(qu)
            for _ in range(n):
                cur = qu.popleft()
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
                if cur.left is None and cur.right is None:
                    return depth
        return depth