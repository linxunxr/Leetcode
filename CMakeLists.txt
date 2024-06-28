cmake_minimum_required(VERSION 3.28)
project(Leetcode)

set(CMAKE_CXX_STANDARD 26)

add_executable(Leetcode main.cpp
        leetcode/editor/cn/[1]两数之和.cpp
        leetcode/editor/cn/[724]寻找数组的中心下标.cpp
        leetcode/editor/cn/[704]二分查找.cpp
        leetcode/editor/cn/[35]搜索插入位置.cpp
        leetcode/editor/cn/[56]合并区间.cpp
        "leetcode/editor/cn/[面试题 01.07]旋转矩阵.cpp"
        "leetcode/editor/cn/[面试题 01.08]零矩阵.cpp"
        leetcode/editor/cn/[498]对角线遍历.cpp
        leetcode/editor/cn/[14]最长公共前缀.cpp
        leetcode/editor/cn/[151]反转字符串中的单词.cpp
        leetcode/editor/cn/[344]反转字符串.cpp
        "leetcode/editor/cn/[LCR 006]两数之和 II - 输入有序数组.cpp"
        leetcode/editor/cn/[27]移除元素.cpp
        leetcode/editor/cn/[27]移除元素.cpp
        "leetcode/editor/cn/[485]最大连续 1 的个数.cpp"
        "leetcode/editor/cn/[LCR 008]长度最小的子数组.cpp"
        leetcode/editor/cn/[977]有序数组的平方.cpp
        "leetcode/editor/cn/[59]螺旋矩阵 II.cpp"
        leetcode/editor/cn/[118]杨辉三角.cpp
        leetcode/editor/cn/[203]移除链表元素.cpp
        "leetcode/editor/cn/[80]删除有序数组中的重复项 II.cpp"
        leetcode/editor/cn/[75]颜色分类.cpp
        leetcode/editor/cn/[707]设计链表.cpp
        leetcode/editor/cn/[206]反转链表.cpp
        leetcode/editor/cn/[24]两两交换链表中的节点.cpp
        "leetcode/editor/cn/[19]删除链表的倒数第 N 个结点.cpp"
        "leetcode/editor/cn/[面试题 02.07]链表相交.cpp"
        "leetcode/editor/cn/[142]环形链表 II.cpp"
        leetcode/editor/cn/[242]有效的字母异位词.cpp
        leetcode/editor/cn/[349]两个数组的交集.cpp
        leetcode/editor/cn/[202]快乐数.cpp
        "leetcode/editor/cn/[454]四数相加 II.cpp"
)
