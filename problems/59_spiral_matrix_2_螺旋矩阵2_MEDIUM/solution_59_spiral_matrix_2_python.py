from typing import List
from numpy import floor

class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        count = 1
        ans = [[0] * n for _ in range(n)]
        mid = int(floor(n / 2))
        for x in range(mid):
            for j in range(x, n - x - 1):
                ans[x][j] = count
                count += 1
            j += 1

            for i in range(x, n - x - 1):
                ans[i][j] = count
                count += 1
            i += 1

            for j in range(n-x-1, x, -1):
                ans[i][j] = count
                count += 1
            j -= 1

            for i in range(n-x-1, x, -1):
                ans[i][j] = count
                count += 1
        
        if n % 2 == 1:
            ans[mid][mid] = count
        
        return ans
            

if __name__ == '__main__':
    so = Solution()
    n = 3
    print(so.generateMatrix(n))