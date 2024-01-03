

class Solution:
    def isHappy(self, n: int) -> bool:
        def getSum(n):
            sum = 0
            while (n):
                sum += (n % 10) * (n % 10)
                n //= 10
            return sum
        
        sums = set()
        while (n != 1):
            n = getSum(n)
            if n in sums:
                return False
            else:
                sums.add(n)
        return True
    
if __name__ == "__main__":
    so = Solution()
    ans = so.isHappy(19)
    print(ans)
    pass