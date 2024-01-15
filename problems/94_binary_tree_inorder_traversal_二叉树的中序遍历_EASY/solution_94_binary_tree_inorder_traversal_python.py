from typing import Optional, List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# recursively
class Solution:
    def traverse(self, root, ans):
        if root is None:
            return
        self.traverse(root.left, ans)
        ans.append(root.val)
        self.traverse(root.right, ans)


    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.traverse(root, ans)
        return ans
    
# iteratively
class Solution2:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        st = []
        if root is None:
            return ans
        cur = root
        while cur is not None or st:
            if cur is not None:
                # cur is father 
                st.append(cur)
                cur = cur.left
            else:
                # top is father
                f = st.pop()
                ans.append(f.val)

                # push right child
                cur = f.right

        return ans
    
# recursively, unified version with marking
class Solution3:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        st = []
        if root is not None:
            st.append(root)
        while st:
            f = st[-1]
            if f is not None:
                # cur is father 
                st.pop()

                # push right
                if f.right is not None:
                    st.append(f.right)

                # push father and mark it
                st.append(f)
                st.append(None)

                # push left
                if f.left is not None:
                    st.append(f.left)
            else:
                st.pop() # pop None
                f = st.pop()
                ans.append(f.val)

        return ans