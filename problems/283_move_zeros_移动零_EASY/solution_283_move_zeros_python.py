from typing import List

# slow fast pointer
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        slow = 0
        for fast in range(n):
            if nums[fast]:
                if fast != slow:
                    nums[fast], nums[slow] = nums[slow], nums[fast]
                slow += 1

# swap zero and nonzero
class Solution2:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        zeroi = 0
        nonZeroi = 0
        while zeroi < n and nonZeroi < n:
            # find zero
            while zeroi < n and nums[zeroi]:
                zeroi += 1
            if zeroi == n:
                return

            # find non zero behind zero
            nonZeroi = max(nonZeroi, zeroi+1)
            while nonZeroi < n and not nums[nonZeroi]:
                nonZeroi += 1
            if nonZeroi == n:
                return
            
            # swap
            nums[zeroi], nums[nonZeroi] = nums[nonZeroi], nums[zeroi]
            zeroi += 1
            nonZeroi += 1
            
            
        

if __name__ == '__main__':
    s = Solution()

    nums = [0, 1, 0, 3, 12]

    s.moveZeroes(nums)
    print(nums)
    pass