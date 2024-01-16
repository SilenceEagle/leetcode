from typing import List
from collections import deque


"""
# Definition for a Node.
"""
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


class Solution:
    def traverse(self, root, ans, depth):
        if root is None:
            return
        if len(ans) == depth:
            ans.append([])
        ans[depth].append(root.val)
        for c in root.children:
            self.traverse(c, ans, depth+1)


    def levelOrder(self, root: 'Node') -> List[List[int]]:
        ans = []
        self.traverse(root, ans, 0)
        return ans


class Solution2:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
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
                for c in cur.children:
                    qu.append(c)
            ans.append(tmp)
        return ans
        