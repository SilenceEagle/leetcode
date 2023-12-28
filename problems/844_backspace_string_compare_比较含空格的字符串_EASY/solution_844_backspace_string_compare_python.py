
# double pointer in reverse order 
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        i, j = len(s) - 1, len(t) - 1
        skipS, skipT = 0, 0
        while (i >= 0 or j >= 0):
            while (i >= 0):
                if '#' == s[i]:
                    skipS += 1
                    i -= 1
                elif skipS:
                    skipS -= 1
                    i -= 1
                else:
                    break
            
            while (j >= 0):
                if '#' == t[j]:
                    skipT += 1
                    j -= 1
                elif skipT:
                    skipT -= 1
                    j -= 1
                else:
                    break
            
            if i >= 0 and j >= 0:
                if s[i] != t[j]:
                    return False
            elif i >= 0 or j >= 0:
                return False
            i -= 1
            j -= 1
        return True
        


# recover string using list
class Solution2:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s = list(s)
        t = list(t)
        valid = 0
        for current in range(len(s)):
            if '#' == s[current]:
                if valid:
                    valid -= 1
            else:
                s[valid] = s[current]
                valid += 1
        ns = valid

        valid = 0
        for current in range(len(t)):
            if '#' == t[current]:
                if valid:
                    valid -= 1
            else:
                t[valid] = t[current]
                valid += 1
        nt = valid

        if ns == nt:
            for i in range(ns):
                if s[i] != t[i]:
                    return False
            return True
        else:
            return False
        

if __name__ == '__main__':
    so = Solution()
    s = "ab#c"
    t = "ad#c"
    results = so.backspaceCompare(s, t)
    print(results)