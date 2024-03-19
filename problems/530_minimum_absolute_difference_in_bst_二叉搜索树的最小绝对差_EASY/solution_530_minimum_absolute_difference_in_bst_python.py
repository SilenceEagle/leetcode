from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    ans = inf
    pre = None
    def traverse(self, root):
        if root is None:
            return
        self.traverse(root.left)
        if self.pre is not None:
            self.ans = min(self.ans, root.val - self.pre.val)
        self.pre = root
        self.traverse(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        self.ans = inf
        self.pre = None
        self.traverse(root)
        return self.ans


class Solution2:

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        ans = inf
        pre = None
        st = [root]
        while st:
            cur = st[-1]
            if cur is not None:
                # not processed
                # pop itself
                st.pop()
                # push right
                if cur.right is not None:
                    st.append(cur.right)

                # push it with mark
                st.append(cur)
                st.append(None)

                # push left
                if cur.left is not None:
                    st.append(cur.left)
            else: # processed
                st.pop() # None
                cur = st.pop()
                if pre is not None:
                    ans = min(ans, cur.val - pre.val)
                pre = cur

        return ans
