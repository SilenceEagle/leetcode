from collections import deque
from typing import Optional, List



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        qu = deque()
        if root is None: 
            return ans
        qu.append(root)
        while qu:
            n = len(qu)
            for i in range(n):
                cur = qu.popleft()
                if i == 0:
                    m = cur.val
                else:
                    m = max(m, cur.val)
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
            ans.append(m)
        return ans