
# s + s contains s in the middle
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        ss = s[1:] + s[:-1]
        try:
            ss.index(s)
            return True
        except:
            return False

# kmp find max length of equal prefix and postfix, then get 
# the length of remain sub-string. If the length of sub-string
# could perfectly devide the length of string, then return True   
class Solution2:
    @staticmethod
    def getNext(next, s):
        j = 0
        next[0] = 0
        for i in range(1, len(s)):
            while j > 0 and s[i] != s[j]:
                j = next[j - 1]
            if s[i] == s[j]:
                j += 1
            next[i] = j
        return

    def repeatedSubstringPattern(self, s: str) -> bool:
        n = len(s)
        next = [0] * n
        self.getNext(next, s)
        if next[-1] > 0 and n % (n - next[-1]) == 0:
            return True
        else:
            return False
        


if __name__ == '__main__':
    so = Solution()
    s1 = "abab"
    s2 = "abc"
    print(so.repeatedSubstringPattern(s1))
    print(so.repeatedSubstringPattern(s2))