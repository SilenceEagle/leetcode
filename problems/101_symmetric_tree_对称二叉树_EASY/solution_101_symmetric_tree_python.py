from typing import Optional
from collections import deque


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def compare(self, left, right):
        if left is None and right is None:
            return True
        elif left is None or right is None:
            return False
        elif left.val != right.val:
            return False
        else:
            return self.compare(left.left, right.right) and self.compare(left.right, right.left)

    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        return self.compare(root.left, root.right)
    

class Solution2:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        qu = deque([root.left, root.right])
        while qu:
            left = qu.popleft()
            right = qu.popleft()
            if left is None and right is None:
                continue
            elif left is None or right is None:
                return False
            elif left.val != right.val:
                return False
            else:
                qu.append(left.left)
                qu.append(right.right)
                qu.append(left.right)
                qu.append(right.left)
        return True

