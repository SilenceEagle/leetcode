# [1\. 两数之和](https://leetcode.cn/problems/two-sum/)

简单

给定一个整数数组 `nums` 和一个整数目标值 `target`，请你在该数组中找出 **和为目标值** *`target`*  的那 **两个** 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

&nbsp;

**示例 1：**

**输入：**nums = \[2,7,11,15\], target = 9
**输出：**\[0,1\]
**解释：**因为 nums\[0\] + nums\[1\] == 9 ，返回 \[0, 1\] 。

**示例 2：**

**输入：**nums = \[3,2,4\], target = 6
**输出：**\[1,2\]

**示例 3：**

**输入：**nums = \[3,3\], target = 6
**输出：**\[0,1\]

&nbsp;

**提示：**

- `2 <= nums.length <= 10<sup>4</sup>`
- `-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>`
- `-10<sup>9</sup> <= target <= 10<sup>9</sup>`
- **只会存在一个有效答案**

&nbsp;

**进阶：**你可以想出一个时间复杂度小于 `O(n<sup>2</sup>)` 的算法吗？

通过次数 5.1M

提交次数 9.5M

通过率 53.1%

* * *