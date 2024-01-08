from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = dict()
        for i, n in enumerate(nums):
            if target - n in mp:
                return [mp[target-n], i]
            else:
                mp[n] = i


if __name__ == "__main__":
    so = Solution()
    nums = [2, 7, 11, 15]
    target = 9

    ans = so.twoSum(nums, target)
    print(ans)