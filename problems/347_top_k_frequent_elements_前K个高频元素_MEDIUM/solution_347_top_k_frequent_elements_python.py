import heapq
from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        for n in nums:
            count[n] = count.get(n, 0) + 1
        
        # little heap
        pri_que = []

        for key, freq in count.items():
            heapq.heappush(pri_que, (freq, key))
            if len(pri_que) > k:
                heapq.heappop(pri_que)
        
        ans = [0] * k
        for i in range(k-1, -1, -1):
            ans[i] = heapq.heappop(pri_que)[1]
        
        return ans
    

if __name__ == "__main__":
    nums = [1,1,1,2,2,3]
    k = 2

    so = Solution()
    print(so.topKFrequent(nums, k))