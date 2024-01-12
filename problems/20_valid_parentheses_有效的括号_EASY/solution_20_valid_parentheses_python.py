class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2:
            return False
        st = []
        for c in s:
            if c == '(':
                st.append(')')
            elif c == '[':
                st.append(']')
            elif c == '{':
                st.append('}')
            elif len(st) == 0 or st[-1] != c:
                return False
            else:
                st.pop()
        return len(st) == 0


if __name__ == '__main__':
    so = Solution()

    s1 = '()'
    s2 = '([))'
    print(so.isValid(s1))  # True
    print(so.isValid(s2))  # Fasle

    