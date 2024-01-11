class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        s.reverse()
        s = " ".join(s)
        return s
    

if __name__ == '__main__':
    s = "  the  sky is    blue  "
    so = Solution()
    ans = so.reverseWords(s)
    print(ans)


    