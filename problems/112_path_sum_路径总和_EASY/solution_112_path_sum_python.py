from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root is None:
            return False
        if (root.left is None and root.right is None and root.val == targetSum):
            return True
        return self.hasPathSum(root.left, targetSum-root.val) or self.hasPathSum(root.right, targetSum-root.val)
    

class Solution2:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root is None:
            return False
        # iterative
        st = [[root, root.val]]
        while st:
            cur, curSum = st.pop()
            if cur.left is None and cur.right is None and curSum == targetSum:
                return True
            if cur.right:
                st.append([cur.right, curSum+cur.right.val])
            if cur.left:
                st.append([cur.left, curSum+cur.left.val])
        return False
 
        