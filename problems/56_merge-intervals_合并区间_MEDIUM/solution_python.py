import copy
from typing import List


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        if len(intervals) == 1:
            return intervals
        intervals = sorted(intervals, key=lambda x: x[0])
        all_index = set(range(len(intervals)))
        merge_index = set()
        results = []
        remain_index = list(all_index - merge_index)
        while len(remain_index):
            ri_copy = remain_index.copy()
            ai = remain_index[0]
            a = intervals[ai]
            ri_copy.remove(ai)
            merge_index.add(ai)
            for j in range(1, len(remain_index)):
                bi = remain_index[j]
                b = intervals[bi]
                if b[0] <= a[1]:
                    a = self.merge_2(a, b)
                    merge_index.add(bi)
                    ri_copy.remove(bi)
                else:  # all the b[j+1] >= b[j], so skip
                    break

            results.append(a)
            # remain_index = sorted(list(all_index - merge_index))
            remain_index = ri_copy

        return results

    @staticmethod
    def merge_2(i1, i2):
        if i1[0] > i2[0]:
            i1, i2 = i2.copy(), i1.copy()
        if i1[1] >= i2[0]:
            return [i1[0], max(i1[1], i2[1])]
        else:
            return i1


# others, same procedure, more coding simplified
# https://leetcode.cn/problems/merge-intervals/solutions/204318/merge-intervals-by-ikaruga/
class Solution2:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        results = []
        intervals.sort(key=lambda x: x[0])
        n = len(intervals)
        i = 0
        while i < n:
            left, right = intervals[i]
            while i < n-1 and intervals[i+1][0] <= right:
                i += 1
                right = max(right, intervals[i][1])
            results.append([left, right])
            i += 1
        return results


if __name__ == "__main__":
    test_example = [[0,0],[0,0],[4,4],[0,0],[1,3],[5,5],[4,6],[1,1],[0,2]]
    s = Solution()
    print(s.merge(test_example))
    pass