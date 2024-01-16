from typing import Optional, List



# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def traverse(self, root, path, ans):
        path.append(str(root.val))
        if root.left is None and root.right is None:
            ans.append("->".join(path))
        if root.left:
            self.traverse(root.left, path, ans)
            path.pop()
        if root.right:
            self.traverse(root.right, path, ans)
            path.pop()
            
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        path, ans = [], []
        if root is None:
            return ans
        self.traverse(root, path, ans)
        return ans
    
class Solution2:
    def traverse(self, root, path, ans):
        path += str(root.val)
        if root.left is None and root.right is None:
            ans.append(path)
        if root.left:
            self.traverse(root.left, path+"->", ans)
        if root.right:
            self.traverse(root.right, path+"->", ans)
            
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        ans = []
        if root is None:
            return ans
        self.traverse(root, "", ans)
        return ans
    