# [15\. 三数之和](https://leetcode.cn/problems/3sum/)

中等

给你一个整数数组 `nums` ，判断是否存在三元组 `[nums[i], nums[j], nums[k]]` 满足 `i != j`、`i != k` 且 `j != k` ，同时还满足 `nums[i] + nums[j] + nums[k] == 0` 。请

你返回所有和为 `0` 且不重复的三元组。

**注意：**答案中不可以包含重复的三元组。

&nbsp;

&nbsp;

**示例 1：**

**输入：**nums = \[-1,0,1,2,-1,-4\]
**输出：**\[\[-1,-1,2\],\[-1,0,1\]\]
**解释：**
nums\[0\] + nums\[1\] + nums\[2\] = (-1) + 0 + 1 = 0 。
nums\[1\] + nums\[2\] + nums\[4\] = 0 + 1 + (-1) = 0 。
nums\[0\] + nums\[3\] + nums\[4\] = (-1) + 2 + (-1) = 0 。
不同的三元组是 \[-1,0,1\] 和 \[-1,-1,2\] 。
注意，输出的顺序和三元组的顺序并不重要。

**示例 2：**

**输入：**nums = \[0,1,1\]
**输出：**\[\]
**解释：**唯一可能的三元组和不为 0 。

**示例 3：**

**输入：**nums = \[0,0,0\]
**输出：**\[\[0,0,0\]\]
**解释：**唯一可能的三元组和为 0 。

&nbsp;

**提示：**

- `3 <= nums.length <= 3000`
- `-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup>`

通过次数 1.6M

提交次数 4.3M

通过率 37.6%

* * *

相关标签

[数组](https://leetcode.cn/tag/array/)[双指针](https://leetcode.cn/tag/two-pointers/)[排序](https://leetcode.cn/tag/sorting/)


* * *

提示 1

So, we essentially need to find three numbers x, y, and z such that they add up to the given value. If we fix one of the numbers say x, we are left with the two-sum problem at hand!

* * *

提示 2

For the two-sum problem, if we fix one of the numbers, say x, we have to scan the entire array to find the next number y, which is value - x where value is the input parameter. Can we change our array somehow so that this search becomes faster?

* * *

提示 3

The second train of thought for two-sum is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?

* * *

相似题目

[两数之和](https://leetcode.cn/problems/two-sum/) 简单

[最接近的三数之和](https://leetcode.cn/problems/3sum-closest/) 中等

[四数之和](https://leetcode.cn/problems/4sum/) 中等

[较小的三数之和](https://leetcode.cn/problems/3sum-smaller/) 中等

* * *