from typing import Optional, List
from collections import deque



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# iteratively      
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        if root is None: 
            return ans
        qu = deque([root])
        while qu:
            n = len(qu)
            tmp = []
            for _ in range(n):
                cur = qu.popleft()
                tmp.append(cur.val)
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
            ans.append(tmp)
        return ans

# recursively 
class Solution:
    def reverse(self, root, ans, depth):
        if root is None:
            return
        if len(ans) == depth:
            ans.append([])
        ans[depth].append(root.val)
        if root.left:
            self.reverse(root.left, ans, depth+1)
        if root.right:
            self.reverse(root.right, ans, depth+1)

    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        self.reverse(root, ans, 0)
        return ans