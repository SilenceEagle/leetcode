from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    # recursively
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root is None:
            return root
        if root.val > key:
            root.left = self.deleteNode(root.left, key)
            return root
        elif root.val < key:
            root.right = self.deleteNode(root.right, key)
            return root
        else:
            if root.right is None:
                return root.left
            # move left child as the left child of the leftest leaf of right sub-tree
            leftLeaf = root.right
            while leftLeaf.left:
                leftLeaf = leftLeaf.left
            leftLeaf.left = root.left
            return root.right
        

class Solution2:
    # iteratively
    def deleteOneNode(self, target: Optional[TreeNode]):
        if target is None:
            return None
        if target.right is None:
            return target.left
        # move left child as the left child of the leftest leaf of right sub-tree
        leftLeaf = target.right
        while leftLeaf.left:
            leftLeaf = leftLeaf.left
        leftLeaf.left = target.left
        return target.right
        
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root is None:
            return root
        pre = None
        cur = root
        while cur:
            if cur.val > key:
                pre = cur
                cur = cur.left
            elif cur.val < key:
                pre = cur
                cur = cur.right
            else:
                if pre is None:  # delete root
                    return self.deleteOneNode(cur)
                if pre.val > key:
                    pre.left = self.deleteOneNode(cur)
                else:
                    pre.right = self.deleteOneNode(cur)
                break
        return root