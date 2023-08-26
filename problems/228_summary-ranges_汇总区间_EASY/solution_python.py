# self

class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        if len(nums) == 0:
            return []
        elif len(nums) == 1:
            return [str(nums[0])]
        diff1 = [nums[i] - nums[i - 1] for i in range(1, len(nums))]
        head = nums[0]
        tail = nums[0]
        for i, d in enumerate(diff1):
            if d > 1:
                if head == tail:
                    result.append(str(head))
                else:
                    result.append(f'{head}->{tail}')
                head, tail = nums[i + 1], nums[i + 1]
            else:
                tail += 1
            if i == len(diff1) - 1:
                if head == tail:
                    result.append(str(head))
                else:
                    result.append(f'{head}->{tail}')
                head, tail = nums[i + 1], nums[i + 1]

        return result


# others

"""
方法一：双指针

我们可以用双指针 iii 和 jjj 找出每个区间的左右端点。

遍历数组，当 j+1<nj + 1 < nj+1<n 且 nums[j+1]=nums[j]+1nums[j + 1] = nums[j] + 
1nums[j+1]=nums[j]+1 时，指针 jjj 向右移动，否则区间 [i,j][i, j][i,j] 已经找到，
将其加入答案，然后将指针 iii 移动到 j+1j + 1j+1 的位置，继续寻找下一个区间。

时间复杂度 O(n)，其中 n 为数组长度。空间复杂度 O(1)。

作者：ylb
链接：https://leetcode.cn/problems/summary-ranges/solutions/2411792/
python3javacgotypescript-yi-ti-yi-jie-sh-gpep/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
"""

class Solution2:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        def f(i: int, j: int) -> str:
            return str(nums[i]) if i == j else f'{nums[i]}->{nums[j]}'

        i = 0
        n = len(nums)
        ans = []
        while i < n:
            j = i
            while j + 1 < n and nums[j + 1] == nums[j] + 1:
                j += 1
            ans.append(f(i, j))
            i = j + 1
        return ans
