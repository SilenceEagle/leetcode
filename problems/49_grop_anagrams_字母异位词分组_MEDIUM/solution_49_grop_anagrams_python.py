from typing import List
import collections

# tuple as hasable key
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = collections.defaultdict(list)

        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c)-ord('a')] += 1
            
            # transform list to tuple, as tuple is hashable
            mp[tuple(count)].append(s)
        
        return list(mp.values())

# sorted str as hasable key 
class Solution2:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = collections.defaultdict(list)

        for s in strs:
            key = "".join(sorted(s))
            mp[key].append(s)
        
        return list(mp.values())


if __name__ == "__main__":
    strs = ["eat","tea","tan","ate","nat","bat"]
    so = Solution()
    ans = so.groupAnagrams(strs)
    print(ans)
    pass