from typing import List


class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        ans = []
        nums.sort()
        n = len(nums)
        for i in range(n-3):
            if nums[i] > target and nums[i] >= 0:
                break
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j in range(i+1, n-2):
                if nums[i] + nums[j] > target and nums[i] + nums[j] >= 0:
                    break
                if j > i + 1 and nums[j] == nums[j-1]:
                    continue
                left = j + 1
                right = n - 1
                tmp = nums[i] + nums[j]
                while (left < right):
                    if tmp + nums[left] + nums[right] > target:
                        right -= 1
                    elif tmp + nums[left] + nums[right] < target:
                        left += 1
                    else:
                        ans.append([nums[i], nums[j], nums[left], nums[right]])
                        while left < right and nums[left+1] == nums[left]:
                            left += 1
                        while left < right and nums[right-1] == nums[right]:
                            right -= 1
                        left += 1
                        right -= 1
        return ans
    

if __name__ == '__main__':
    so = Solution()
    nums = [1,0,-1,0,-2,2]
    target = 0
    result = so.fourSum(nums, target)
    print(result)  # [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
