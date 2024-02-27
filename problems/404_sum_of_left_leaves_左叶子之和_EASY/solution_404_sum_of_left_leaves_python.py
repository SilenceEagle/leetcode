from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    # postorder recursively
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        
        leftValue = self.sumOfLeftLeaves(root.left)
        if root.left is not None and root.left.left is None and root.left.right is None:
            leftValue = root.left.val
        rightValue = self.sumOfLeftLeaves(root.right)
        return leftValue + rightValue
    

class Solution2:
    # preorder iteratively
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        
        st = [root]
        ans = 0
        while st:
            cur = st.pop()
            # push right
            if cur.right:
                st.append(cur.right)
            
            # check left
            if cur.left is not None and cur.left.left is None and cur.left.right is None:
                ans += cur.left.val
            elif cur.left is not None:
                st.append(cur.left)
        return ans 