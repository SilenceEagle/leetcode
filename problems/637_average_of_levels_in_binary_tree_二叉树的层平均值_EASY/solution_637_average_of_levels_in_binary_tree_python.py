from typing import Optional, List
from collections import deque



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        ans = []
        qu = deque()
        if root is None:
            return ans
        qu.append(root)
        while qu:
            sum = 0
            n = len(qu)
            for _ in range(n):
                cur = qu.popleft()
                sum += cur.val
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
            ans.append(sum/n)
        return ans