from collections import defaultdict


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count = defaultdict(int)
        for c in s:
            count[c] += 1
        for c in t:
            count[c] -= 1
        for key in count:
            if count[key]:
                return False
        return True


if __name__ == '__main__':
    s = 'hello'
    t = 'olehl'
    so = Solution()
    ans = so.isAnagram(s, t)
    print(ans)