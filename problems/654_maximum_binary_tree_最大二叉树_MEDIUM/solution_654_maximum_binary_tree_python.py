from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def build(self, nums, left, right):
        if left == right:
            return None
        
        maxIndex = left
        for i in range(left + 1, right):
            if nums[i] > nums[maxIndex]:
                maxIndex = i
        root = TreeNode(nums[maxIndex])
        root.left = self.build(nums, left, maxIndex)
        root.right = self.build(nums, maxIndex+1, right)
        return root

    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        return self.build(nums, 0, len(nums))