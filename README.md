[toc]

# 力扣题解

## 数据结构

### 1. 数组（8）

| 序号 | 题目                                                                       | 难度 | 题解                                                                      | 备注          |
| ---- | -------------------------------------------------------------------------- | ---- | ------------------------------------------------------------------------- | ------------- |
| 27   | [移除元素](https://leetcode.cn/problems/remove-element)                       | 简单 | [solution](./problems/27_remove_element_移除元素_EASY)                       | 双指针法      |
| 59   | [螺旋矩阵II](https://leetcode.cn/problems/spiral-matrix-ii)                   | 中等 | [solution](./problems/59_spiral_matrix_2_螺旋矩阵2_MEDIUM)                   | 模拟法        |
| 76   | [最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring)         | 困难 | [solution](./problems/76_minimum_window_substring_最小覆盖字符串_HARD)       | 双指针法      |
| 209  | [长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum)    | 中等 | [solution](./problems/209_minimum_size_subarray_sum_长度最小的子数组_MEDIUM) | 滑动窗口法    |
| 283  | [移动零](https://leetcode.cn/problems/move-zeroes)                            | 简单 | [solution](./problems/283_move_zeros_移动零_EASY/)                           | 双指针法      |
| 844  | [比较含有退格的字符串](https://leetcode.cn/problems/backspace-string-compare) | 简单 | [solution](./problems/844_backspace_string_compare_比较含空格的字符串_EASY)  | 双指针法      |
| 904  | [水果成篮](https://leetcode.cn/problems/fruit-into-baskets)                   | 中等 | [solution](./problems/904_fruit_into_baskets_水果成篮_MEDIUM)                | 滑动窗口法    |
| 977  | [有序数组的平方](https://leetcode.cn/problems/squares-of-a-sorted-array)      | 简单 | [solution](./problems/977_squares_of_a_sorted_array_有序数组的平方_EASY)     | 双指针法-首尾 |

### 2. 链表（6）

| 序号 | 题目                                                                                  | 难度 | 题解                                                                                   | 备注          |
| ---- | ------------------------------------------------------------------------------------- | ---- | -------------------------------------------------------------------------------------- | ------------- |
| 19   | [删除链表的倒数第N个节点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list) | 中等 | [solution](./problems/19_remove_nth_node_from_end_of_list_删除链表的倒数第N个节点_MEDIUM) | 双指针法      |
| 24   | [两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs)                 | 中等 | [solution](./problems/24_swap_nodes_in_pairs_两两交换链表中的节点_MEDIUM)                 |               |
| 142  | [环形链表](https://leetcode.cn/problems/linked-list-cycle-ii/description/)II             | 中等 | [solution](./problems/142_linked_list_cycle_II_环形链表_MEDIUM)                           | 双指针法-快慢 |
| 160  | [链表相交](https://leetcode.cn/problems/intersection-of-two-linked-lists/description/)   | 简单 | [solution](./problems/160_intersection_of_two_linked_lists_相交链表_EASY)                 |               |
| 206  | [反转链表](https://leetcode.cn/problems/reverse-linked-list)                             | 简单 | [solution](./problems/206_reverse_linked_list_反转链表_EASY)                              | 双指针法-前后 |
| 707  | [设计链表](https://leetcode.cn/problems/design-linked-list)                              | 中等 | [solution](./problems/707_design_linked_list_设计链表_MEDIUM)                             |               |

### 3. 哈希表（7）

| 序号 | 题目                                                                                               | 难度 | 题解                                                                                     | 备注                |
| ---- | -------------------------------------------------------------------------------------------------- | ---- | ---------------------------------------------------------------------------------------- | ------------------- |
| 1    | [两数之和](https://leetcode.cn/problems/two-sum/description/)                                         | 简单 | [solution](./problems/1_two_sum_两数之和_EASY)                                              | `map`             |
| 49   | [字母异位词分组](https://leetcode.cn/problems/group-anagrams/description/)                            | 中等 | [solution](./problems/49_grop_anagrams_字母异位词分组_MEDIUM)                               | 自定义 `hash`函数 |
| 202  | [快乐数](https://leetcode.cn/problems/happy-number/description/)                                      | 简单 | [solution](./problems/202_happy_number_快乐数_EASY)                                         | `set`查重         |
| 242  | [有效的字母异位词](https://leetcode.cn/problems/valid-anagram/description/)                           | 简单 | [solution](./problems/242_valid_anagram_有效的字母异位词_EASY)                              |                     |
| 383  | [赎金信](https://leetcode.cn/problems/ransom-note/description/)                                       | 简单 | [solution](./problems/383_ransom_note_赎金信_EASY)                                          |                     |
| 438  | [找到字符串中所有字母异位词](https://leetcode.cn/problems/find-all-anagrams-in-a-string/description/) | 中等 | [solution](./problems/438_find_all_anagrams_in_a_string_找到字符串中所有字母异位词_MEDIUM/) |                     |
| 454  | [四数相加II](https://leetcode.cn/problems/4sum-ii/description/)                                       | 中等 | [solution](./problems/454_4sum_II_四数相加II_MEDIUM)                                        |                     |

### 4. 字符串 (4)

| 序号      | 题目                                                                                                                        | 难度 | 题解                                                                                                          | 备注           |
| --------- | --------------------------------------------------------------------------------------------------------------------------- | ---- | ------------------------------------------------------------------------------------------------------------- | -------------- |
| 28        | [找出字符串中第一个匹配项的下标](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/description/) | 简单 | [solution](./problems/28_find_the_index_of_the_first_occurrence_in_a_string_找出字符串中第一个匹配项的下标_EASY) | KMP算法        |
| 151       | [反转字符串中的单词](https://leetcode.cn/problems/reverse-words-in-a-string/description/)                                      | 中等 | [solution](./problems/151_reverse_words_in_a_string_反转字符串中的单词_MEDIUM)                                   | 整体-局部-反转 |
| 459       | [重复的子字符串](https://leetcode.cn/problems/repeated-substring-pattern/description/)                                         | 简单 | [solution](./problems/459_repeated_substring_pattern_重复的子字符串_EASY)                                        | KMP算法        |
| 55 (kama) | [右旋字符串](https://kamacoder.com/problempage.php?pid=1065)                                                                   | 简单 | [solution](./problems/kama_55_right_rotate_string_右旋字符串_EASY)                                               | 整体-局部-反转 |

### 5. 栈与队列 (7)

| 序号 | 题目                                                                                                            | 难度 | 题解                                                                                                | 备注     |
| ---- | --------------------------------------------------------------------------------------------------------------- | ---- | --------------------------------------------------------------------------------------------------- | -------- |
| 20   | [有效的括号](https://leetcode.cn/problems/valid-parentheses/description/)                                          | 简单 | [solution](./problems/20_valid_parentheses_有效的括号_EASY)                                            |          |
| 71   | [简化路径](https://leetcode.cn/problems/simplify-path/description/)                                                | 中等 | [solution](./problems/71_simplify_path_简化路径_MEDIUM)                                                |          |
| 225  | [用队列实现栈](https://leetcode.cn/problems/implement-stack-using-queues/description/)                             | 简单 | [solution](./problems/232_implement_queue_using_stacks_用栈实现队列_EASY)                              |          |
| 232  | [用栈实现队列](https://leetcode.cn/problems/implement-queue-using-stacks/description/)                             | 简单 | [solution](./problems/232_implement_queue_using_stacks_用栈实现队列_EASY)                              | 入栈出栈 |
| 239  | [滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/description/)                                 | 困难 | [solution](./problems/239_sliding_window_maximum_滑动窗口最大值_HARD)                                  | 单调队列 |
| 347  | [前 K 个高频元素](https://leetcode.cn/problems/top-k-frequent-elements/)                                           | 中等 | [solution](./problems/347_top_k_frequent_elements_前K个高频元素_MEDIUM)                                | 优先队列 |
| 1047 | [删除字符串中的所有相邻重复项](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/description/) | 简单 | [solution](./problems/1047_remove_all_adjacent_duplicates_in_string_删除字符串中的所有相邻重复项_EASY) |          |

### 6. 二叉树 (11)

| 序号 | 题目                                                                                                                      | 难度 | 题解                                                                                                           | 备注 |
|------|---------------------------------------------------------------------------------------------------------------------------|------|----------------------------------------------------------------------------------------------------------------|------|
| 94   | [二叉树的中序遍历](https://leetcode.cn/problems/binary-tree-inorder-traversal/description/)                               | 简单 | [solution](./problems/94_binary_tree_inorder_traversal_二叉树的中序遍历_EASY)                                  | 栈   |
| 102  | [二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/description/)                           | 中等 | [solution](./problems/102_binary_tree_level_order_traversal_二叉树的层序遍历_MEDIUM)                           | 队列 |
| 104  | [二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/)                                | 简单 | [solution](./problems/104_maximum_depth_of_binary_tree_二叉树的最大深度_EASY)                                  | 队列 |
| 107  | [二叉树的层序遍历II](https://leetcode.cn/problems/binary-tree-level-order-traversal-ii/description/)                      | 中等 | [solution](./problems/107_binary_tree_level_order_traversal_II_二叉树的层序遍历II_MEDIUM)                      | 队列 |
| 111  | [二叉树的最小深度](https://leetcode.cn/problems/minimum-depth-of-binary-tree/description/)                                | 简单 | [solution](./problems/111_minimum_depth_of_binary_tree_二叉树的最小深度_EASY)                                  | 队列 |
| 116  | [填充每个节点的下一个右侧节点指针](https://leetcode.cn/problems/populating-next-right-pointers-in-each-node/description/) | 中等 | [solution](./problems/116_populating_next_right_pointers_in_each_node_填充每个节点的下一个右侧节点指针_MEDIUM) | 队列 |
| 144  | [二叉树的前序遍历](https://leetcode.cn/problems/binary-tree-preorder-traversal/description/)                              | 简单 | [solution](./problems/144_binary_tree_preorder_traversal_二叉树的前序遍历_EASY)                                | 栈   |
| 145  | [二叉树的后序遍历](https://leetcode.cn/problems/binary-tree-postorder-traversal/description/)                             | 简单 | [solution](./problems/145_binary_tree_postorder_traversal_二叉树的后序遍历_EASY)                               | 栈   |
| 199  | [二叉树的右视图](https://leetcode.cn/problems/binary-tree-right-side-view/description/)                                   | 中等 | [solution](./problems/199_binary_tree_right_side_view_二叉树的右视图_MEDIUM)                                   | 队列 |
| 429  | [N叉树的层序遍历](https://leetcode.cn/problems/n-ary-tree-level-order-traversal/description/)                             | 中等 | [solution](./problems/429_n_ary_tree_level_order_traversal_N叉树的层序遍历_MEDIUM)                             | 队列 |
| 515  | [在每个树行中找最大值](https://leetcode.cn/problems/find-largest-value-in-each-tree-row/description/)                     | 中等 | [solution](./problems/515_find_largest_value_in_each_tree_row_在每个树行中找最大值_MEDIUM)                     | 队列 |
| 637  | [二叉树的层平均值](https://leetcode.cn/problems/average-of-levels-in-binary-tree/description/)                            | 简单 | [solution](./problems/637_average_of_levels_in_binary_tree_二叉树的层平均值_EASY)                              | 队列 |

## 算法

### 1. 双指针法 (11)

| 序号      | 题目                                                                                   | 难度 | 题解                                                                                   | 备注              |
| --------- | -------------------------------------------------------------------------------------- | ---- | -------------------------------------------------------------------------------------- | ----------------- |
| 15        | [三数之和](https://leetcode.cn/problems/3sum/description/)                                | 中等 | [solution](./problems/15_3sum_三数之和_MEDIUM)                                            | 双指针法-左右     |
| 18        | [四数之和](https://leetcode.cn/problems/4sum/description/)                                | 中等 | [solution](./problems/18_4sum_四数之和_MEDIUM)                                            | 双指针法-左右     |
| 19        | [删除链表的倒数第N个节点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list)  | 中等 | [solution](./problems/19_remove_nth_node_from_end_of_list_删除链表的倒数第N个节点_MEDIUM) | 双指针法          |
| 27        | [移除元素](https://leetcode.cn/problems/remove-element)                                   | 简单 | [solution](./problems/27_remove_element_移除元素_EASY)                                    | 双指针法          |
| 142       | [环形链表](https://leetcode.cn/problems/linked-list-cycle-ii/description/)II              | 中等 | [solution](./problems/142_linked_list_cycle_II_环形链表_MEDIUM)                           | 双指针法-快慢     |
| 151       | [反转字符串中的单词](https://leetcode.cn/problems/reverse-words-in-a-string/description/) | 中等 | [solution](./problems/151_reverse_words_in_a_string_反转字符串中的单词_MEDIUM)            | 整体-局部-反转    |
| 283       | [移动零](https://leetcode.cn/problems/move-zeroes)                                        | 简单 | [solution](./problems/283_move_zeros_移动零_EASY/)                                        | 双指针法          |
| 844       | [比较含有退格的字符串](https://leetcode.cn/problems/backspace-string-compare)             | 简单 | [solution](./problems/844_backspace_string_compare_比较含空格的字符串_EASY)               | 双指针法          |
| 977       | [有序数组的平方](https://leetcode.cn/problems/squares-of-a-sorted-array)                  | 简单 | [solution](./problems/977_squares_of_a_sorted_array_有序数组的平方_EASY)                  | 双指针法-首尾     |
| 54 (kama) | [替换数字](https://kamacoder.com/problempage.php?pid=1064)                                | 简单 | [solution](./problems/kama_54_replace_number_替换数字_EASY)                               | 字符串 `resize` |
| 55 (kama) | [右旋字符串](https://kamacoder.com/problempage.php?pid=1065)                              | 简单 | [solution](./problems/kama_55_right_rotate_string_右旋字符串_EASY)                        | 整体-局部-反转    |
