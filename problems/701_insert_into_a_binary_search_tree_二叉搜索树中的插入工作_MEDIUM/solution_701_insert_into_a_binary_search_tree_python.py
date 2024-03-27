from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    # recursive with return value
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if root is None:
            return TreeNode(val)
        if (root.val > val):
            root.left = self.insertIntoBST(root.left, val)
        else:
            root.right = self.insertIntoBST(root.right, val)
        return root
    

class Solution2:
    pre = None
    # recursive without return value
    def insert(self, cur, val):
        if cur is None:
            if self.pre.val > val:
                self.pre.left = TreeNode(val)
            else:
                self.pre.right = TreeNode(val)
            return
        self.pre = cur
        if cur.val > val:
            self.insert(cur.left, val)
        else:
            self.insert(cur.right, val)

    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if root is None:
            return TreeNode(val)
        self.pre = root
        self.insert(root, val)
        return root
    

class Solution3:
    # iterative
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if root is None:
            return TreeNode(val)
        pre = root
        cur = root
        while cur:
            pre = cur
            if cur.val > val:
                cur = cur.left
            else:
                cur = cur.right
        if pre.val > val:
            pre.left = TreeNode(val)
        else:
            pre.right = TreeNode(val)
        return root