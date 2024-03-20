from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    ans = []
    maxCount = 1
    curCount = 1
    pre = None
    def traverse(self, cur):
        if cur is None:
            return

        self.traverse(cur.left)

        if self.pre is not None and cur.val == self.pre.val:
            self.curCount += 1
        elif self.pre is not None and cur.val > self.pre.val:
            self.curCount = 1
        if self.curCount == self.maxCount:
            self.ans.append(cur.val)
        if self.curCount > self.maxCount:
            self.maxCount = self.curCount
            self.ans.clear()
            self.ans.append(cur.val)
        self.pre = cur
        
        self.traverse(cur.right)
    

    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        self.ans.clear()
        self.maxCount = 1
        self.curCount = 1
        self.pre = None
        self.traverse(root)
        return self.ans