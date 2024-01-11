# [28\. 找出字符串中第一个匹配项的下标](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/)

简单

给你两个字符串 `haystack` 和 `needle` ，请你在 `haystack` 字符串中找出 `needle` 字符串的第一个匹配项的下标（下标从 0 开始）。如果 `needle` 不是 `haystack` 的一部分，则返回  `-1`。

&nbsp;

**示例 1：**

**输入：**haystack = "sadbutsad", needle = "sad"
**输出：**0
**解释：**"sad" 在下标 0 和 6 处匹配。
第一个匹配项的下标是 0 ，所以返回 0 。

**示例 2：**

**输入：**haystack = "leetcode", needle = "leeto"
**输出：**\-1
**解释：**"leeto" 没有在 "leetcode" 中出现，所以返回 -1 。

&nbsp;

**提示：**

- `1 <= haystack.length, needle.length <= 10<sup>4</sup>`
- `haystack` 和 `needle` 仅由小写英文字符组成

通过次数 977.2K

提交次数 2.3M

通过率 43.2%

---

相关标签

[双指针](https://leetcode.cn/tag/two-pointers/)[字符串](https://leetcode.cn/tag/string/)[字符串匹配](https://leetcode.cn/tag/string-matching/)

---

相似题目

[最短回文串](https://leetcode.cn/problems/shortest-palindrome/) 困难

[重复的子字符串](https://leetcode.cn/problems/repeated-substring-pattern/) 简单

---
