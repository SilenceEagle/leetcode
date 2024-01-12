from typing import List
from collections import deque

class MyQue:
    def __init__(self):
        self.que = []

    def push(self, x):
        while self.que and self.que[-1] < x:
            self.que.pop()
        self.que.append(x)
    
    def pop(self, x):
        if self.que and self.que[0] == x:
            self.que.pop(0)
    
    def front(self):
        if self.que:
            return self.que[0]
        else:
            return None
        
from collections import deque

class MyQue2:
    def __init__(self):
        self.que = deque()

    def push(self, x):
        while self.que and self.que[-1] < x:
            self.que.pop()
        self.que.append(x)
    
    def pop(self, x):
        if self.que and self.que[0] == x:
            self.que.popleft()
    
    def front(self):
        if self.que:
            return self.que[0]
        else:
            return None
        

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        que = MyQue2()
        for n in nums[:k]:
            que.push(n)
        ans = []
        ans.append(que.front())
        for i in range(k, len(nums)):
            que.push(nums[i])
            que.pop(nums[i-k])
            ans.append(que.front())
        return ans

        

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        que = MyQue()
        for n in nums[:k]:
            que.push(n)
        ans = []
        ans.append(que.front())
        for i in range(k, len(nums)):
            que.push(nums[i])
            que.pop(nums[i-k])
            ans.append(que.front())
        return ans


if __name__ == '__main__':
    nums = [1,3,-1,-3,5,3,6,7]
    k = 3

    so = Solution()
    ans = so.maxSlidingWindow(nums, k)
    print(ans)  # [3,3,5,5,6,7]