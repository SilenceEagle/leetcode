from typing import List 

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        lens, lenp = len(s), len(p)
        ans = []
        if lens < lenp:
            return ans
        count = [0] * 26
        
        for i in range(lenp): # s - p
            count[ord(s[i])-ord('a')] += 1
            count[ord(p[i])-ord('a')] -= 1

        diff = [c != 0 for c in count].count(True)

        if diff == 0:
            ans.append(0)
        
        for i in range(lenp, lens):
            if count[ord(s[i])-ord('a')] == -1:
                diff -= 1
            elif count[ord(s[i])-ord('a')] == 0:
                diff += 1
            count[ord(s[i])-ord('a')] += 1

            if count[ord(s[i-lenp])-ord('a')] == 1:
                diff -= 1
            elif count[ord(s[i-lenp])-ord('a')] == 0:
                diff += 1
            count[ord(s[i-lenp])-ord('a')] -= 1

            if diff == 0:
                ans.append(i-lenp+1)
        return ans
    

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        def isSame(a, b):
            for i in range(26):
                if a[i] != b[i]:
                    return False
            return True
        
        lens, lenp = len(s), len(p)
        ans = []
        if lens < lenp:
            return ans
        counts = [0] * 26
        countp = [0] * 26

        for c in p:
            countp[ord(c)-ord('a')] += 1
        
        for i in range(lens):
            counts[ord(s[i])-ord('a')] += 1
            if i >= lenp:
                counts[ord(s[i-lenp])-ord('a')] -= 1
            if i >= lenp - 1 and isSame(counts, countp):
                ans.append(i-lenp+1)
        return ans
    
    
if __name__ == '__main__':
    s = "cbaebabacd"
    p = "abc"
    so = Solution()
    ans = so.findAnagrams(s, p)
    print(ans)
    pass