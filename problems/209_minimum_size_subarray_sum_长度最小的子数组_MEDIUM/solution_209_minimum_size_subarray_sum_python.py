import math
from typing import List
from numpy import inf

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        s = 0
        result = inf
        sum = 0
        for e in range(len(nums)):
            sum += nums[e]
            while sum >= target:
                subL = e - s + 1
                result = min(subL, result)
                sum -= nums[s]
                s += 1
        return 0 if math.isinf(result) else result


if __name__ == '__main__':
    target = 7
    nums = [2, 3, 1, 2, 4, 3]
    so = Solution()
    result = so.minSubArrayLen(target, nums)
    print(result)