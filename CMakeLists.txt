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
        leetcode/editor/cn/[344]反转字符串.cpp)
