from collections import defaultdict
from typing import List

class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        mp = defaultdict(int)
        for a in nums1:
            for b in nums2:
                mp[a+b] += 1
        
        ans = 0
        for c in nums3:
            for d in nums4:
                if (-c-d) in mp:
                    ans += mp[-c-d]
        return ans
    

if __name__ == '__main__':
    A = [1, 2]
    B = [-2, -1]
    C = [-1, 2]
    D = [0, 2]

    so = Solution()
    ans = so.fourSumCount(A, B, C, D)
    print(ans)

    pass
