from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    pre = None
    def traverse(self, root):
        if root is None:
            return
        self.traverse(root.right)
        if self.pre:
            root.val += self.pre.val
        self.pre = root
        self.traverse(root.left)

    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.pre = None
        self.traverse(root)
        return root


class Solution2:
    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return None
        pre = None
        st = [root]
        while st:
            cur = st.pop()
            if cur:
                # not processed
                if cur.left:
                    st.append(cur.left)
                st.append(cur)
                st.append(None) # mark as processed
                if cur.right:
                    st.append(cur.right)
            else:  # processed
                cur = st.pop()
                if pre:
                    cur.val += pre.val
                pre = cur
        return root