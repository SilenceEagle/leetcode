from typing import Optional, List
from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        qu = deque()
        if root is None:
            return ans
        qu.append(root)
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
        
        return ans[::-1]
    
class Solution2:
    def traverse(self, root, ans, depth):
        if root is None:
            return
        if len(ans) == depth:
            ans.append([])
        ans[depth].append(root.val)
        self.traverse(root.left, ans, depth + 1)
        self.traverse(root.right, ans, depth + 1)

    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        self.traverse(root, ans, 0)
        
        return ans[::-1]