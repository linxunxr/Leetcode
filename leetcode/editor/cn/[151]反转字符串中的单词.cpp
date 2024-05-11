
#include <string>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 精简多余的空格
    void removeExtraSpaces(string &s) {
        // 双指针
        int slow = 0;
        for (int fast = 0; fast < s.size(); ++fast) {
            // 判断fast位置的字符是否为空格
            if (s[fast] != ' ') {
                // 如果不是空格，再判断慢指针是否为0
                if (slow != 0) {
                    // 如果慢指针不是0，则赋值
                    s[slow++] = ' ';
                }
                // 遍历，如果非空格，则将快指针赋值给慢指针
                while (fast < s.size() && s[fast] != ' ') {
                    s[slow++] = s[fast++];
                }
            }
        }
        // 设置字符串长度为慢指针
        s.resize(slow);
    }
    // 反转字符串
    void reverseString(string &s, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
    string reverseWords(string s) {
        // 分三步进行
        // 第一步 精简多余的空格
        removeExtraSpaces(s);
        // 第二步 反转字符串
        reverseString(s, 0, s.size() - 1);
        // 第三步 反转字符串中的单词,跳过空格
        int start = 0;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                reverseString(s, start, i - 1);
                start = i + 1;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
