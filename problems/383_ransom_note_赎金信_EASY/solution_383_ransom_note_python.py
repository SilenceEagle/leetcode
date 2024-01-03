class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        count = [0] * 26
        for c in magazine:
            count[ord(c)-ord('a')] += 1
        
        for c in ransomNote:
            count[ord(c)-ord('a')] -= 1
        
        for i in count:
            if i < 0:
                return False
        return True


if __name__ == '__main__':
    ansomNote = "aa"
    magazine = "aab"
    so = Solution()
    ans = so.canConstruct(ansomNote, magazine)
    print(ans)