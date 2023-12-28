from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n = len(nums)
        left, right = 0, n - 1
        k = n - 1
        results = [0] * n
        while left <= right:
            ls = nums[left] * nums[left]
            if left == right:
                results[k] = ls
                break
            rs = nums[right] * nums[right]
            if ls < rs:
                results[k] = rs
                k -= 1
                right -= 1
            elif ls > rs:
                results[k] = ls
                k -= 1
                left += 1
            else:
                results[k] = ls
                results[k-1] = rs
                k -= 2
                left += 1
                right -= 1
        return results


if __name__ == '__main__':
    so = Solution()
    nums = [-4, -1, 0, 3, 10]
    results = so.sortedSquares(nums)
    print(results)
