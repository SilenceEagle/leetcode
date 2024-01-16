from typing import Optional
from collections import deque


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution1:
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
    
# post-order traverse
class Solution2:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        if root.left and root.right is None:
            return 1 + self.minDepth(root.left)
        elif root.right and root.left is None:
            return 1 + self.minDepth(root.right)
        else:
            return 1 + min(self.minDepth(root.left), self.minDepth(root.right))


# pre-order traverse
class Solution:
    ans = 1000000 # > 1e5
    # pre-order traverse
    def getHeight(self, root, height):
        if root.left is None and root.right is None:
            Solution.ans = min(Solution.ans, height)
            return
        if root.left:
            self.getHeight(root.left, height+1)
        if root.right:
            self.getHeight(root.right, height+1)

    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        Solution.ans = 1000000
        self.getHeight(root, 1)
        return Solution.ans
