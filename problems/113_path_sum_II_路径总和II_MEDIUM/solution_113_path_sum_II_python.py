from typing import List, Optional
import copy

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

        
class Solution:
    ans = []
    path = []
    def traverse(self, cur, remain):
        if cur.left is None and cur.right is None and remain == 0:
            Solution.ans.append(copy.copy(Solution.path))
        if cur.right is not None:
            Solution.path.append(cur.right.val)
            self.traverse(cur.right, remain-cur.right.val)
            Solution.path.pop()
        if cur.left is not None:
            Solution.path.append(cur.left.val)
            self.traverse(cur.left, remain-cur.left.val)
            Solution.path.pop()
    
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        if root is None:
            return []
        Solution.ans = []
        Solution.path = [root.val]
        self.traverse(root, targetSum-root.val)
        return Solution.ans