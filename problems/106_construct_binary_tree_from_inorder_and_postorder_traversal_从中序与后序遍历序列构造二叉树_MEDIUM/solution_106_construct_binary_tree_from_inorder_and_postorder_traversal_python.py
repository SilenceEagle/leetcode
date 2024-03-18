from typing import Optional, List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def split(self, inorder, inBegin, inEnd, postorder, postBegin, postEnd):
        if inEnd == inBegin:
            return None
        # get root node
        rootValue = postorder[postEnd-1]
        root = TreeNode(val=rootValue)

        # split inorder
        for delimiter in range(inBegin, inEnd):
            if inorder[delimiter] == rootValue:
                break
        
        root.left = self.split(inorder, inBegin, delimiter, postorder, postBegin, postBegin+delimiter-inBegin)
        root.right = self.split(inorder, delimiter+1, inEnd, postorder, postBegin+delimiter-inBegin, postEnd-1)

        return root

    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        return self.split(inorder, 0, len(inorder), postorder, 0, len(postorder))