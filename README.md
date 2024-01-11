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

### 5. 栈与队列

| 序号 | 题目                                                                                   | 难度 | 题解                                                                      | 备注     |
|------|----------------------------------------------------------------------------------------|------|---------------------------------------------------------------------------|----------|
| 225  | [用队列实现栈](https://leetcode.cn/problems/implement-stack-using-queues/description/) | 简单 | [solution](./problems/232_implement_queue_using_stacks_用栈实现队列_EASY) |          |
| 232  | [用栈实现队列](https://leetcode.cn/problems/implement-queue-using-stacks/description/) | 简单 | [solution](./problems/232_implement_queue_using_stacks_用栈实现队列_EASY) | 入栈出栈 |


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
