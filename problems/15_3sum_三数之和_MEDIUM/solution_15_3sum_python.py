from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums = sorted(nums)
        ans = []
        n = len(nums)
        for i in range(n-2):
            if nums[i] > 0:
                return ans
            if i > 0 and nums[i] == nums[i-1]:
                continue
            left = i + 1
            right = n - 1
            
            while left < right:
                if nums[i] + nums[left] + nums[right] == 0:
                    ans.append([nums[i], nums[left], nums[right]])
                    # remove duplited
                    while left < right and nums[right] == nums[right-1]:
                        right -= 1
                    while left < right and nums[left] == nums[left+1]:
                        left += 1
                    # update left and right
                    left += 1
                    right -= 1
                elif nums[i] + nums[left] + nums[right] < 0:
                    left += 1
                else:
                    right -= 1
        return ans


class Solution2:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = []
        n = len(nums)
        for i in range(n-2):
            if nums[i] > 0:
                return ans
            if i > 0 and nums[i] == nums[i-1]:
                continue
            
            count = set()
            for j in range(i+1, n):
                if j > i + 2 and nums[j] == nums[j-1] and nums[j-1] == nums[j-2]:
                    continue
                c = 0 - nums[i] - nums[j]
                if c in count:
                    # valid 
                    ans.append([nums[i], nums[j], c])
                    # delete c
                    count.remove(c)
                else:
                    count.add(nums[j])
        return ans




if __name__ == '__main__':
    nums = [-1,0,1,2,-1,-4]
    so = Solution()

    ans = so.threeSum(nums)
    # [[-1,-1,2],[-1,0,1]]
    print(ans)