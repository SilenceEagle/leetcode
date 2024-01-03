[202\. 快乐数](https://leetcode.cn/problems/happy-number/)

简单

相关标签

相关企业

编写一个算法来判断一个数 `n` 是不是快乐数。

**「快乐数」** 定义为：

- 对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
- 然后重复这个过程直到这个数变为 1，也可能是 **无限循环** 但始终变不到 1。
- 如果这个过程 **结果为** 1，那么这个数就是快乐数。

如果 `n` 是 *快乐数* 就返回 `true` ；不是，则返回 `false` 。

&nbsp;

**示例 1：**

**输入：**n = 19
**输出：**true
**解释：**
1`<sup>`2`</sup>` + 9`<sup>`2`</sup>` = 82
8`<sup>`2`</sup>` + 2`<sup>`2`</sup>` = 68
6`<sup>`2`</sup>` + 8`<sup>`2`</sup>` = 100
1`<sup>`2`</sup>` + 0`<sup>`2`</sup>` + 0`<sup>`2`</sup>` = 1

**示例 2：**

**输入：**n = 2
**输出：**false

&nbsp;

**提示：**

- `1 <= n <= 2<sup>31</sup> - 1`

通过次数 455.1K

提交次数 714.6K

通过率 63.7%

---

相关标签

[哈希表](https://leetcode.cn/tag/hash-table/)[数学](https://leetcode.cn/tag/math/)[双指针](https://leetcode.cn/tag/two-pointers/)

---

相关企业

---

相似题目

[环形链表](https://leetcode.cn/problems/linked-list-cycle/) 简单

[各位相](https://leetcode.cn/problems/add-digits/) 简单

[丑](https://leetcode.cn/problems/ugly-number/)  简单

---
