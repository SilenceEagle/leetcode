# [18\. 四数之和](https://leetcode.cn/problems/4sum/)

中等

给你一个由 `n` 个整数组成的数组 `nums` ，和一个目标值 `target` 。请你找出并返回满足下述全部条件且**不重复**的四元组 `[nums[a], nums[b], nums[c], nums[d]]` （若两个四元组元素一一对应，则认为两个四元组重复）：

- `0 <= a, b, c, d < n`
- `a`、`b`、`c` 和 `d` **互不相同**
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

你可以按 **任意顺序** 返回答案 。

&nbsp;

**示例 1：**

**输入：**nums = \[1,0,-1,0,-2,2\], target = 0
**输出：**\[\[-2,-1,1,2\],\[-2,0,0,2\],\[-1,0,0,1\]\]

**示例 2：**

**输入：**nums = \[2,2,2,2,2\], target = 8
**输出：**\[\[2,2,2,2\]\]

&nbsp;

**提示：**

- `1 <= nums.length <= 200`
- `-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>`
- `-10<sup>9</sup> <= target <= 10<sup>9</sup>`

通过次数 539.9K

提交次数 1.5M

通过率 36.7%

---

相关标签

[数组](https://leetcode.cn/tag/array/)[双指针](https://leetcode.cn/tag/two-pointers/)[排序](https://leetcode.cn/tag/sorting/)

---

相关企业

---

相似题目

[两数之和](https://leetcode.cn/problems/two-sum/) 简单

[三数之和](https://leetcode.cn/problems/3sum/) 中等

[四数相加 II](https://leetcode.cn/problems/4sum-ii/) 中等

---
