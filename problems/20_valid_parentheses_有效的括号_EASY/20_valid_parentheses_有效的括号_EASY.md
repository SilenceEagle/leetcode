# [20\. 有效的括号](https://leetcode.cn/problems/valid-parentheses/)

简单

给定一个只包括 `'('`，`')'`，`'{'`，`'}'`，`'['`，`']'` 的字符串 `s` ，判断字符串是否有效。

有效字符串需满足：

1.  左括号必须用相同类型的右括号闭合。
2.  左括号必须以正确的顺序闭合。
3.  每个右括号都有一个对应的相同类型的左括号。

&nbsp;

**示例 1：**

**输入：**s = "()"
**输出：**true

**示例 2：**

**输入：**s = "()\[\]{}"
**输出：**true

**示例 3：**

**输入：**s = "(\]"
**输出：**false

&nbsp;

**提示：**

- `1 <= s.length <= 10<sup>4</sup>`
- `s` 仅由括号 `'()[]{}'` 组成

通过次数 1.7M

提交次数 3.8M

通过率 43.9%

* * *

相关标签

[栈](https://leetcode.cn/tag/stack/)[字符串](https://leetcode.cn/tag/string/)


* * *

提示 1

Use a stack of characters.

* * *

提示 2

When you encounter an opening bracket, push it to the top of the stack.

* * *

提示 3

When you encounter a closing bracket, check if the top of the stack was the opening for it. If yes, pop it from the stack. Otherwise, return false.

* * *

相似题目

[括号生成](https://leetcode.cn/problems/generate-parentheses/) 中等

[最长有效括号](https://leetcode.cn/problems/longest-valid-parentheses/) 困难

[删除无效的括号](https://leetcode.cn/problems/remove-invalid-parentheses/) 困难

[检查替换后的词是否有效](https://leetcode.cn/problems/check-if-word-is-valid-after-substitutions/) 中等

* * *