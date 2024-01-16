from typing import Optional


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def getDepth(self, root) -> int:
        if root is None:
            return 0
        lDepth = self.getDepth(root.left)
        if lDepth == -1:
            return -1
        
        rDepth = self.getDepth(root.right)
        if rDepth == -1:
            return -1

        if abs(lDepth - rDepth) <= 1:
            return 1 + max(lDepth, rDepth)
        else:
            return -1
        
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        depth = self.getDepth(root)
        return depth != -1
    

class Solution2:
    def getDepth(self, root) -> int:
        if root is None:
            return 0
        
        st = deque([root])
        ans, depth = 0, 0
        while st:
            cur = st[-1]
            if cur:
                st.append(None)
                depth += 1
                if cur.right:
                    st.append(cur.right)
                
                if cur.left:
                    st.append(cur.left)
            else:
                st.pop() # None
                st.pop() # Node
                depth -= 1
            ans = max(ans, depth)
        return ans
        
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        st = deque([root])
        while st:
            cur = st.pop()
            if abs(self.getDepth(cur.left) - self.getDepth(cur.right)) > 1:
                return False
            if cur.right:
                st.append(cur.right)
            if cur.left:
                st.append(cur.left)
        return True