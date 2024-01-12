class Solution:
    def removeDuplicates(self, s: str) -> str:
        st = []
        for c in s:
            if len(st) == 0 or st[-1] != c:
                st.append(c)
            else:
                st.pop()
        if len(st) == 0:
            return ""
        else:
            return "".join(st)
        

if __name__ == '__main__':
    so = Solution()
    s1 = "abbaca"
    print(so.removeDuplicates(s1)) # ca