from typing import Optional
from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution2:
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
    

class Solution:
    ans = 0
    # pre order traverse
    def getDepth(self, root, depth):
        # root will not be none

        # root
        Solution.ans = max(Solution.ans, depth)

        if root.left is None and root.right is None:
            return

        # left
        if root.left:
            self.getDepth(root.left, depth+1)
        
        # right
        if root.right:
            self.getDepth(root.right, depth+1)

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        Solution.ans = 0
        if root is None:
            return 0
        self.getDepth(root, 1)

        return Solution.ans
    
    
class Solution:
    # post order traverse
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))