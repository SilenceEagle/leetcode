from typing import Optional
from collections import deque



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# pre-order, iteratively
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        st = [root]
        while st:
            cur = st[-1]
            if cur:
                # pop cur
                st.pop()

                # push right
                if cur.right:
                    st.append(cur.right)
                
                # push left
                if cur.left:
                    st.append(cur.left)
                
                # push cur and mark it as processed
                st.append(cur)
                st.append(None)
            else:
                # get a processed node
                st.pop()
                cur = st.pop()
                cur.left, cur.right = cur.right, cur.left
        return root
    
# post-order, iteratively
class Solution2:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        st = [root]
        while st:
            cur = st[-1]
            if cur:
                # pop cur
                # st.pop()

                # push cur and mark it as processed
                # st.append(cur)
                st.append(None)

                # push right
                if cur.right:
                    st.append(cur.right)
                
                # push left
                if cur.left:
                    st.append(cur.left)
                
                
            else:
                # get a processed node
                st.pop()
                cur = st.pop()
                cur.left, cur.right = cur.right, cur.left
        return root
    

# in-order, iteratively
class Solution3:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        st = [root]
        while st:
            cur = st[-1]
            if cur:
                # pop cur
                st.pop()

                # push right
                if cur.right:
                    st.append(cur.right)

                # push cur and mark it as processed
                st.append(cur)
                st.append(None)
                
                # push left
                if cur.left:
                    st.append(cur.left)
                
                
            else:
                # get a processed node
                st.pop()
                cur = st.pop()
                cur.left, cur.right = cur.right, cur.left
        return root


# pre-order recursively
class Solution4:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        root.left, root.right = root.right, root.left
        self.invertTree(root.left)
        self.invertTree(root.right)
        return root
    

# post-order recursively
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        self.invertTree(root.left)
        self.invertTree(root.right)
        root.left, root.right = root.right, root.left
        return root
    

# in-order recursively
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        self.invertTree(root.left)
        root.left, root.right = root.right, root.left
        self.invertTree(root.left)
        return root

# level-order, iteratively
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        qu = deque([root])
        while qu:
            n = len(qu)
            for _ in range(n):
                cur = qu.popleft()
                if cur.left:
                    qu.append(cur.left)
                if cur.right:
                    qu.append(cur.right)
                cur.left, cur.right = cur.right, cur.left
        return root