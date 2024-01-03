# [438\. 找到字符串中所有字母异位词](https://leetcode.cn/problems/find-all-anagrams-in-a-string/)

中等

给定两个字符串 `s` 和 `p`，找到 `s` 中所有 `p` 的 **异位词** 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。

**异位词** 指由相同字母重排列形成的字符串（包括相同的字符串）。

&nbsp;

**示例 1:**

**输入:** s = "cbaebabacd", p = "abc"
**输出:** \[0,6\]
**解释:**
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。

&nbsp;**示例 2:**

**输入:** s = "abab", p = "ab"
**输出:** \[0,1,2\]
**解释:**
起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。

&nbsp;

**提示:**

- `1 <= s.length, p.length <= 3 * 10<sup>4</sup>`
- `s` 和 `p` 仅包含小写字母

通过次数 358.8K

提交次数 663.9K

通过率 54.0%

* * *

相关标签

[哈希表](https://leetcode.cn/tag/hash-table/)[字符串](https://leetcode.cn/tag/string/)[滑动窗口](https://leetcode.cn/tag/sliding-window/)

* * *

相关企业

* * *

相似题目

[有效的字母异位词](https://leetcode.cn/problems/valid-anagram/) 简单

[字符串的排列](https://leetcode.cn/problems/permutation-in-string/) 中等

* * *