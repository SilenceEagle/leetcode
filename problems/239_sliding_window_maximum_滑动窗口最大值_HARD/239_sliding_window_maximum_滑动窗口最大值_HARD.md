[239\. 滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/)

困难

给你一个整数数组 `nums`，有一个大小为 `k` 

的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 `k` 个数字。滑动窗口每次只向右移动一位。

返回 *滑动窗口中的最大值* 。

&nbsp;

**示例 1：**

**输入：**nums = \[1,3,-1,-3,5,3,6,7\], k = 3
**输出：**\[3,3,5,5,6,7\]
**解释：**
滑动窗口的位置                最大值
---------------               -----
\[1  3  -1\] -3  5  3  6  7       **3**
 1 \[3  -1  -3\] 5  3  6  7       **3**
 1  3 \[-1  -3  5\] 3  6  7      ** 5**
 1  3  -1 \[-3  5  3\] 6  7       **5**
 1  3  -1  -3 \[5  3  6\] 7       **6**
 1  3  -1  -3  5 \[3  6  7\]      **7**

**示例 2：**

**输入：**nums = \[1\], k = 1
**输出：**\[1\]

&nbsp;

**提示：**

- `1 <= nums.length <= 10<sup>5</sup>`
- `-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup>`
- `1 <= k <= nums.length`

通过次数

533K

提交次数

1.1M

通过率

49.1%

* * *

相关标签

[队列](https://leetcode.cn/tag/queue/)[数组](https://leetcode.cn/tag/array/)[滑动窗口](https://leetcode.cn/tag/sliding-window/)[单调队列](https://leetcode.cn/tag/monotonic-queue/)[堆（优先队列）](https://leetcode.cn/tag/heap-priority-queue/)

* * *

提示 1

How about using a data structure such as deque (double-ended queue)?

* * *

提示 2

The queue size need not be the same as the window’s size.

* * *

提示 3

Remove redundant elements and the queue should store only elements that need to be considered.

* * *

相似题目

[最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring/) 困难

[最小栈](https://leetcode.cn/problems/min-stack/) 中等

[至多包含两个不同字符的最长子串](https://leetcode.cn/problems/longest-substring-with-at-most-two-distinct-characters/) 中等

[粉刷房子 II](https://leetcode.cn/problems/paint-house-ii/) 困难

* * *