from typing import List

class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        ans = 0
        left = 0
        cnt = dict()
        for right in range(len(fruits)):
            if fruits[right] in cnt.keys():
                cnt[fruits[right]] += 1
            else:
                cnt[fruits[right]] = 1
            while len(cnt.keys()) > 2:
                cnt[fruits[left]] -= 1
                if cnt[fruits[left]] == 0:
                    del cnt[fruits[left]]
                left += 1
            ans = max(ans, right - left + 1)
        return ans



if __name__ == '__main__':
    so = Solution()
    fruits = [1, 2, 1]
    result = so.totalFruit(fruits)
    print(result)