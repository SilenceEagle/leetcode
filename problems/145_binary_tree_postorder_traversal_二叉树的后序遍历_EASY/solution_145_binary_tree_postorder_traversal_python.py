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
        self.traverse(root.right, ans)
        ans.append(root.val)

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.traverse(root, ans)
        return ans
    

# iteratively
class Solution2:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        st = []

        if root is None: return ans
        st.append(root)
        while st:
            # top is father
            f = st.pop()
            ans.append(f.val)

            # push left and right
            if (f.left is not None):
                st.append(f.left)
            
            if (f.right is not None):
                st.append(f.right)
        ans = ans[::-1]
        return ans

