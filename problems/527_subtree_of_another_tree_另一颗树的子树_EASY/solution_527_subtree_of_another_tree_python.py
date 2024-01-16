from typing import Optional
from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# recursively
class Solution:
    def isSame(self, left, right):
        if left is None and right is None:
            return True
        elif left is None or right is None or left.val != right.val:
            return False
        else:
            return self.isSame(left.left, right.left) and \
                self.isSame(left.right, right.right)
        
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if subRoot is None:
            return True
        if root is None:
            return False
        return self.isSame(root, subRoot) or \
            self.isSubtree(root.left, subRoot) or \
            self.isSubtree(root.right, subRoot)
    
# kmp
class Solution2:
    lnull = 10001
    rnull = 10002
    def preTraverse(self, root, series):
        series.append(root.val)
        if root.left:
            self.preTraverse(root.left, series)
        else:
            series.append(Solution.lnull)
        
        if root.right:
            self.preTraverse(root.right, series)
        else:
            series.append(Solution.rnull)
    
    def getNext(self, p, next):
        j = 0
        next[0] = 0
        for i in range(1, len(p)):
            while j and p[j] != p[i]:
                j = next[j - 1]
            if p[i] == p[j]:
                j += 1
            next[i] = j
    
    def kmp(self, s, p):
        next = [0] * len(p)
        self.getNext(p, next)
        j = 0
        for i in range(len(s)):
            while (j and s[i] != p[j]):
                j = next[j-1]
            if (s[i] == p[j]):
                j += 1
            if j == len(p):
                return True
        return False
        
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if subRoot is None:
            return True
        if root is None:
            return False
        s = []
        self.preTraverse(root, s)
        p = []
        self.preTraverse(subRoot, p)
        return self.kmp(s, p)
    
# kmp, serialize to string
class Solution3:
    lnull = 10001
    rnull = 10002
    # def preTraverse(self, root, series):
    #     series.append(root.val)
    #     if root.left:
    #         self.preTraverse(root.left, series)
    #     else:
    #         series.append(Solution.lnull)
        
    #     if root.right:
    #         self.preTraverse(root.right, series)
    #     else:
    #         series.append(Solution.rnull)
    def preTraverse(self, root):
        st = deque([root])
        series = ''
        while st:
            cur = st.pop()
            series += f'l{cur.val}'
            if cur.right:
                st.append(cur.right)
            else:
                series += f'l{Solution.rnull}'
            if cur.left:
                st.append(cur.left)
            else:
                series += f'l{Solution.lnull}'
        return series
    
    def getNext(self, p, next):
        j = 0
        next[0] = 0
        for i in range(1, len(p)):
            while j > 0 and p[j] != p[i]:
                j = next[j - 1]
            if p[i] == p[j]:
                j += 1
            next[i] = j
    
    def kmp(self, s, p):
        next = [0] * len(p)
        self.getNext(p, next)
        j = 0
        ls = len(s)
        lp = len(p)
        for i in range(ls):
            while (j > 0 and s[i] != p[j]):
                j = next[j-1]
            if (s[i] == p[j]):
                j += 1
            if j == lp:
                return True
        return False
        
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if subRoot is None:
            return True
        if root is None:
            return False
        s = self.preTraverse(root)
        p = self.preTraverse(subRoot)
        return self.kmp(s, p)
