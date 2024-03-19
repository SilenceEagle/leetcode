from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if root1 is None:
            return root2
        
        if root2 is None:
            return root1
        
        root1.val += root2.val
        root1.left = self.mergeTrees(root1.left, root2.left)
        root1.right = self.mergeTrees(root1.right, root2.right)

        return root1
    
class Solution2:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if root1 is None:
            return root2
        
        if root2 is None:
            return root1
        
        que = [root1, root2]

        while (que):
            c1 = que.pop(0)
            c2 = que.pop(0)
            c1.val += c2.val
            if c1.left and c2.left:
                que.append(c1.left)
                que.append(c2.left)
            if c1.right and c2.right:
                que.append(c1.right)
                que.append(c2.right)
            if c1.left is None:
                c1.left = c2.left
            if c1.right is None:
                c1.right = c2.right
        
        return root1