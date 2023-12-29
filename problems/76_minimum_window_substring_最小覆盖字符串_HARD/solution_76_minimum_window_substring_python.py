import collections

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        tm = collections.defaultdict(int)
        m, n = len(s), len(t)
        remainNum = n
        minL = m + 1
        ansL = -1
        left = 0
        for c in t:
            tm[c] += 1
        for right, c in enumerate(s):
            if tm[c] > 0:
                remainNum -= 1
            tm[c] -= 1
            while not remainNum:
                thisL = right - left + 1
                if thisL < minL:
                    minL = thisL
                    ansL = left
                tm[s[left]] += 1
                if tm[s[left]] > 0:
                    remainNum += 1
                left += 1
        return "" if minL > m else s[ansL : ansL + minL]
                

if __name__ == '__main__':
    so = Solution()
    s = "ADOBECODEBANC"
    t = "ABC"
    result = so.minWindow(s, t)
    print(result)