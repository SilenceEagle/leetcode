from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if root is None: 
            return true
        st = [root]
        pre = None
        while st:
            cur = st[-1]
            if cur is not None:
                # not processed, pop it, push right, push it with mark, push left
                st.pop()
                if cur.right is not None:
                    st.append(cur.right)
                st.append(cur)
                st.append(None)
                if cur.left is not None:
                    st.append(cur.left)
            else:
                # processed
                st.pop() # None
                cur = st.pop()
                if pre is not None and pre.val >= cur.val:
                    return False
                pre = cur
        return True