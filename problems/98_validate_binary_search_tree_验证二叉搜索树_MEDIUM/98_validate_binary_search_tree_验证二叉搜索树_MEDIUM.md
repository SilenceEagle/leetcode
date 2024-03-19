# [98\. 验证二叉搜索树](https://leetcode.cn/problems/validate-binary-search-tree/)

中等

给你一个二叉树的根节点 `root` ，判断其是否是一个有效的二叉搜索树。

**有效** 二叉搜索树定义如下：

- 节点的左子树只包含 **小于** 当前节点的数。
- 节点的右子树只包含 **大于** 当前节点的数。
- 所有左子树和右子树自身必须也是二叉搜索树。

&nbsp;

**示例 1：**

<img width="302" src="98_1.png"/>

**输入：**root = \[2,1,3\]
**输出：**true

**示例 2：**

<img width="422" height="0" src="98_2.png"/>

**输入：**root = \[5,1,4,null,null,3,6\]
**输出：**false
**解释：**根节点的值是 5 ，但是右子节点的值是 4 。

&nbsp;

**提示：**

- 树中节点数目范围在`[1, 10<sup>4</sup>]` 内
- `-2<sup>31</sup> <= Node.val <= 2<sup>31</sup> - 1`

* * *

通过次数 869.3K

提交次数 2.3M

通过率 37.7%

* * *

相关标签

[树](https://leetcode.cn/tag/tree/)
[深度优先搜索](https://leetcode.cn/tag/depth-first-search/)
[二叉搜索树](https://leetcode.cn/tag/binary-search-tree/)
[二叉树](https://leetcode.cn/tag/binary-tree/)

* * *


相似题目

[二叉树的中序遍历](https://leetcode.cn/problems/binary-tree-inorder-traversal/) 简单

[二叉搜索树中的众数](https://leetcode.cn/problems/find-mode-in-binary-search-tree/) 简单

* * *