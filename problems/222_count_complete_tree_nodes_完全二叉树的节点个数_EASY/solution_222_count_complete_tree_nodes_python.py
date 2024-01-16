from typing import Optional



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        left = root.left
        right = root.right

        lDepth, rDepth = 1, 1

        while left:
            lDepth += 1
            left = left.left
        
        while right:
            rDepth += 1
            right = right.right
        
        if lDepth == rDepth:
            return 2**lDepth - 1

        return 1 + self.countNodes(root.left) + self.countNodes(root.right)
