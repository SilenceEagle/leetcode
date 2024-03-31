from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def build(self, nums, left, right):
        # [left, right)
        if left >= right:
            return None
        mid = left + (right - left) // 2
        root = TreeNode(nums[mid])
        root.left = self.build(nums, left, mid)
        root.right = self.build(nums, mid+1, right)
        return root

    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        return self.build(nums, 0, len(nums))