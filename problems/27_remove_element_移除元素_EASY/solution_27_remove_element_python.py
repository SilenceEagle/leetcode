import copy
from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        slowIndex = 0
        for fastIndex in range(len(nums)):
            if nums[fastIndex] != val:
                nums[slowIndex] = nums[fastIndex]
                slowIndex += 1
        return slowIndex


class Solution2:
    def removeElement(self, nums: List[int], val: int) -> int:
        leftIndex = 0
        rightIndex = len(nums) - 1
        while leftIndex <= rightIndex:
            # find left-est val
            while leftIndex <= rightIndex and nums[leftIndex] !=val:
                leftIndex += 1

            # find right-est none-val
            while leftIndex <= rightIndex and nums[rightIndex] == val:
                rightIndex -= 1
            
            if leftIndex < rightIndex:
                nums[leftIndex] = nums[rightIndex]
                leftIndex += 1
                rightIndex -= 1
        return leftIndex


if __name__ == "__main__":
    nums = [3, 2, 2, 3]
    val = 3
    s = Solution()
    results = s.removeElement(nums, val)

    print(f'nums[0:{results}]: {nums[0:results]}')
    pass